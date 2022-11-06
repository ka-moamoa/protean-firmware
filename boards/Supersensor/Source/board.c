#include <stdio.h>
#include "mxc_device.h"
#include "mxc_sys.h"
#include "mxc_assert.h"
#include "board.h"
#include "uart.h"
#include "gpio.h"
#include "mxc_pins.h"
#include "led.h"
#include "pb.h"
#include "mxc_sys.h"
#include "lpgcr_regs.h"
#include "simo_regs.h"
#include "config.h"
#include "kernel_debug_logger.h"
#include "nvm.h"
#include "energy.h"

/***** Global Variables *****/
mxc_uart_regs_t* ConsoleUart = MXC_UART_GET_UART(CONSOLE_UART);
extern uint32_t SystemCoreClock;

const mxc_gpio_cfg_t pb_pin[] = {
    {MXC_GPIO0, MXC_GPIO_PIN_14, MXC_GPIO_FUNC_IN, MXC_GPIO_PAD_PULL_UP, MXC_GPIO_VSSEL_VDDIOH},
};
const unsigned int num_pbs = (sizeof(pb_pin) / sizeof(mxc_gpio_cfg_t));

const mxc_gpio_cfg_t led_pin[] = {
    {MXC_GPIO0, MXC_GPIO_PIN_2, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH},
    {MXC_GPIO0, MXC_GPIO_PIN_31, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH},
    {MXC_GPIO0, MXC_GPIO_PIN_30, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH},
};
const unsigned int num_leds = (sizeof(led_pin) / sizeof(mxc_gpio_cfg_t));

/******************************************************************************/
void mxc_assert(const char* expr, const char* file, int line)
{
    KERNEL_LOG_INFO("MXC_ASSERT %s #%d: (%s)\n", file, line, expr);
    
    while (1);
}

/******************************************************************************/
int Board_Init(void)
{
#ifndef __riscv
    // Enable GPIO
    MXC_SYS_ClockEnable(MXC_SYS_PERIPH_CLOCK_GPIO0);
    MXC_SYS_ClockEnable(MXC_SYS_PERIPH_CLOCK_GPIO1);
    MXC_SYS_ClockEnable(MXC_SYS_PERIPH_CLOCK_GPIO2);
    
    if (Console_Init() < E_NO_ERROR) {
        KERNEL_LOG_ERROR("UART INITIALIZATION FAILED");
        while (1);
    }

    // Set UART 0 pads to 3.3V
    MXC_GPIO0->vssel |= (0xF << 0);	
    
     
    if (PB_Init() != E_NO_ERROR) {
        KERNEL_LOG_ERROR("PUSH BUTTON INITIALIZATION FAILED");
        while (1);
    }
    
    if (LED_Init() != E_NO_ERROR) {
        KERNEL_LOG_ERROR("LED INITIALIZATION FAILED");
        while (1);
    }
    
    MXC_SIMO->vrego_c = 0x43; // Set CNN voltage

    // Wait for PMIC 1.8V to become available, about 180ms after power up.
    // MXC_Delay(200000);
#endif // __riscv

    KERNEL_LOG_INFO("\n********************************* RESET *********************************");
    // Set system clock to 100 MHz
    if(MXC_SYS_Clock_Select(MXC_SYS_CLOCK_IPO) != E_NO_ERROR) {
        KERNEL_LOG_ERROR("TIMEOUT: CLOCK CANNOT BE UPDATED");
        while (1);
    }
    SystemCoreClockUpdate();

    LED_On(LED1);
    LED_On(LED0);

    // initialize non-volatile memory
    if(nvmInit() != E_NO_ERROR) {
        KERNEL_LOG_ERROR("NVM CONTROLLER INITIALIIZATION FAILED");
        while (1);
    }
    else {
        KERNEL_LOG_INFO("NVM configured successfully!");
    }

    // initialize energy metering
    if(initEnergyMeasurements() != E_NO_ERROR) {
        KERNEL_LOG_ERROR("ENERGY METERING INITIALIZATION FAILED");
        while (1);
    }
    else {
        KERNEL_LOG_INFO("timer configured successfully!");
    }
    
    return E_NO_ERROR;
}

/******************************************************************************/
int Console_Init(void)
{
    int err;
    
    if ((err = MXC_UART_Init(ConsoleUart, CONSOLE_BAUD, MXC_UART_IBRO_CLK)) != E_NO_ERROR) {
        return err;
    }
    
    return E_NO_ERROR;
}

/******************************************************************************/
int Console_Shutdown(void)
{
    int err;
    
    if ((err = MXC_UART_Shutdown(ConsoleUart)) != E_NO_ERROR) {
        return err;
    }
    
    return E_NO_ERROR;
}

/******************************************************************************/
void NMI_Handler(void)
{
    __NOP();
}