#ifndef _NVM_H
#define _NVM_H

#include "fram.h"

/***** Definitions *****/
// generates addresses for FRAM
#define __nv                        __attribute__((section(".nvm")))

// writes to FRAM from SRAM
#define __NVM_SET(dst, src)         { \
                                        do { \
                                            uint8_t txBuff[sizeof((dst))]; \
                                            typeof((dst)) tempSrc = src; \
                                            /* KERNEL_LOG_DEBUG("FRAM write address: %d", ((uint32_t)(&(dst)))); */ \
                                            memcpy(txBuff, &(tempSrc), sizeof((dst))); \
                                            nvmWriteData((((uint32_t)(&(dst))) - FRAM_START_ADDRESS), txBuff, sizeof((dst))); \
                                        } \
                                        while (0); \
                                    }

// reads from FRAM 
#define __NVM_GET(dst, src)         { \
                                        do { \
                                            uint8_t rxBuff[sizeof((dst))]; \
                                            /* KERNEL_LOG_DEBUG("FRAM read address: %d", (uint32_t)(&(src))); */ \
                                            nvmReadData((((uint32_t)(&(src))) - FRAM_START_ADDRESS), rxBuff, sizeof((dst))); \
                                            memcpy(&(dst), rxBuff, sizeof((dst))); \
                                        } \
                                        while (0); \
                                    }

// write/read arrays to/from FRAM from/to SRAM
#define __NVM_MEMSET(dst, src, len) { \
                                        do { \
                                            uint32_t doneLen = 0; \
                                            uint32_t tempLen = 0; \
                                            while (doneLen < len) { \
                                                uint32_t remainingLen = len - doneLen; \
                                                tempLen = (remainingLen >= NVM_MAX_BLOCK_SIZE) ? NVM_MAX_BLOCK_SIZE : remainingLen; \
                                                uint8_t tempBuff[(tempLen)]; \
                                                if (((uint32_t)(src)) >= FRAM_START_ADDRESS) { \
                                                    /* KERNEL_LOG_DEBUG("SRC address in FRAM: 0x%08x, %d", (uint32_t)(src), len); */ \
                                                    nvmReadData((((uint32_t)(src)) - FRAM_START_ADDRESS) + doneLen, tempBuff, (tempLen)); \
                                                    if (((uint32_t)(dst)) >= FRAM_START_ADDRESS) { \
                                                        /* KERNEL_LOG_DEBUG("DST address in FRAM"); */ \
                                                        nvmWriteData((((uint32_t)(dst)) - FRAM_START_ADDRESS) + doneLen, tempBuff, (tempLen)); \
                                                    } \
                                                    else { \
                                                        /* KERNEL_LOG_DEBUG("DST address not in FRAM"); */ \
                                                        memcpy((dst) + doneLen, tempBuff, (tempLen)); \
                                                    } \
                                                } \
                                                else { \
                                                    /* KERNEL_LOG_DEBUG("SRC address not in FRAM"); */ \
                                                    if (((uint32_t)(dst)) >= FRAM_START_ADDRESS) { \
                                                        /* KERNEL_LOG_DEBUG("DST address in FRAM"); */ \
                                                        memcpy(tempBuff, (src) + doneLen, (tempLen)); \
                                                        nvmWriteData((((uint32_t)(dst)) - FRAM_START_ADDRESS) + doneLen, tempBuff, (tempLen)); \
                                                    } \
                                                    else { \
                                                        /* KERNEL_LOG_DEBUG("DST address not in FRAM"); */ \
                                                    /* We don't care about this case as it is for SRAM to SRAM */\
                                                    memcpy((dst) + doneLen, (src) + doneLen, (tempLen)); \
                                                    } \
                                                } \
                                                doneLen += tempLen; \
                                            } \
                                        } \
                                        while (0); \
                                    }


/***** Functions *****/
int nvmInit();
int nvmClear();
int nvmClearAll();
int nvmResetIntConfig();

int nvmExecuteCommand(uint8_t cmd);

int nvmGetStatusReg(uint8_t *statusReg);
int nvmGetDeviceID(uint32_t *devID);
int nvmSetWELMode(uint8_t wel);

int nvmWriteData(uint32_t addr, uint8_t *src, uint32_t len);
int nvmReadData(uint32_t addr, uint8_t *dst, uint32_t len);

#endif /* _NVM_H */
