#include <stdio.h>

#ifndef _BOARD_H
#define _BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#define BOARD_SUPERSENSOR

#ifndef CONSOLE_UART
#define CONSOLE_UART    0      /// UART instance to use for console
#endif

#ifndef CONSOLE_BAUD
#define CONSOLE_BAUD    115200  /// Console baud rate
#endif

#define SCCB_SCL_PORT   MXC_GPIO0        /// SCCB clock port
#define SCCB_SCL_PIN    MXC_GPIO_PIN_30  /// SCCB clock pin
#define SCCB_SDA_PORT   MXC_GPIO0        /// SCCB data port
#define SCCB_SDA_PIN    MXC_GPIO_PIN_31  /// SCCB data pin

#define LED_OFF         0       /// Inactive state of LEDs
#define LED_ON          1       /// Active state of LEDs

/**
 *  A reference to D1 of the processor board.
 *  Can be used with the LED_On, LED_Off, and LED_Toggle functions.
 */
#define LED0            0
/**
 *  A reference to D4 of the carrier board.
 *  Can be used with the LED_On, LED_Off, and LED_Toggle functions.
 */
#define LED1            1
/**
 *  A reference to D5 of the carrier board.
 *  Can be used with the LED_On, LED_Off, and LED_Toggle functions.
 */
#define LED2            2

/**
 *  A reference to FRAM_RESET of the carrier board.
 *  Used to reset FRAM
 */
#define PB0             0

/**
 * \brief   Initialize the BSP and board interfaces.
 * \returns #E_NO_ERROR if everything is successful
 */
int Board_Init(void);

/**
 * \brief   Initialize or reinitialize the console. This may be necessary if the
 *          system clock rate is changed.
 * \returns #E_NO_ERROR if everything is successful
 */
int Console_Init(void);

/**
 * \brief   Shutdown the console.
 * \returns #E_NO_ERROR if everything is successful
 */
int Console_Shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* _BOARD_H */
