#include "nvm.h"

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
    mxc_gpio_cfg_t* cfg = cbdata;
    MXC_GPIO_OutToggle(cfg->port, cfg->mask);
    KERNEL_LOG_INFO("Resetting NVM...");
    nvmClear();
    KERNEL_LOG_INFO("NVM has been reset");
    KERNEL_LOG_INFO("Waiting for user to press reset button...");
    while(1) {};
}

static volatile mxc_gpio_cfg_t nvm_interrupt;
static volatile mxc_gpio_cfg_t nvm_interrupt_status;

int nvmResetIntConfig() {
    // configure interrupt status pin as an output
    nvm_interrupt_status.port = NVM_RESET_STATUS_PORT;
    nvm_interrupt_status.mask = NVM_RESET_STATUS_PIN;
    nvm_interrupt_status.pad = MXC_GPIO_PAD_NONE;
    nvm_interrupt_status.func = MXC_GPIO_FUNC_OUT;
    nvm_interrupt_status.vssel = MXC_GPIO_VSSEL_VDDIO;
    MXC_GPIO_Config((mxc_gpio_cfg_t*)&nvm_interrupt_status);
    
    /*
     * Set up interrupt pin.
     * Switch on EV kit is open when non-pressed, and grounded when pressed.  
     * Use an internal pull-up so pin reads high when button is not pressed.
     */
    nvm_interrupt.port = NVM_RESET_INT_PORT;
    nvm_interrupt.mask = NVM_RESET_INT_PIN;
    nvm_interrupt.pad = MXC_GPIO_PAD_PULL_UP;
    nvm_interrupt.func = MXC_GPIO_FUNC_IN;
    nvm_interrupt.vssel = MXC_GPIO_VSSEL_VDDIOH;
    MXC_GPIO_Config((mxc_gpio_cfg_t*)&nvm_interrupt);
    MXC_GPIO_RegisterCallback((mxc_gpio_cfg_t*)&nvm_interrupt, nvmResetISR, (mxc_gpio_cfg_t*)&nvm_interrupt_status);
    MXC_GPIO_IntConfig((mxc_gpio_cfg_t*)&nvm_interrupt, MXC_GPIO_INT_FALLING);
    MXC_GPIO_EnableInt(nvm_interrupt.port, nvm_interrupt.mask);
    NVIC_EnableIRQ(MXC_GPIO_GET_IRQ(MXC_GPIO_GET_IDX(NVM_RESET_INT_PORT)));
    NVIC_SetPriority(MXC_GPIO_GET_IRQ(MXC_GPIO_GET_IDX(NVM_RESET_INT_PORT)), 0);

    return E_NO_ERROR;
}

int nvmCheckResetPin() {
    // configure interrupt status pin as an output
    nvm_interrupt_status.port = NVM_RESET_STATUS_PORT;
    nvm_interrupt_status.mask = NVM_RESET_STATUS_PIN;
    nvm_interrupt_status.pad = MXC_GPIO_PAD_NONE;
    nvm_interrupt_status.func = MXC_GPIO_FUNC_OUT;
    nvm_interrupt_status.vssel = MXC_GPIO_VSSEL_VDDIO;
    MXC_GPIO_Config((mxc_gpio_cfg_t*)&nvm_interrupt_status);
    
    /*
     * Set up input pin.
     * Switch on EV kit is open when non-pressed, and grounded when pressed.  
     * Use an internal pull-up so pin reads high when button is not pressed.
     */
    nvm_interrupt.port = NVM_RESET_INT_PORT;
    nvm_interrupt.mask = NVM_RESET_INT_PIN;
    nvm_interrupt.pad = MXC_GPIO_PAD_PULL_UP;
    nvm_interrupt.func = MXC_GPIO_FUNC_IN;
    MXC_GPIO_Config((mxc_gpio_cfg_t*)&nvm_interrupt);

    if (!MXC_GPIO_InGet(nvm_interrupt.port, nvm_interrupt.mask)) {
        MXC_GPIO_OutToggle(nvm_interrupt_status.port, nvm_interrupt_status.mask);
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

    retVal = nvmSetWELMode(true);
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("FRAM SET WEL MODE ERROR: %d", retVal);
        return retVal;
    }

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
