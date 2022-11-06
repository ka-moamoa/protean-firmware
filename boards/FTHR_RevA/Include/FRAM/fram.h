#ifndef FRAM_H_
#define FRAM_H_

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "spi.h"
#include "spi_reva.h"
#include "mxc_pins.h"
#include "mxc_device.h"
#include "config.h"
#include "kernel_debug_logger.h"

/***** Definitions *****/
// SPI commands
#define FRAM_SET_WRITE_EN_LATCH     0x06
#define FRAM_RESET_WRITE_EN_LATCH   0x04
#define FRAM_READ_STATUS            0x05
#define FRAM_WRITE_STATUS           0x01
#define FRAM_READ_MEMORY            0x03
#define FRAM_WRITE_MEMORY           0x02
#define FRAM_READ_DEV_ID            0x9F
#define FRAM_FAST_READ              0x0B
#define FRAM_SLEEP_MODE             0xB9

#define DEV_ID_SIZE                 4                       // bytes
#define FRAM_DEV_ID                 0x03497F04
#define FRAM_SIZE                   512 * 1024              // 512 KB
#define FRAM_START_ADDRESS          0x20040000


// FRAM configuration
#define SPI_SPEED                   2000000 //Hz
#define SPI_CHARACTER_SIZE          8 // bits
#define NVM_MAX_BLOCK_SIZE          512 // bytes

#define BYTES_TO_INT(x)             ((x[3] << 24) | (x[2] << 16) | (x[1] << 8) | x[0])

#define SPI                     MXC_SPI0
#define SPI_SLAVE               1
#define NVM_RESET_INT_PORT      MXC_GPIO0
#define NVM_RESET_INT_PIN       MXC_GPIO_PIN_2
#define NVM_RESET_STATUS_PORT   MXC_GPIO2
#define NVM_RESET_STATUS_PIN    MXC_GPIO_PIN_0

/***** Functions *****/
int framRead(uint8_t cmd, uint32_t *addr, uint8_t *dst, uint32_t len);
int framWrite(uint8_t cmd, uint32_t *addr, uint8_t *src, uint32_t len);
int initFRAMSPI();


#endif  // FRAM_H_
