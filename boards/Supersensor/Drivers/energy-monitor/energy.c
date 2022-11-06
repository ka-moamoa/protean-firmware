#include "energy.h"
#include "board.h"
#include "config.h"
#include "fram.h"
#include <mxc.h>
#include "mxc_pins.h"
#include "mxc_device.h"
#include "math.h"
#include "nvm.h"
#include "kernel_debug_logger.h"

__nv voltage_threshold_t _voltage_threshold;
voltage_threshold_t _new_voltage_threshold = DEFAULT_VOLTAGE_THRESHOLD;
voltage_threshold_t _prev_voltage_threshold = DEFAULT_VOLTAGE_THRESHOLD;

__nv float _energy_window[WINDOW_SIZE];
float _sram_energy_window[WINDOW_SIZE] = {0};

__nv uint8_t _window_index;
uint8_t _sram_window_index = 0;

inline float adcValToVoltage(uint16_t adc_val)
{
    return adc_val * (float) (VREF / 1024.00);
}

// get voltage of the capacitor
float getCapacitorVoltage() {
    uint16_t adc_val;
    uint8_t overflow;

    MXC_ADC_StartConversion(CAPACITOR_VOLTAGE_ADC);
    overflow = (MXC_ADC_GetData(&adc_val) == E_OVERFLOW ? 1 : 0);
    if(overflow)
    {
        KERNEL_LOG_ERROR("ADC OVERFLOW!!!");
        while(1);
    }
    
    float voltage = adcValToVoltage(adc_val) * (CAPACITOR_R1 + CAPACITOR_R2) / CAPACITOR_R2;
    return voltage;

}

// get current(mA) flowing into the capacitors
float getHarvestedCurrent() {
    uint16_t adc_val;
    uint8_t overflow;

    MXC_ADC_StartConversion(SENSOR_CURRENT_ADC);
    overflow = (MXC_ADC_GetData(&adc_val) == E_OVERFLOW ? 1 : 0);
    if(overflow)
    {
        KERNEL_LOG_ERROR("ADC OVERFLOW!!!");
        while(1);
    }

    float current = (adcValToVoltage(adc_val) / (CURRENT_SENSOR_GAIN * CURRENT_SENSE_R)) * 1000; // mA
    
    current = current + CURRENT_SENSOR_ERROR;
    return current;
}

// get current(mA) flowing through the resistors
float getWastedCurrent() {
    uint16_t adc_val;
    uint8_t overflow;

    MXC_ADC_StartConversion(RESISTOR_CURRENT_ADC);
    overflow = (MXC_ADC_GetData(&adc_val) == E_OVERFLOW ? 1 : 0);
    if(overflow)
    {
        KERNEL_LOG_ERROR("ADC OVERFLOW!!!");
        while(1);
    }

    float current = (adcValToVoltage(adc_val) / CURRENT_R2)/1000; // mA
    return current;
}

// set threshold voltage of the board
// MCU should turn on at this voltageF
int setThresholdVoltage(voltage_threshold_t voltage) {
    uint8_t val = (uint8_t) voltage; // 150mV is the reference voltage
    uint8_t txBuff[2];

    // initialize SPI
    mxc_spi_pins_t spi_pins;
    spi_pins.clock = TRUE;
    spi_pins.miso = FALSE;
    spi_pins.mosi = TRUE;
    spi_pins.sdio2 = FALSE;
    spi_pins.sdio3 = FALSE;
    spi_pins.ss0 = TRUE;    // FRAMs
    spi_pins.ss1 = TRUE;    // FRAM
    spi_pins.ss2 = TRUE;    // voltage threshold resistor

    int retVal;
    retVal = MXC_SPI_Init(ENERGY_SPI, 1, 0, 3, 0, ENERGY_SPI_SPEED, spi_pins);
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("SPI PERIPHERAL INITIALIZATION ERROR: %d", retVal);    
        return retVal;
    }

    retVal = MXC_SPI_SetDataSize(ENERGY_SPI, ENERGY_SPI_CHARACTER_SIZE);
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("SPI SET DATASIZE ERROR: %d", retVal);
        return retVal;
    }
    
    retVal = MXC_SPI_SetWidth(ENERGY_SPI, SPI_WIDTH_STANDARD);
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("SPI SET WIDTH ERROR: %d", retVal);
        return retVal;
    }

    // set wiper to desired value
    txBuff[0] = 0x0;
    txBuff[1] = val;

    mxc_spi_req_t req;
    req.spi = ENERGY_SPI;
    req.txData = txBuff;
    req.rxData = NULL;
    req.txLen = 2;
    req.rxLen = 0;
    req.ssIdx = ENERGY_SPI_SLAVE;
    req.ssDeassert = 1;
    req.txCnt = 0;
    req.rxCnt = 0;

    retVal = MXC_SPI_MasterTransaction(&req);
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("WRITE ERROR:%d", retVal);    
        return retVal;
    }

    // set non-volatile register to desired value
    txBuff[0] = 16;

    retVal = MXC_SPI_MasterTransaction(&req);
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("WRITE ERROR:%d", retVal);    
        return retVal;
    }

    KERNEL_LOG_DEBUG("voltage threshold set to %u", (uint8_t) voltage);

    __NVM_SET(_voltage_threshold, voltage);

    // both FRAM and digipot are using same SPI with different speeds
    // roll back to FRAM SPI configuration 

    return initFRAMSPI();
}

// get energy(mJ) stored in the capacitor
inline float getStoredEnergy() {
    float cap_voltage = getCapacitorVoltage();
    KERNEL_LOG_INFO("capacitor voltage: %fV", cap_voltage);
    return (0.5 * CAPACITOR_ARRAY * cap_voltage * cap_voltage) - (0.5 * CAPACITOR_ARRAY * LOWER_VOLTAGE_THRESHOLD * LOWER_VOLTAGE_THRESHOLD);
}

// checks if energy is sufficient to execute next task
bool isSufficientEnergy() {
    float e = getStoredEnergy();
    KERNEL_LOG_INFO("capacitor energy: %fmJ", e);
    return e > CAP_ENERGY_THRESHOLD;
}

// get energy that is going into the capacitor
float getHarvestedEnergy() {
    return 0;
}

// get predicted energy using moving average
float getPredictedEnergy() {
    float sum = 0;
    int i;
    for (i = 0; i < WINDOW_SIZE; i++) {
        sum += _sram_energy_window[i];
        KERNEL_LOG_DEBUG("energy window[%d]: %f", i, _sram_energy_window[i]);
    }
    return sum / ((float) WINDOW_SIZE);
}

// get new threshold voltage for the capacitor
inline voltage_threshold_t getNewVoltageThreshold() {
    float predicted_energy = getPredictedEnergy();
    if (IS_HIGH_ENERGY(predicted_energy)) {
        KERNEL_LOG_INFO("high energy: %f", predicted_energy);
        return THRESH_3_15V;
    }
    else if (IS_MED_ENERGY(predicted_energy)) { 
        KERNEL_LOG_INFO("medium energy: %f", predicted_energy);
        return THRESH_3_00V;
    }
    else {
        KERNEL_LOG_INFO("low energy: %f", predicted_energy);
        return THRESH_2_85V;
    }
}

// ISR of energy timer
void energyTimerHandler()
{
    // Clear interrupt
    MXC_TMR_ClearFlags(ENERGY_TIMER);

    float current = getHarvestedCurrent();
    KERNEL_LOG_INFO("sensor current: %fmA", current);

    // dont't write to FRAM here directly because the interrupt may have occured while another SPI transaction was in progress
    // write to a global buffer, and push to FRAM only when power failure is approaching
    _sram_energy_window[_sram_window_index] = current;
    if (_sram_window_index < WINDOW_SIZE - 1) {
        _sram_window_index++;
    }
    else {
        _sram_window_index = 0;
    }

    // TODO
    // move this to __commit()
#if ADAPTIVE_CAP_STORAGE
    _new_voltage_threshold = getNewVoltageThreshold();
#endif
}

// initialize periodic energy measurements
int initEnergyMeasurements()
{
    // initialize ADC
    int retVal;
    retVal = MXC_ADC_Init();
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("ADC INITIALIZATION FAILED");
        return retVal;
    }

#if (ADAPTIVE_CAP_STORAGE || MULTI_TIER_EXECUTION)

    __NVM_MEMSET(_sram_energy_window, _energy_window, (WINDOW_SIZE * sizeof(float)));
    __NVM_GET(_sram_window_index, _window_index);
    __NVM_GET(_new_voltage_threshold, _voltage_threshold);

    _prev_voltage_threshold = _new_voltage_threshold;

    // take a measurment here because the power failure may occur before the timer fires
    getHarvestedCurrent();

    // setup periodic timer
    NVIC_SetVector(ENERGY_TIMER_IRQ, energyTimerHandler);
    NVIC_EnableIRQ(ENERGY_TIMER_IRQ);

    // Declare variables
    mxc_tmr_cfg_t tmr;
    uint32_t periodTicks = MXC_TMR_GetPeriod(ENERGY_TIMER, ENERGY_TIMER_CLOCK_SOURCE, 1, ENERGY_TIMER_FREQ);
    
    /*
    Steps for configuring a timer for PWM mode:
    1. Disable the timer
    2. Set the prescale value
    3  Configure the timer for continuous mode
    4. Set polarity, timer parameters
    5. Enable Timer
    */
    
    MXC_TMR_Shutdown(ENERGY_TIMER);
    
    tmr.pres = 1; // WARNING: never set this to TMR_PRES_1, because its value is 0 which creates an exception in MXC_TMR_RevB_GetPeriod()
    tmr.mode = TMR_MODE_CONTINUOUS;
    tmr.bitMode = TMR_BIT_MODE_32;
    tmr.clock = ENERGY_TIMER_CLOCK_SOURCE;
    tmr.cmp_cnt = periodTicks;
    tmr.pol = 0;
    
    retVal = MXC_TMR_Init(ENERGY_TIMER, &tmr, true);
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("TIMER INITIALIZATION FAILED");
        return retVal;
    }

    MXC_TMR_EnableInt(ENERGY_TIMER);
    MXC_TMR_EnableWakeup(ENERGY_TIMER, &tmr);  
    MXC_TMR_Start(ENERGY_TIMER);

#endif

    return E_NO_ERROR;
}

// initialize energy driver's global SRAM/FRAM variable here
// called at first boot only
void __init_energy_driver() {
    __NVM_MEMSET(_energy_window, _sram_energy_window, (WINDOW_SIZE * sizeof(float)));
    __NVM_SET(_window_index, _sram_window_index);
    __NVM_SET(_voltage_threshold, DEFAULT_VOLTAGE_THRESHOLD);

}