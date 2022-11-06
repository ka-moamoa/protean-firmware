#include "fram.h"

int framRead(uint8_t cmd, uint32_t *addr, uint8_t *dst, uint32_t len) {
    uint32_t newLen = len + 1;  // 1 byte for command 
    if (addr != NULL) {
        newLen += 3;    // 3 bytes for address
        if (((*addr) + len - 1) >= FRAM_SIZE) {
            KERNEL_LOG_INFO("Trying to access FRAM address 0x%06x", ((*addr) + len - 1));
            KERNEL_LOG_ERROR("ADDRESS CANNOT BE GREATER THAN 0x%06x", FRAM_SIZE - 1);
            return E_NOT_SUPPORTED;
        }
    }
    
    // make a TX buffer because we want to send command, address, and data all together
    // total bytes = data length + command + address
    uint8_t *txBuff = (uint8_t*) calloc((newLen), sizeof(uint8_t));
    
    // make a RX buffer because RX line is read while command and address bytes are being sent 
    uint8_t *rxBuff = (uint8_t*) calloc((newLen), sizeof(uint8_t));

    // command will go first and then 3-byte address
    txBuff[0] = cmd;
    if (addr != NULL) {
        txBuff[1] = (uint8_t) (((*addr) >> 16) & 0xFF);
        txBuff[2] = (uint8_t) (((*addr) >> 8) & 0xFF);
        txBuff[3] = (uint8_t) ((*addr) & 0xFF);
    }

    // create SPI request and make transaction
    mxc_spi_req_t req;
    req.spi = SPI;
    req.txData = txBuff;
    req.rxData = rxBuff;
    req.txLen = newLen;
    req.rxLen = newLen;
    req.ssIdx = SPI_SLAVE;
    req.ssDeassert = 1;
    req.txCnt = 0;
    req.rxCnt = 0;
    
    int retVal;
    retVal = MXC_SPI_MasterTransaction(&req);

    // copy received data back and free memory
    memcpy(dst, (rxBuff + (newLen - len)), len);
    free(txBuff);
    free(rxBuff);

    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("READ ERROR:%d", retVal);    
        return retVal;
    }
    return E_NO_ERROR;
}

int framWrite(uint8_t cmd, uint32_t *addr, uint8_t *src, uint32_t len) {
    uint32_t newLen = len + 1;  // 1 byte for command 
    if (addr != NULL) {
        newLen += 3;    // 3 bytes for address
        if (((*addr) + len - 1) >= FRAM_SIZE) {
            KERNEL_LOG_INFO("Trying to access FRAM address 0x%06x", ((*addr) + len - 1));
            KERNEL_LOG_ERROR("ADDRESS CANNOT BE GREATER THAN 0x%06x", FRAM_SIZE - 1);
            return E_NOT_SUPPORTED;
        }
    }
    
    // make a TX buffer because we want to send command, address, and data all together
    // total bytes = data length + command + address
    uint8_t *txBuff = (uint8_t*) malloc(newLen * sizeof(uint8_t));
    memcpy((txBuff + (newLen - len)), src, len);
    
    txBuff[0] = cmd;
    if (addr != NULL) {
        txBuff[1] = (uint8_t) (((*addr) >> 16) & 0xFF);
        txBuff[2] = (uint8_t) (((*addr) >> 8) & 0xFF);
        txBuff[3] = (uint8_t) ((*addr) & 0xFF);
    }

    // create SPI request and make transaction
    mxc_spi_req_t req;
    req.spi = SPI;
    req.txData = txBuff;
    req.rxData = NULL;
    req.txLen = newLen;
    req.rxLen = 0;
    req.ssIdx = SPI_SLAVE;
    req.ssDeassert = 1;
    req.txCnt = 0;
    req.rxCnt = 0;

    int retVal;
    retVal = MXC_SPI_MasterTransaction(&req);

    free(txBuff);

    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("WRITE ERROR:%d", retVal);    
        return retVal;
    }
    return E_NO_ERROR;
}


int initFRAMSPI() {
    mxc_spi_pins_t spi_pins;
    spi_pins.clock = TRUE;
    spi_pins.miso = TRUE;
    spi_pins.mosi = TRUE;
    spi_pins.sdio2 = FALSE;
    spi_pins.sdio3 = FALSE;
    spi_pins.ss0 = FALSE;
    spi_pins.ss1 = TRUE;
    spi_pins.ss2 = FALSE;
    
    int retVal;
    retVal = MXC_SPI_Init(SPI, 1, 0, 1, 0, SPI_SPEED, spi_pins);
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("SPI PERIPHERAL INITIALIZATION ERROR: %d", retVal);    
        return retVal;
    }

    // not able to set the desired speed using SDK, so have to go register level
    // not able to read/write from/to FRAM with EV_KIT above 13.3MHz
    // SPI1 can go up to 25MHZ, and FRAM should work up to 40MHz
    // this is probably because of breadboarding
    // will test this once supersensor hardware is available
    
    // mxc_spi_reva_regs_t* spi = (mxc_spi_reva_regs_t*)((mxc_spi_regs_t*) SPI);
    // MXC_SETFIELD (spi->clkctrl, MXC_F_SPI_REVA_CLKCTRL_LO, (0 << MXC_F_SPI_REVA_CLKCTRL_LO_POS));
    // MXC_SETFIELD (spi->clkctrl, MXC_F_SPI_REVA_CLKCTRL_HI, (0 << MXC_F_SPI_REVA_CLKCTRL_HI_POS));
    // MXC_SETFIELD (spi->clkctrl, MXC_F_SPI_REVA_CLKCTRL_CLKDIV, (0 << MXC_F_SPI_REVA_CLKCTRL_CLKDIV_POS));

    retVal = MXC_SPI_SetDataSize(SPI, SPI_CHARACTER_SIZE);
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("SPI SET DATASIZE ERROR: %d", retVal);
        return retVal;
    }
    
    retVal = MXC_SPI_SetWidth(SPI, SPI_WIDTH_STANDARD);
    if (retVal != E_NO_ERROR) {
        KERNEL_LOG_ERROR("SPI SET WIDTH ERROR: %d", retVal);
        return retVal;
    }
    return E_NO_ERROR;
}