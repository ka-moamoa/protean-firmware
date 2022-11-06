#include "nvm.h"
#include "board.h"
#include "led.h"
#include "pb.h"

extern uint32_t _snvm;
extern uint32_t _envm;

int nvmExecuteCommand(uint8_t cmd) {
    return framWrite(cmd, NULL, NULL, 0);
}

int nvmGetStatusReg(uint8_t *statusReg) {
    int retVal = framRead(FRAM_READ_STATUS, NULL, statusReg, 1);
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("CANNOT READ STATUS REGISTER: %d", retVal);    
        return retVal;
    }
    return E_NO_ERROR;
}

int nvmGetDeviceID(uint32_t *devID) {
    uint8_t devIDBytes[DEV_ID_SIZE];
    int retVal = framRead(FRAM_READ_DEV_ID, NULL, devIDBytes, DEV_ID_SIZE);
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("CANNOT READ FRAM ID: %d", retVal);    
        return retVal;
    }
    *devID = BYTES_TO_INT(devIDBytes);
    return E_NO_ERROR;
}

int nvmSetWELMode(uint8_t wel) {
    int retVal;
    if (wel) {
        retVal = nvmExecuteCommand(FRAM_SET_WRITE_EN_LATCH);
    }
    else {
        retVal = nvmExecuteCommand(FRAM_RESET_WRITE_EN_LATCH);
    }
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("CANNOT WRITE WEL TO STATUS REGISTER: %d", retVal);    
        return retVal;
    }
    return E_NO_ERROR;
}

int nvmWriteData(uint32_t addr, uint8_t *src, uint32_t len) {
    return framWrite(FRAM_WRITE_MEMORY, &addr, src, len);
}

int nvmReadData(uint32_t addr, uint8_t *dst, uint32_t len) {
    return framRead(FRAM_READ_MEMORY, &addr, dst, len);
}

void nvmResetISR(void* cbdata)
{
    LED_On(LED1);
    KERNEL_LOG_INFO("Resetting NVM...");
    nvmClear();
    KERNEL_LOG_INFO("NVM has been reset");
    KERNEL_LOG_INFO("Waiting for user to press reset button...");
    while(1) {};
}

static volatile mxc_gpio_cfg_t nvm_interrupt;
static volatile mxc_gpio_cfg_t nvm_interrupt_status;

int nvmResetIntConfig() {
    PB_IntEnable(PB0);
    PB_RegisterCallback(PB0, (pb_callback) nvmResetISR);
    return E_NO_ERROR;
}

int nvmCheckResetPin() {
    if (PB_Get(PB0)) {
        LED_On(LED1);
        KERNEL_LOG_INFO("Resetting NVM...");
        nvmClear();
        KERNEL_LOG_INFO("NVM has been reset");
        KERNEL_LOG_INFO("Waiting for user to press reset button...");
        while(1) {};
    }
    return E_NO_ERROR;
}

int nvmClear() {
    uint32_t startAddr = ((uint32_t)(&_snvm)) - FRAM_START_ADDRESS;
    uint32_t endAddr = ((uint32_t)(&_envm)) - FRAM_START_ADDRESS;
    
    uint8_t tempBuff[NVM_MAX_BLOCK_SIZE];
    uint32_t len = NVM_MAX_BLOCK_SIZE * (sizeof(uint8_t));
    memset(tempBuff, 0, len);
    int retVal;
    for (uint32_t addr = startAddr; addr < endAddr; addr+=NVM_MAX_BLOCK_SIZE) {
        if ((endAddr - addr) < NVM_MAX_BLOCK_SIZE) {
            len = endAddr - addr;
        }
        retVal = framWrite(FRAM_WRITE_MEMORY, &addr, tempBuff, len);
        if (retVal != E_NO_ERROR) {
            return retVal;
        }
    }
    return E_NO_ERROR;
}

int nvmClearAll() {
    uint8_t tempBuff[NVM_MAX_BLOCK_SIZE];
    uint32_t len = NVM_MAX_BLOCK_SIZE * (sizeof(uint8_t));
    memset(tempBuff, 0, len);
    int retVal;
    for (uint32_t addr = 0; addr < FRAM_SIZE; addr+=NVM_MAX_BLOCK_SIZE) {
        retVal = framWrite(FRAM_WRITE_MEMORY, &addr, tempBuff, len);
        if (retVal != E_NO_ERROR) {
            return retVal;
        }
    }
    return E_NO_ERROR;
}

int nvmInit() {
    int retVal;
    retVal = initFRAMSPI();
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("SPI CONFIGURATION FAILED");    
        return retVal;
    }

    uint32_t deviceID = 0;
    retVal = nvmGetDeviceID(&deviceID);
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("FRAM ID READ ERROR: %d", retVal);
        return retVal;
    }
    
    if (deviceID != FRAM_DEV_ID) {
        KERNEL_LOG_ERROR("WRONG DEVICE ID: 0x%08x", deviceID);
        return E_NO_DEVICE;
    }
    KERNEL_LOG_INFO("Device ID: 0x%08x", deviceID);

    uint8_t statusReg = 0;
    retVal = nvmGetStatusReg(&statusReg);
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("FRAM STATUS REGISTER READ ERROR: %d", retVal);
        return retVal;
    }
    // KERNEL_LOG_INFO("Status Register: 0x%02x", statusReg);

    // check if the NVM reset button is already pressed
    // this is needed to reset the NVM if the MCU is stuck after an exception
    nvmCheckResetPin();

    // otherwise configure interrupt for ease of use to reset NVM
    retVal = nvmResetIntConfig();
    if (retVal == E_NO_ERROR) {
        KERNEL_LOG_INFO("NVM interrupt configured successfully");
        return retVal;
    }

    return E_NO_ERROR;
}
