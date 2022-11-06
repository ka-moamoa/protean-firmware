#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include "mxc.h"
#include "gcfr_regs.h"
#include "cnn.h"
#include "weights.h"


static const uint32_t layer_0_kernel_0[] = LAYER_0_KERNEL_0;
static const uint32_t layer_0_kernel_1[] = LAYER_0_KERNEL_1;
static const uint32_t layer_0_kernel_2[] = LAYER_0_KERNEL_2;
static const uint32_t layer_0_kernel_3[] = LAYER_0_KERNEL_3;
static const uint32_t layer_0_kernel_4[] = LAYER_0_KERNEL_4;
static const uint32_t layer_0_kernel_5[] = LAYER_0_KERNEL_5;
static const uint32_t layer_0_kernel_6[] = LAYER_0_KERNEL_6;
static const uint32_t layer_0_kernel_7[] = LAYER_0_KERNEL_7;
static const uint32_t layer_0_kernel_8[] = LAYER_0_KERNEL_8;
static const uint32_t layer_0_kernel_9[] = LAYER_0_KERNEL_9;
static const uint32_t layer_0_kernel_10[] = LAYER_0_KERNEL_10;
static const uint32_t layer_0_kernel_11[] = LAYER_0_KERNEL_11;
static const uint32_t layer_0_kernel_12[] = LAYER_0_KERNEL_12;
static const uint32_t layer_0_kernel_13[] = LAYER_0_KERNEL_13;
static const uint32_t layer_0_kernel_14[] = LAYER_0_KERNEL_14;
static const uint32_t layer_0_kernel_15[] = LAYER_0_KERNEL_15;
static const uint32_t layer_0_kernel_16[] = LAYER_0_KERNEL_16;
static const uint32_t layer_0_kernel_17[] = LAYER_0_KERNEL_17;
static const uint32_t layer_0_kernel_18[] = LAYER_0_KERNEL_18;
static const uint32_t layer_0_kernel_19[] = LAYER_0_KERNEL_19;
static const uint32_t layer_0_kernel_20[] = LAYER_0_KERNEL_20;
static const uint32_t layer_0_kernel_21[] = LAYER_0_KERNEL_21;
static const uint32_t layer_0_kernel_22[] = LAYER_0_KERNEL_22;
static const uint32_t layer_0_kernel_23[] = LAYER_0_KERNEL_23;
static const uint32_t layer_0_kernel_24[] = LAYER_0_KERNEL_24;
static const uint32_t layer_0_kernel_25[] = LAYER_0_KERNEL_25;
static const uint32_t layer_0_kernel_26[] = LAYER_0_KERNEL_26;
static const uint32_t layer_0_kernel_27[] = LAYER_0_KERNEL_27;
static const uint32_t layer_0_kernel_28[] = LAYER_0_KERNEL_28;
static const uint32_t layer_0_kernel_29[] = LAYER_0_KERNEL_29;
static const uint32_t layer_0_kernel_30[] = LAYER_0_KERNEL_30;
static const uint32_t layer_0_kernel_31[] = LAYER_0_KERNEL_31;
static const uint32_t layer_1_kernel_0[] = LAYER_1_KERNEL_0;
static const uint32_t layer_1_kernel_1[] = LAYER_1_KERNEL_1;
static const uint32_t layer_1_kernel_2[] = LAYER_1_KERNEL_2;
static const uint32_t layer_1_kernel_3[] = LAYER_1_KERNEL_3;
static const uint32_t layer_1_kernel_4[] = LAYER_1_KERNEL_4;
static const uint32_t layer_1_kernel_5[] = LAYER_1_KERNEL_5;
static const uint32_t layer_1_kernel_6[] = LAYER_1_KERNEL_6;
static const uint32_t layer_1_kernel_7[] = LAYER_1_KERNEL_7;
static const uint32_t layer_1_kernel_8[] = LAYER_1_KERNEL_8;
static const uint32_t layer_1_kernel_9[] = LAYER_1_KERNEL_9;
static const uint32_t layer_1_kernel_10[] = LAYER_1_KERNEL_10;
static const uint32_t layer_1_kernel_11[] = LAYER_1_KERNEL_11;
static const uint32_t layer_1_kernel_12[] = LAYER_1_KERNEL_12;
static const uint32_t layer_1_kernel_13[] = LAYER_1_KERNEL_13;
static const uint32_t layer_1_kernel_14[] = LAYER_1_KERNEL_14;
static const uint32_t layer_1_kernel_15[] = LAYER_1_KERNEL_15;
static const uint32_t layer_1_kernel_16[] = LAYER_1_KERNEL_16;
static const uint32_t layer_1_kernel_17[] = LAYER_1_KERNEL_17;
static const uint32_t layer_1_kernel_18[] = LAYER_1_KERNEL_18;
static const uint32_t layer_1_kernel_19[] = LAYER_1_KERNEL_19;
static const uint32_t layer_1_kernel_20[] = LAYER_1_KERNEL_20;
static const uint32_t layer_1_kernel_21[] = LAYER_1_KERNEL_21;
static const uint32_t layer_1_kernel_22[] = LAYER_1_KERNEL_22;
static const uint32_t layer_1_kernel_23[] = LAYER_1_KERNEL_23;
static const uint32_t layer_1_kernel_24[] = LAYER_1_KERNEL_24;
static const uint32_t layer_1_kernel_25[] = LAYER_1_KERNEL_25;
static const uint32_t layer_1_kernel_26[] = LAYER_1_KERNEL_26;
static const uint32_t layer_1_kernel_27[] = LAYER_1_KERNEL_27;
static const uint32_t layer_1_kernel_28[] = LAYER_1_KERNEL_28;
static const uint32_t layer_1_kernel_29[] = LAYER_1_KERNEL_29;
static const uint32_t layer_1_kernel_30[] = LAYER_1_KERNEL_30;
static const uint32_t layer_1_kernel_31[] = LAYER_1_KERNEL_31;
static const uint32_t layer_1_kernel_32[] = LAYER_1_KERNEL_32;
static const uint32_t layer_1_kernel_33[] = LAYER_1_KERNEL_33;
static const uint32_t layer_1_kernel_34[] = LAYER_1_KERNEL_34;
static const uint32_t layer_1_kernel_35[] = LAYER_1_KERNEL_35;
static const uint32_t layer_1_kernel_36[] = LAYER_1_KERNEL_36;
static const uint32_t layer_1_kernel_37[] = LAYER_1_KERNEL_37;
static const uint32_t layer_1_kernel_38[] = LAYER_1_KERNEL_38;
static const uint32_t layer_1_kernel_39[] = LAYER_1_KERNEL_39;
static const uint32_t layer_1_kernel_40[] = LAYER_1_KERNEL_40;
static const uint32_t layer_1_kernel_41[] = LAYER_1_KERNEL_41;
static const uint32_t layer_1_kernel_42[] = LAYER_1_KERNEL_42;
static const uint32_t layer_1_kernel_43[] = LAYER_1_KERNEL_43;
static const uint32_t layer_1_kernel_44[] = LAYER_1_KERNEL_44;
static const uint32_t layer_1_kernel_45[] = LAYER_1_KERNEL_45;
static const uint32_t layer_1_kernel_46[] = LAYER_1_KERNEL_46;
static const uint32_t layer_1_kernel_47[] = LAYER_1_KERNEL_47;
static const uint32_t layer_1_kernel_48[] = LAYER_1_KERNEL_48;
static const uint32_t layer_1_kernel_49[] = LAYER_1_KERNEL_49;
static const uint32_t layer_1_kernel_50[] = LAYER_1_KERNEL_50;
static const uint32_t layer_1_kernel_51[] = LAYER_1_KERNEL_51;
static const uint32_t layer_1_kernel_52[] = LAYER_1_KERNEL_52;
static const uint32_t layer_1_kernel_53[] = LAYER_1_KERNEL_53;
static const uint32_t layer_1_kernel_54[] = LAYER_1_KERNEL_54;
static const uint32_t layer_1_kernel_55[] = LAYER_1_KERNEL_55;
static const uint32_t layer_1_kernel_56[] = LAYER_1_KERNEL_56;
static const uint32_t layer_1_kernel_57[] = LAYER_1_KERNEL_57;
static const uint32_t layer_1_kernel_58[] = LAYER_1_KERNEL_58;
static const uint32_t layer_1_kernel_59[] = LAYER_1_KERNEL_59;
static const uint32_t layer_1_kernel_60[] = LAYER_1_KERNEL_60;
static const uint32_t layer_1_kernel_61[] = LAYER_1_KERNEL_61;
static const uint32_t layer_1_kernel_62[] = LAYER_1_KERNEL_62;
static const uint32_t layer_1_kernel_63[] = LAYER_1_KERNEL_63;
static const uint32_t layer_2_kernel_0[] = LAYER_2_KERNEL_0;
static const uint32_t layer_2_kernel_1[] = LAYER_2_KERNEL_1;
static const uint32_t layer_2_kernel_2[] = LAYER_2_KERNEL_2;
static const uint32_t layer_2_kernel_3[] = LAYER_2_KERNEL_3;
static const uint32_t layer_2_kernel_4[] = LAYER_2_KERNEL_4;
static const uint32_t layer_2_kernel_5[] = LAYER_2_KERNEL_5;
static const uint32_t layer_2_kernel_6[] = LAYER_2_KERNEL_6;
static const uint32_t layer_2_kernel_7[] = LAYER_2_KERNEL_7;
static const uint32_t layer_2_kernel_8[] = LAYER_2_KERNEL_8;
static const uint32_t layer_2_kernel_9[] = LAYER_2_KERNEL_9;
static const uint32_t layer_2_kernel_10[] = LAYER_2_KERNEL_10;
static const uint32_t layer_2_kernel_11[] = LAYER_2_KERNEL_11;
static const uint32_t layer_2_kernel_12[] = LAYER_2_KERNEL_12;
static const uint32_t layer_2_kernel_13[] = LAYER_2_KERNEL_13;
static const uint32_t layer_2_kernel_14[] = LAYER_2_KERNEL_14;
static const uint32_t layer_2_kernel_15[] = LAYER_2_KERNEL_15;
static const uint32_t layer_2_kernel_16[] = LAYER_2_KERNEL_16;
static const uint32_t layer_2_kernel_17[] = LAYER_2_KERNEL_17;
static const uint32_t layer_2_kernel_18[] = LAYER_2_KERNEL_18;
static const uint32_t layer_2_kernel_19[] = LAYER_2_KERNEL_19;
static const uint32_t layer_2_kernel_20[] = LAYER_2_KERNEL_20;
static const uint32_t layer_2_kernel_21[] = LAYER_2_KERNEL_21;
static const uint32_t layer_2_kernel_22[] = LAYER_2_KERNEL_22;
static const uint32_t layer_2_kernel_23[] = LAYER_2_KERNEL_23;
static const uint32_t layer_2_kernel_24[] = LAYER_2_KERNEL_24;
static const uint32_t layer_2_kernel_25[] = LAYER_2_KERNEL_25;
static const uint32_t layer_2_kernel_26[] = LAYER_2_KERNEL_26;
static const uint32_t layer_2_kernel_27[] = LAYER_2_KERNEL_27;
static const uint32_t layer_2_kernel_28[] = LAYER_2_KERNEL_28;
static const uint32_t layer_2_kernel_29[] = LAYER_2_KERNEL_29;
static const uint32_t layer_2_kernel_30[] = LAYER_2_KERNEL_30;
static const uint32_t layer_2_kernel_31[] = LAYER_2_KERNEL_31;
static const uint32_t layer_2_kernel_32[] = LAYER_2_KERNEL_32;
static const uint32_t layer_2_kernel_33[] = LAYER_2_KERNEL_33;
static const uint32_t layer_2_kernel_34[] = LAYER_2_KERNEL_34;
static const uint32_t layer_2_kernel_35[] = LAYER_2_KERNEL_35;
static const uint32_t layer_2_kernel_36[] = LAYER_2_KERNEL_36;
static const uint32_t layer_2_kernel_37[] = LAYER_2_KERNEL_37;
static const uint32_t layer_2_kernel_38[] = LAYER_2_KERNEL_38;
static const uint32_t layer_2_kernel_39[] = LAYER_2_KERNEL_39;
static const uint32_t layer_2_kernel_40[] = LAYER_2_KERNEL_40;
static const uint32_t layer_2_kernel_41[] = LAYER_2_KERNEL_41;
static const uint32_t layer_2_kernel_42[] = LAYER_2_KERNEL_42;
static const uint32_t layer_2_kernel_43[] = LAYER_2_KERNEL_43;
static const uint32_t layer_2_kernel_44[] = LAYER_2_KERNEL_44;
static const uint32_t layer_2_kernel_45[] = LAYER_2_KERNEL_45;
static const uint32_t layer_2_kernel_46[] = LAYER_2_KERNEL_46;
static const uint32_t layer_2_kernel_47[] = LAYER_2_KERNEL_47;
static const uint32_t layer_2_kernel_48[] = LAYER_2_KERNEL_48;
static const uint32_t layer_2_kernel_49[] = LAYER_2_KERNEL_49;
static const uint32_t layer_2_kernel_50[] = LAYER_2_KERNEL_50;
static const uint32_t layer_2_kernel_51[] = LAYER_2_KERNEL_51;
static const uint32_t layer_2_kernel_52[] = LAYER_2_KERNEL_52;
static const uint32_t layer_2_kernel_53[] = LAYER_2_KERNEL_53;
static const uint32_t layer_2_kernel_54[] = LAYER_2_KERNEL_54;
static const uint32_t layer_2_kernel_55[] = LAYER_2_KERNEL_55;
static const uint32_t layer_2_kernel_56[] = LAYER_2_KERNEL_56;
static const uint32_t layer_2_kernel_57[] = LAYER_2_KERNEL_57;
static const uint32_t layer_2_kernel_58[] = LAYER_2_KERNEL_58;
static const uint32_t layer_2_kernel_59[] = LAYER_2_KERNEL_59;
static const uint32_t layer_2_kernel_60[] = LAYER_2_KERNEL_60;
static const uint32_t layer_2_kernel_61[] = LAYER_2_KERNEL_61;
static const uint32_t layer_2_kernel_62[] = LAYER_2_KERNEL_62;
static const uint32_t layer_2_kernel_63[] = LAYER_2_KERNEL_63;
void CNN_ISR(void)
{
  // Acknowledge interrupt to all quadrants
  *((volatile uint32_t *) 0x50100000) &= ~((1<<12) | 1);
  *((volatile uint32_t *) 0x50500000) &= ~((1<<12) | 1);
  *((volatile uint32_t *) 0x50900000) &= ~((1<<12) | 1);
  *((volatile uint32_t *) 0x50d00000) &= ~((1<<12) | 1);

  // CNN_COMPLETE; // Signal that processing is complete
#ifdef CNN_INFERENCE_TIMER
  cnn_time = MXC_TMR_SW_Stop(CNN_INFERENCE_TIMER);
#else
  cnn_time = 1;
#endif
}
int cnn_start(void)
{
  cnn_time = 0;

  *((volatile uint32_t *) 0x50100000) = 0x0018c808; // Enable quadrant 0
  *((volatile uint32_t *) 0x50500000) = 0x0018c809; // Enable quadrant 1
  *((volatile uint32_t *) 0x50900000) = 0x0018c809; // Enable quadrant 2
  *((volatile uint32_t *) 0x50d00000) = 0x0018c809; // Enable quadrant 3

#ifdef CNN_INFERENCE_TIMER
  MXC_TMR_SW_Start(CNN_INFERENCE_TIMER);
#endif

  // CNN_START; // Allow capture of processing time
  *((volatile uint32_t *) 0x50100000) = 0x0018c809; // Master enable quadrant 0

  return CNN_OK;
}
int cnn_stop(void)
{
  *((volatile uint32_t *) 0x50100000) &= ~1; // Disable quadrant 0

  return CNN_OK;
}
int cnn_enable(uint32_t clock_source, uint32_t clock_divider)
{
  // Reset all domains, restore power to CNN
  MXC_GCFR->reg3 = 0xf; // Reset
  MXC_GCFR->reg1 = 0xf; // Mask memory
  MXC_GCFR->reg0 = 0xf; // Power
  MXC_GCFR->reg2 = 0x0; // Iso
  MXC_GCFR->reg3 = 0x0; // Reset

  MXC_GCR->pclkdiv = (MXC_GCR->pclkdiv & ~(MXC_F_GCR_PCLKDIV_CNNCLKDIV | MXC_F_GCR_PCLKDIV_CNNCLKSEL))
                     | clock_divider | clock_source;
  MXC_SYS_ClockEnable(MXC_SYS_PERIPH_CLOCK_CNN); // Enable CNN clock

  NVIC_SetVector(CNN_IRQn, CNN_ISR); // Set CNN complete vector

  return CNN_OK;
}
int cnn_disable(void)
{
  // Disable CNN clock
  MXC_SYS_ClockDisable(MXC_SYS_PERIPH_CLOCK_CNN);

  // Disable power to CNN
  MXC_GCFR->reg3 = 0xf; // Reset
  MXC_GCFR->reg2 = 0xf; // Iso
  MXC_GCFR->reg0 = 0x0; // Power
  MXC_GCFR->reg1 = 0x0; // Mask memory
  MXC_GCFR->reg3 = 0x0; // Reset

  return CNN_OK;
}
void memcpy32(uint32_t *dst, const uint32_t *src, int n)
{
  while (n-- > 0) {
    *dst++ = *src++;
  }
}

int cnn_unload(uint32_t *out_buf32)
{
  uint8_t *out_buf = (uint8_t *) out_buf32;
  uint32_t val;
  volatile uint32_t *addr;
  int i;

  // Custom unload for this network, layer 8: 8-bit data, shape: (512, 1, 1)
  addr = (volatile uint32_t *) 0x50400000;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50800000;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50c00000;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x51000000;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50400004;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50800004;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50c00004;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x51000004;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50400008;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50800008;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50c00008;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x51000008;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x5040000c;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x5080000c;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50c0000c;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x5100000c;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50400010;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50800010;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50c00010;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x51000010;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50400014;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50800014;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50c00014;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x51000014;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50400018;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50800018;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50c00018;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x51000018;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x5040001c;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x5080001c;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x50c0001c;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }
  addr = (volatile uint32_t *) 0x5100001c;
  for (i = 0; i < 4; i++) {
    val = *addr;
    addr += 0x2000;
    *out_buf++ = val & 0xff;
    *out_buf++ = (val >> 8) & 0xff;
    *out_buf++ = (val >> 16) & 0xff;
    *out_buf++ = (val >> 24) & 0xff;
  }

  return CNN_OK;
}

int cnn_configure_0(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x000100a1; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x00010079; // Columns
  *((volatile uint32_t *) 0x50100310) = 0x00002400; // SRAM write ptr
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x00007800; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x00000078; // Mask offset and count
  *((volatile uint32_t *) 0x50100690) = 0x00000077; // TRAM ptr max
  *((volatile uint32_t *) 0x50100790) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0x00070007; // Mask and processor enables
  *((volatile uint32_t *) 0x50100810) = 0x00000001; // Stream processing start
  *((volatile uint32_t *) 0x50100910) = 0x00000002; // Rollover
  *((volatile uint32_t *) 0x50100990) = 0x00004b00; // Input frame size

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x000100a1; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x00010079; // Columns
  *((volatile uint32_t *) 0x50500310) = 0x00002400; // SRAM write ptr
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x00007800; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x00000078; // Mask offset and count
  *((volatile uint32_t *) 0x50500690) = 0x00000077; // TRAM ptr max
  *((volatile uint32_t *) 0x50500790) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50500810) = 0x00000001; // Stream processing start
  *((volatile uint32_t *) 0x50500910) = 0x00000002; // Rollover
  *((volatile uint32_t *) 0x50500990) = 0x00004b00; // Input frame size

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x000100a1; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x00010079; // Columns
  *((volatile uint32_t *) 0x50900310) = 0x00002400; // SRAM write ptr
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x00007800; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x00000078; // Mask offset and count
  *((volatile uint32_t *) 0x50900690) = 0x00000077; // TRAM ptr max
  *((volatile uint32_t *) 0x50900790) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50900810) = 0x00000001; // Stream processing start
  *((volatile uint32_t *) 0x50900910) = 0x00000002; // Rollover
  *((volatile uint32_t *) 0x50900990) = 0x00004b00; // Input frame size

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x000100a1; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x00010079; // Columns
  *((volatile uint32_t *) 0x50d00310) = 0x00002400; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x00007800; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x00000078; // Mask offset and count
  *((volatile uint32_t *) 0x50d00690) = 0x00000077; // TRAM ptr max
  *((volatile uint32_t *) 0x50d00790) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50d00810) = 0x00000001; // Stream processing start
  *((volatile uint32_t *) 0x50d00910) = 0x00000002; // Rollover
  *((volatile uint32_t *) 0x50d00990) = 0x00004b00; // Input frame size

  // Layer 1 quadrant 0
  *((volatile uint32_t *) 0x50100014) = 0x000100a1; // Rows
  *((volatile uint32_t *) 0x50100094) = 0x00010079; // Columns
  *((volatile uint32_t *) 0x50100194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50100214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50100294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100314) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50100414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100514) = 0x00000400; // SRAM read ptr
  *((volatile uint32_t *) 0x50100594) = 0x00002ba0; // Layer control
  *((volatile uint32_t *) 0x50100a14) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50100614) = 0x000000f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100694) = 0x007800b3; // TRAM ptr max
  *((volatile uint32_t *) 0x50100714) = 0xfff0fff0; // Mask and processor enables
  *((volatile uint32_t *) 0x50100814) = 0x00000174; // Stream processing start
  *((volatile uint32_t *) 0x50100894) = 0x007c0021; // Stream processing delta
  *((volatile uint32_t *) 0x50100914) = 0x000001ee; // Rollover

  // Layer 1 quadrant 1
  *((volatile uint32_t *) 0x50500014) = 0x000100a1; // Rows
  *((volatile uint32_t *) 0x50500094) = 0x00010079; // Columns
  *((volatile uint32_t *) 0x50500194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50500214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50500294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50500314) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50500414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500514) = 0x00000400; // SRAM read ptr
  *((volatile uint32_t *) 0x50500594) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a14) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50500614) = 0x000000f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500694) = 0x007800b3; // TRAM ptr max
  *((volatile uint32_t *) 0x50500714) = 0x000f000f; // Mask and processor enables
  *((volatile uint32_t *) 0x50500814) = 0x00000174; // Stream processing start
  *((volatile uint32_t *) 0x50500894) = 0x007c0021; // Stream processing delta
  *((volatile uint32_t *) 0x50500914) = 0x000001ee; // Rollover

  // Layer 1 quadrant 2
  *((volatile uint32_t *) 0x50900014) = 0x000100a1; // Rows
  *((volatile uint32_t *) 0x50900094) = 0x00010079; // Columns
  *((volatile uint32_t *) 0x50900194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50900214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50900294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50900314) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50900414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900514) = 0x00000400; // SRAM read ptr
  *((volatile uint32_t *) 0x50900594) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a14) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50900614) = 0x000000f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900694) = 0x007800b3; // TRAM ptr max
  *((volatile uint32_t *) 0x50900814) = 0x00000174; // Stream processing start
  *((volatile uint32_t *) 0x50900894) = 0x007c0021; // Stream processing delta
  *((volatile uint32_t *) 0x50900914) = 0x000001ee; // Rollover

  // Layer 1 quadrant 3
  *((volatile uint32_t *) 0x50d00014) = 0x000100a1; // Rows
  *((volatile uint32_t *) 0x50d00094) = 0x00010079; // Columns
  *((volatile uint32_t *) 0x50d00194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d00214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d00294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d00314) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00514) = 0x00000400; // SRAM read ptr
  *((volatile uint32_t *) 0x50d00594) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a14) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00614) = 0x000000f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00694) = 0x007800b3; // TRAM ptr max
  *((volatile uint32_t *) 0x50d00814) = 0x00000174; // Stream processing start
  *((volatile uint32_t *) 0x50d00894) = 0x007c0021; // Stream processing delta
  *((volatile uint32_t *) 0x50d00914) = 0x000001ee; // Rollover

  // Layer 2 quadrant 0
  *((volatile uint32_t *) 0x50100018) = 0x00010051; // Rows
  *((volatile uint32_t *) 0x50100098) = 0x0001003d; // Columns
  *((volatile uint32_t *) 0x50100198) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50100218) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50100298) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100318) = 0x00010000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100518) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50100598) = 0x00002ba0; // Layer control
  *((volatile uint32_t *) 0x50100a18) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50100618) = 0x010001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100698) = 0x0000001d; // TRAM ptr max
  *((volatile uint32_t *) 0x50100798) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50100718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 1
  *((volatile uint32_t *) 0x50500018) = 0x00010051; // Rows
  *((volatile uint32_t *) 0x50500098) = 0x0001003d; // Columns
  *((volatile uint32_t *) 0x50500198) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50500218) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50500298) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50500318) = 0x00010000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500518) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50500598) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a18) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50500618) = 0x010001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500698) = 0x0000001d; // TRAM ptr max
  *((volatile uint32_t *) 0x50500798) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50500718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 2
  *((volatile uint32_t *) 0x50900018) = 0x00010051; // Rows
  *((volatile uint32_t *) 0x50900098) = 0x0001003d; // Columns
  *((volatile uint32_t *) 0x50900198) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50900218) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50900298) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50900318) = 0x00010000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900518) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50900598) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a18) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50900618) = 0x010001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900698) = 0x0000001d; // TRAM ptr max
  *((volatile uint32_t *) 0x50900798) = 0x00022000; // Post processing register

  // Layer 2 quadrant 3
  *((volatile uint32_t *) 0x50d00018) = 0x00010051; // Rows
  *((volatile uint32_t *) 0x50d00098) = 0x0001003d; // Columns
  *((volatile uint32_t *) 0x50d00198) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d00218) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d00298) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d00318) = 0x00010000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00518) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50d00598) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a18) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00618) = 0x010001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00698) = 0x0000001d; // TRAM ptr max
  *((volatile uint32_t *) 0x50d00798) = 0x00022000; // Post processing register


  *((volatile uint32_t *) 0x50000000) = 0x00001908; // FIFO control

  return CNN_OK;
}
int cnn_configure_1(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x00010029; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x0001001f; // Columns
  *((volatile uint32_t *) 0x50100190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50100210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50100290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100310) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100590) = 0x0000cba0; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100690) = 0x0000000e; // TRAM ptr max

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x00010029; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x0001001f; // Columns
  *((volatile uint32_t *) 0x50500190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50500210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50500290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50500310) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500690) = 0x0000000e; // TRAM ptr max

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x00010029; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x0001001f; // Columns
  *((volatile uint32_t *) 0x50900190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50900210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50900290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50900310) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900690) = 0x0000000e; // TRAM ptr max
  *((volatile uint32_t *) 0x50900710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x00010029; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x0001001f; // Columns
  *((volatile uint32_t *) 0x50d00190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d00210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d00290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d00310) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00690) = 0x0000000e; // TRAM ptr max
  *((volatile uint32_t *) 0x50d00710) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 0
  *((volatile uint32_t *) 0x50100014) = 0x00010015; // Rows
  *((volatile uint32_t *) 0x50100094) = 0x00010010; // Columns
  *((volatile uint32_t *) 0x50100194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50100214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50100294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100514) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50100594) = 0x0000eba0; // Layer control
  *((volatile uint32_t *) 0x50100a14) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50100614) = 0x020003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100694) = 0x00000006; // TRAM ptr max
  *((volatile uint32_t *) 0x50100714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 1
  *((volatile uint32_t *) 0x50500014) = 0x00010015; // Rows
  *((volatile uint32_t *) 0x50500094) = 0x00010010; // Columns
  *((volatile uint32_t *) 0x50500194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50500214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50500294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50500414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500514) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50500594) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a14) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50500614) = 0x020003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500694) = 0x00000006; // TRAM ptr max
  *((volatile uint32_t *) 0x50500714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 2
  *((volatile uint32_t *) 0x50900014) = 0x00010015; // Rows
  *((volatile uint32_t *) 0x50900094) = 0x00010010; // Columns
  *((volatile uint32_t *) 0x50900194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50900214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50900294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50900414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900514) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50900594) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a14) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50900614) = 0x020003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900694) = 0x00000006; // TRAM ptr max
  *((volatile uint32_t *) 0x50900714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 3
  *((volatile uint32_t *) 0x50d00014) = 0x00010015; // Rows
  *((volatile uint32_t *) 0x50d00094) = 0x00010010; // Columns
  *((volatile uint32_t *) 0x50d00194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d00214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d00294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d00414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00514) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50d00594) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a14) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00614) = 0x020003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00694) = 0x00000006; // TRAM ptr max
  *((volatile uint32_t *) 0x50d00714) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 0
  *((volatile uint32_t *) 0x50100018) = 0x0001000b; // Rows
  *((volatile uint32_t *) 0x50100098) = 0x00010008; // Columns
  *((volatile uint32_t *) 0x50100318) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50100418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100598) = 0x0000eb20; // Layer control
  *((volatile uint32_t *) 0x50100a18) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50100618) = 0x040005f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100698) = 0x00000006; // TRAM ptr max
  *((volatile uint32_t *) 0x50100718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 1
  *((volatile uint32_t *) 0x50500018) = 0x0001000b; // Rows
  *((volatile uint32_t *) 0x50500098) = 0x00010008; // Columns
  *((volatile uint32_t *) 0x50500318) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50500418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500598) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a18) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50500618) = 0x040005f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500698) = 0x00000006; // TRAM ptr max
  *((volatile uint32_t *) 0x50500718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 2
  *((volatile uint32_t *) 0x50900018) = 0x0001000b; // Rows
  *((volatile uint32_t *) 0x50900098) = 0x00010008; // Columns
  *((volatile uint32_t *) 0x50900318) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50900418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900598) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a18) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50900618) = 0x040005f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900698) = 0x00000006; // TRAM ptr max
  *((volatile uint32_t *) 0x50900718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 3
  *((volatile uint32_t *) 0x50d00018) = 0x0001000b; // Rows
  *((volatile uint32_t *) 0x50d00098) = 0x00010008; // Columns
  *((volatile uint32_t *) 0x50d00318) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00598) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a18) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00618) = 0x040005f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00698) = 0x00000006; // TRAM ptr max
  *((volatile uint32_t *) 0x50d00718) = 0xffffffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_configure_2(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x0001000b; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x00010008; // Columns
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100510) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50100590) = 0x0000eb20; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100690) = 0x00000006; // TRAM ptr max
  *((volatile uint32_t *) 0x50100710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x0001000b; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x00010008; // Columns
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500510) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50500590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500690) = 0x00000006; // TRAM ptr max
  *((volatile uint32_t *) 0x50500710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x0001000b; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x00010008; // Columns
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900510) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50900590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900690) = 0x00000006; // TRAM ptr max
  *((volatile uint32_t *) 0x50900710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x0001000b; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x00010008; // Columns
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00510) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50d00590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00690) = 0x00000006; // TRAM ptr max
  *((volatile uint32_t *) 0x50d00710) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 0
  *((volatile uint32_t *) 0x50100014) = 0x00000009; // Rows
  *((volatile uint32_t *) 0x50100094) = 0x00000006; // Columns
  *((volatile uint32_t *) 0x50100194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50100214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50100294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100314) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50100394) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50100594) = 0x0000e9a0; // Layer control
  *((volatile uint32_t *) 0x50100a14) = 0x0001f870; // Layer control 2
  *((volatile uint32_t *) 0x50100614) = 0x120021f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100114) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50100714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 1
  *((volatile uint32_t *) 0x50500014) = 0x00000009; // Rows
  *((volatile uint32_t *) 0x50500094) = 0x00000006; // Columns
  *((volatile uint32_t *) 0x50500194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50500214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50500294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50500314) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50500394) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50500594) = 0x000009a0; // Layer control
  *((volatile uint32_t *) 0x50500a14) = 0x0001f870; // Layer control 2
  *((volatile uint32_t *) 0x50500614) = 0x120021f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500114) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50500714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 2
  *((volatile uint32_t *) 0x50900014) = 0x00000009; // Rows
  *((volatile uint32_t *) 0x50900094) = 0x00000006; // Columns
  *((volatile uint32_t *) 0x50900194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50900214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50900294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50900314) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50900394) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50900594) = 0x000009a0; // Layer control
  *((volatile uint32_t *) 0x50900a14) = 0x0001f870; // Layer control 2
  *((volatile uint32_t *) 0x50900614) = 0x120021f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900114) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50900714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 3
  *((volatile uint32_t *) 0x50d00014) = 0x00000009; // Rows
  *((volatile uint32_t *) 0x50d00094) = 0x00000006; // Columns
  *((volatile uint32_t *) 0x50d00194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d00214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d00294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d00314) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00394) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d00594) = 0x000009a0; // Layer control
  *((volatile uint32_t *) 0x50d00a14) = 0x0001f870; // Layer control 2
  *((volatile uint32_t *) 0x50d00614) = 0x120021f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00114) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d00714) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 0
  *((volatile uint32_t *) 0x50100018) = 0x00000004; // Rows
  *((volatile uint32_t *) 0x50100098) = 0x00000002; // Columns
  *((volatile uint32_t *) 0x50100198) = 0x00000004; // Pooling rows
  *((volatile uint32_t *) 0x50100218) = 0x00000002; // Pooling columns
  *((volatile uint32_t *) 0x50100398) = 0x00002000; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100498) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50100518) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50100598) = 0x000008a0; // Layer control
  *((volatile uint32_t *) 0x50100a18) = 0x00000007; // Layer control 2
  *((volatile uint32_t *) 0x50100618) = 0x00000038; // Mask offset and count
  *((volatile uint32_t *) 0x50100118) = 0x00000103; // 1D
  *((volatile uint32_t *) 0x50100798) = 0x03000000; // Post processing register
  *((volatile uint32_t *) 0x50100718) = 0x0000ffff; // Mask and processor enables

  // Layer 2 quadrant 1
  *((volatile uint32_t *) 0x50500018) = 0x00000004; // Rows
  *((volatile uint32_t *) 0x50500098) = 0x00000002; // Columns
  *((volatile uint32_t *) 0x50500198) = 0x00000004; // Pooling rows
  *((volatile uint32_t *) 0x50500218) = 0x00000002; // Pooling columns
  *((volatile uint32_t *) 0x50500318) = 0x00008000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500398) = 0x00002000; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500498) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50500518) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50500598) = 0x000008a0; // Layer control
  *((volatile uint32_t *) 0x50500a18) = 0x00000007; // Layer control 2
  *((volatile uint32_t *) 0x50500618) = 0x00000038; // Mask offset and count
  *((volatile uint32_t *) 0x50500118) = 0x00000103; // 1D
  *((volatile uint32_t *) 0x50500798) = 0x03000000; // Post processing register
  *((volatile uint32_t *) 0x50500718) = 0x0000ffff; // Mask and processor enables

  // Layer 2 quadrant 2
  *((volatile uint32_t *) 0x50900018) = 0x00000004; // Rows
  *((volatile uint32_t *) 0x50900098) = 0x00000002; // Columns
  *((volatile uint32_t *) 0x50900198) = 0x00000004; // Pooling rows
  *((volatile uint32_t *) 0x50900218) = 0x00000002; // Pooling columns
  *((volatile uint32_t *) 0x50900318) = 0x00010000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900398) = 0x00002000; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900498) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50900518) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50900598) = 0x000008a0; // Layer control
  *((volatile uint32_t *) 0x50900a18) = 0x00000007; // Layer control 2
  *((volatile uint32_t *) 0x50900618) = 0x00000038; // Mask offset and count
  *((volatile uint32_t *) 0x50900118) = 0x00000103; // 1D
  *((volatile uint32_t *) 0x50900798) = 0x03000000; // Post processing register
  *((volatile uint32_t *) 0x50900718) = 0x0000ffff; // Mask and processor enables

  // Layer 2 quadrant 3
  *((volatile uint32_t *) 0x50d00018) = 0x00000004; // Rows
  *((volatile uint32_t *) 0x50d00098) = 0x00000002; // Columns
  *((volatile uint32_t *) 0x50d00198) = 0x00000004; // Pooling rows
  *((volatile uint32_t *) 0x50d00218) = 0x00000002; // Pooling columns
  *((volatile uint32_t *) 0x50d00318) = 0x00018000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00398) = 0x00002000; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00498) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d00518) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50d00598) = 0x000008a0; // Layer control
  *((volatile uint32_t *) 0x50d00a18) = 0x00000007; // Layer control 2
  *((volatile uint32_t *) 0x50d00618) = 0x00000038; // Mask offset and count
  *((volatile uint32_t *) 0x50d00118) = 0x00000103; // 1D
  *((volatile uint32_t *) 0x50d00798) = 0x03000000; // Post processing register
  *((volatile uint32_t *) 0x50d00718) = 0x0000ffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_load_bias_0(void)
{
  // Not used in this network
  return CNN_OK;
}
int cnn_load_bias_1(void)
{
  // Not used in this network
  return CNN_OK;
}
int cnn_load_bias_2(void)
{
  // Not used in this network
  return CNN_OK;
}
int cnn_load_weights_0(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_0_kernel_0, 144);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_0_kernel_1, 144);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_0_kernel_2, 144);
  *((volatile uint8_t *) 0x5018c081) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_0_kernel_3, 72);
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_0_kernel_4, 144);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_0_kernel_5, 144);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_0_kernel_6, 144);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_0_kernel_7, 144);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_0_kernel_8, 144);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_0_kernel_9, 144);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_0_kernel_10, 144);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_0_kernel_11, 144);
  *((volatile uint8_t *) 0x501b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_0_kernel_12, 144);
  *((volatile uint8_t *) 0x501b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_0_kernel_13, 144);
  *((volatile uint8_t *) 0x501b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_0_kernel_14, 144);
  *((volatile uint8_t *) 0x501bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_0_kernel_15, 144);
  *((volatile uint8_t *) 0x50580001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_0_kernel_16, 144);
  *((volatile uint8_t *) 0x50584001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_0_kernel_17, 144);
  *((volatile uint8_t *) 0x50588001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_0_kernel_18, 144);
  *((volatile uint8_t *) 0x5058c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_0_kernel_19, 144);
  *((volatile uint8_t *) 0x50590081) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_0_kernel_20, 72);
  *((volatile uint8_t *) 0x50594081) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_0_kernel_21, 72);
  *((volatile uint8_t *) 0x50598081) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_0_kernel_22, 72);
  *((volatile uint8_t *) 0x5059c081) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_0_kernel_23, 72);
  *((volatile uint8_t *) 0x505a0081) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_0_kernel_24, 72);
  *((volatile uint8_t *) 0x505a4081) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_0_kernel_25, 72);
  *((volatile uint8_t *) 0x505a8081) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_0_kernel_26, 72);
  *((volatile uint8_t *) 0x505ac081) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_0_kernel_27, 72);
  *((volatile uint8_t *) 0x505b0081) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_0_kernel_28, 72);
  *((volatile uint8_t *) 0x505b4081) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_0_kernel_29, 72);
  *((volatile uint8_t *) 0x505b8081) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_0_kernel_30, 72);
  *((volatile uint8_t *) 0x505bc081) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_0_kernel_31, 72);

  return CNN_OK;
}
int cnn_load_weights_1(void)
{
  *((volatile uint8_t *) 0x50180101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_1_kernel_0, 288);
  *((volatile uint8_t *) 0x50184101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_1_kernel_1, 288);
  *((volatile uint8_t *) 0x50188101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_1_kernel_2, 288);
  *((volatile uint8_t *) 0x5018c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_1_kernel_3, 288);
  *((volatile uint8_t *) 0x50190101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_1_kernel_4, 288);
  *((volatile uint8_t *) 0x50194101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_1_kernel_5, 288);
  *((volatile uint8_t *) 0x50198101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_1_kernel_6, 288);
  *((volatile uint8_t *) 0x5019c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_1_kernel_7, 288);
  *((volatile uint8_t *) 0x501a0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_1_kernel_8, 288);
  *((volatile uint8_t *) 0x501a4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_1_kernel_9, 288);
  *((volatile uint8_t *) 0x501a8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_1_kernel_10, 288);
  *((volatile uint8_t *) 0x501ac101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_1_kernel_11, 288);
  *((volatile uint8_t *) 0x501b0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_1_kernel_12, 288);
  *((volatile uint8_t *) 0x501b4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_1_kernel_13, 288);
  *((volatile uint8_t *) 0x501b8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_1_kernel_14, 288);
  *((volatile uint8_t *) 0x501bc101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_1_kernel_15, 288);
  *((volatile uint8_t *) 0x50580101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_1_kernel_16, 288);
  *((volatile uint8_t *) 0x50584101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_1_kernel_17, 288);
  *((volatile uint8_t *) 0x50588101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_1_kernel_18, 288);
  *((volatile uint8_t *) 0x5058c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_1_kernel_19, 288);
  *((volatile uint8_t *) 0x50590101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_1_kernel_20, 288);
  *((volatile uint8_t *) 0x50594101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_1_kernel_21, 288);
  *((volatile uint8_t *) 0x50598101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_1_kernel_22, 288);
  *((volatile uint8_t *) 0x5059c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_1_kernel_23, 288);
  *((volatile uint8_t *) 0x505a0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_1_kernel_24, 288);
  *((volatile uint8_t *) 0x505a4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_1_kernel_25, 288);
  *((volatile uint8_t *) 0x505a8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_1_kernel_26, 288);
  *((volatile uint8_t *) 0x505ac101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_1_kernel_27, 288);
  *((volatile uint8_t *) 0x505b0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_1_kernel_28, 288);
  *((volatile uint8_t *) 0x505b4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_1_kernel_29, 288);
  *((volatile uint8_t *) 0x505b8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_1_kernel_30, 288);
  *((volatile uint8_t *) 0x505bc101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_1_kernel_31, 288);
  *((volatile uint8_t *) 0x50980001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_1_kernel_32, 432);
  *((volatile uint8_t *) 0x50984001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_1_kernel_33, 432);
  *((volatile uint8_t *) 0x50988001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_1_kernel_34, 432);
  *((volatile uint8_t *) 0x5098c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_1_kernel_35, 432);
  *((volatile uint8_t *) 0x50990001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_1_kernel_36, 432);
  *((volatile uint8_t *) 0x50994001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_1_kernel_37, 432);
  *((volatile uint8_t *) 0x50998001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_1_kernel_38, 432);
  *((volatile uint8_t *) 0x5099c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_1_kernel_39, 432);
  *((volatile uint8_t *) 0x509a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_1_kernel_40, 432);
  *((volatile uint8_t *) 0x509a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_1_kernel_41, 432);
  *((volatile uint8_t *) 0x509a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_1_kernel_42, 432);
  *((volatile uint8_t *) 0x509ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_1_kernel_43, 432);
  *((volatile uint8_t *) 0x509b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_1_kernel_44, 432);
  *((volatile uint8_t *) 0x509b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_1_kernel_45, 432);
  *((volatile uint8_t *) 0x509b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_1_kernel_46, 432);
  *((volatile uint8_t *) 0x509bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_1_kernel_47, 432);
  *((volatile uint8_t *) 0x50d80001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_1_kernel_48, 432);
  *((volatile uint8_t *) 0x50d84001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_1_kernel_49, 432);
  *((volatile uint8_t *) 0x50d88001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_1_kernel_50, 432);
  *((volatile uint8_t *) 0x50d8c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_1_kernel_51, 432);
  *((volatile uint8_t *) 0x50d90001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_1_kernel_52, 432);
  *((volatile uint8_t *) 0x50d94001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_1_kernel_53, 432);
  *((volatile uint8_t *) 0x50d98001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_1_kernel_54, 432);
  *((volatile uint8_t *) 0x50d9c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_1_kernel_55, 432);
  *((volatile uint8_t *) 0x50da0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_1_kernel_56, 432);
  *((volatile uint8_t *) 0x50da4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_1_kernel_57, 432);
  *((volatile uint8_t *) 0x50da8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_1_kernel_58, 432);
  *((volatile uint8_t *) 0x50dac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_1_kernel_59, 432);
  *((volatile uint8_t *) 0x50db0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_1_kernel_60, 432);
  *((volatile uint8_t *) 0x50db4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_1_kernel_61, 432);
  *((volatile uint8_t *) 0x50db8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_1_kernel_62, 432);
  *((volatile uint8_t *) 0x50dbc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_1_kernel_63, 432);

  return CNN_OK;
}
int cnn_load_weights_2(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_2_kernel_0, 273);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_2_kernel_1, 273);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_2_kernel_2, 273);
  *((volatile uint8_t *) 0x5018c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_2_kernel_3, 273);
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_2_kernel_4, 273);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_2_kernel_5, 273);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_2_kernel_6, 273);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_2_kernel_7, 273);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_2_kernel_8, 273);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_2_kernel_9, 273);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_2_kernel_10, 273);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_2_kernel_11, 273);
  *((volatile uint8_t *) 0x501b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_2_kernel_12, 273);
  *((volatile uint8_t *) 0x501b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_2_kernel_13, 273);
  *((volatile uint8_t *) 0x501b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_2_kernel_14, 273);
  *((volatile uint8_t *) 0x501bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_2_kernel_15, 273);
  *((volatile uint8_t *) 0x50580001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_2_kernel_16, 273);
  *((volatile uint8_t *) 0x50584001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_2_kernel_17, 273);
  *((volatile uint8_t *) 0x50588001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_2_kernel_18, 273);
  *((volatile uint8_t *) 0x5058c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_2_kernel_19, 273);
  *((volatile uint8_t *) 0x50590001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_2_kernel_20, 273);
  *((volatile uint8_t *) 0x50594001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_2_kernel_21, 273);
  *((volatile uint8_t *) 0x50598001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_2_kernel_22, 273);
  *((volatile uint8_t *) 0x5059c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_2_kernel_23, 273);
  *((volatile uint8_t *) 0x505a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_2_kernel_24, 273);
  *((volatile uint8_t *) 0x505a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_2_kernel_25, 273);
  *((volatile uint8_t *) 0x505a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_2_kernel_26, 273);
  *((volatile uint8_t *) 0x505ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_2_kernel_27, 273);
  *((volatile uint8_t *) 0x505b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_2_kernel_28, 273);
  *((volatile uint8_t *) 0x505b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_2_kernel_29, 273);
  *((volatile uint8_t *) 0x505b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_2_kernel_30, 273);
  *((volatile uint8_t *) 0x505bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_2_kernel_31, 273);
  *((volatile uint8_t *) 0x50980001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_2_kernel_32, 273);
  *((volatile uint8_t *) 0x50984001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_2_kernel_33, 273);
  *((volatile uint8_t *) 0x50988001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_2_kernel_34, 273);
  *((volatile uint8_t *) 0x5098c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_2_kernel_35, 273);
  *((volatile uint8_t *) 0x50990001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_2_kernel_36, 273);
  *((volatile uint8_t *) 0x50994001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_2_kernel_37, 273);
  *((volatile uint8_t *) 0x50998001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_2_kernel_38, 273);
  *((volatile uint8_t *) 0x5099c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_2_kernel_39, 273);
  *((volatile uint8_t *) 0x509a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_2_kernel_40, 273);
  *((volatile uint8_t *) 0x509a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_2_kernel_41, 273);
  *((volatile uint8_t *) 0x509a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_2_kernel_42, 273);
  *((volatile uint8_t *) 0x509ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_2_kernel_43, 273);
  *((volatile uint8_t *) 0x509b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_2_kernel_44, 273);
  *((volatile uint8_t *) 0x509b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_2_kernel_45, 273);
  *((volatile uint8_t *) 0x509b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_2_kernel_46, 273);
  *((volatile uint8_t *) 0x509bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_2_kernel_47, 273);
  *((volatile uint8_t *) 0x50d80001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_2_kernel_48, 273);
  *((volatile uint8_t *) 0x50d84001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_2_kernel_49, 273);
  *((volatile uint8_t *) 0x50d88001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_2_kernel_50, 273);
  *((volatile uint8_t *) 0x50d8c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_2_kernel_51, 273);
  *((volatile uint8_t *) 0x50d90001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_2_kernel_52, 273);
  *((volatile uint8_t *) 0x50d94001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_2_kernel_53, 273);
  *((volatile uint8_t *) 0x50d98001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_2_kernel_54, 273);
  *((volatile uint8_t *) 0x50d9c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_2_kernel_55, 273);
  *((volatile uint8_t *) 0x50da0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_2_kernel_56, 273);
  *((volatile uint8_t *) 0x50da4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_2_kernel_57, 273);
  *((volatile uint8_t *) 0x50da8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_2_kernel_58, 273);
  *((volatile uint8_t *) 0x50dac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_2_kernel_59, 273);
  *((volatile uint8_t *) 0x50db0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_2_kernel_60, 273);
  *((volatile uint8_t *) 0x50db4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_2_kernel_61, 273);
  *((volatile uint8_t *) 0x50db8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_2_kernel_62, 273);
  *((volatile uint8_t *) 0x50dbc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_2_kernel_63, 273);

  return CNN_OK;
}
int cnn_init_0(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00108008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50100008) = 0x00000002; // Layer count
  *((volatile uint32_t *) 0x50500000) = 0x00108008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500008) = 0x00000002; // Layer count
  *((volatile uint32_t *) 0x50900000) = 0x00108008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900008) = 0x00000002; // Layer count
  *((volatile uint32_t *) 0x50d00000) = 0x00108008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00008) = 0x00000002; // Layer count

  return CNN_OK;
}
int cnn_init_1(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50100008) = 0x00000002; // Layer count
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500008) = 0x00000002; // Layer count
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900008) = 0x00000002; // Layer count
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00008) = 0x00000002; // Layer count

  return CNN_OK;
}
int cnn_init_2(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50100008) = 0x00000002; // Layer count
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500008) = 0x00000002; // Layer count
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900008) = 0x00000002; // Layer count
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00008) = 0x00000002; // Layer count

  return CNN_OK;
}
