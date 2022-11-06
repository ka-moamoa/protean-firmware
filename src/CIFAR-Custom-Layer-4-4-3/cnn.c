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
static const uint32_t layer_0_kernel_32[] = LAYER_0_KERNEL_32;
static const uint32_t layer_0_kernel_33[] = LAYER_0_KERNEL_33;
static const uint32_t layer_0_kernel_34[] = LAYER_0_KERNEL_34;
static const uint32_t layer_0_kernel_35[] = LAYER_0_KERNEL_35;
static const uint32_t layer_0_kernel_36[] = LAYER_0_KERNEL_36;
static const uint32_t layer_0_kernel_37[] = LAYER_0_KERNEL_37;
static const uint32_t layer_0_kernel_38[] = LAYER_0_KERNEL_38;
static const uint32_t layer_0_kernel_39[] = LAYER_0_KERNEL_39;
static const uint32_t layer_0_kernel_40[] = LAYER_0_KERNEL_40;
static const uint32_t layer_0_kernel_41[] = LAYER_0_KERNEL_41;
static const uint32_t layer_0_kernel_42[] = LAYER_0_KERNEL_42;
static const uint32_t layer_0_kernel_43[] = LAYER_0_KERNEL_43;
static const uint32_t layer_0_kernel_44[] = LAYER_0_KERNEL_44;
static const uint32_t layer_0_kernel_45[] = LAYER_0_KERNEL_45;
static const uint32_t layer_0_kernel_46[] = LAYER_0_KERNEL_46;
static const uint32_t layer_0_kernel_47[] = LAYER_0_KERNEL_47;
static const uint32_t layer_0_kernel_48[] = LAYER_0_KERNEL_48;
static const uint32_t layer_0_kernel_49[] = LAYER_0_KERNEL_49;
static const uint32_t layer_0_kernel_50[] = LAYER_0_KERNEL_50;
static const uint32_t layer_0_kernel_51[] = LAYER_0_KERNEL_51;
static const uint32_t layer_0_kernel_52[] = LAYER_0_KERNEL_52;
static const uint32_t layer_0_kernel_53[] = LAYER_0_KERNEL_53;
static const uint32_t layer_0_kernel_54[] = LAYER_0_KERNEL_54;
static const uint32_t layer_0_kernel_55[] = LAYER_0_KERNEL_55;
static const uint32_t layer_0_kernel_56[] = LAYER_0_KERNEL_56;
static const uint32_t layer_0_kernel_57[] = LAYER_0_KERNEL_57;
static const uint32_t layer_0_kernel_58[] = LAYER_0_KERNEL_58;
static const uint32_t layer_0_kernel_59[] = LAYER_0_KERNEL_59;
static const uint32_t layer_0_kernel_60[] = LAYER_0_KERNEL_60;
static const uint32_t layer_0_kernel_61[] = LAYER_0_KERNEL_61;
static const uint32_t layer_0_kernel_62[] = LAYER_0_KERNEL_62;
static const uint32_t layer_0_kernel_63[] = LAYER_0_KERNEL_63;
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
static const uint8_t  layer_0_bias_0[] = LAYER_0_BIAS_0;
static const uint8_t  layer_0_bias_1[] = LAYER_0_BIAS_1;
static const uint8_t  layer_0_bias_2[] = LAYER_0_BIAS_2;
static const uint8_t  layer_0_bias_3[] = LAYER_0_BIAS_3;
static const uint8_t  layer_1_bias_0[] = LAYER_1_BIAS_0;
static const uint8_t  layer_1_bias_1[] = LAYER_1_BIAS_1;
static const uint8_t  layer_1_bias_2[] = LAYER_1_BIAS_2;
static const uint8_t  layer_1_bias_3[] = LAYER_1_BIAS_3;
static const uint8_t  layer_2_bias_0[] = LAYER_2_BIAS_0;
static const uint8_t  layer_2_bias_1[] = LAYER_2_BIAS_1;
static const uint8_t  layer_2_bias_2[] = LAYER_2_BIAS_2;
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

  *((volatile uint32_t *) 0x50100000) = 0x00100808; // Enable quadrant 0
  *((volatile uint32_t *) 0x50500000) = 0x00100809; // Enable quadrant 1
  *((volatile uint32_t *) 0x50900000) = 0x00100809; // Enable quadrant 2
  *((volatile uint32_t *) 0x50d00000) = 0x00100809; // Enable quadrant 3

#ifdef CNN_INFERENCE_TIMER
  MXC_TMR_SW_Start(CNN_INFERENCE_TIMER);
#endif

  // CNN_START; // Allow capture of processing time
  *((volatile uint32_t *) 0x50100000) = 0x00100009; // Master enable quadrant 0

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
static void memcpy_8to32(uint32_t *dst, const uint8_t *src, int n)
{
  while (n-- > 0) {
    *dst++ = *src++;
  }
}
int cnn_unload(uint32_t *out_buf)
{
  volatile uint32_t *addr;

  // Custom unload for this network, layer 2: 32-bit data, shape: (10, 1, 1)
  addr = (volatile uint32_t *) 0x50404000;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  addr = (volatile uint32_t *) 0x5040c000;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  addr = (volatile uint32_t *) 0x50414000;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;

  return CNN_OK;
}
int cnn_configure_0(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50100310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100690) = 0x0000001f; // TRAM ptr max
  *((volatile uint32_t *) 0x50100790) = 0x00001000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0x00070007; // Mask and processor enables

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50500310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500690) = 0x0000001f; // TRAM ptr max

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50900310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900690) = 0x0000001f; // TRAM ptr max

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50d00310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00690) = 0x0000001f; // TRAM ptr max

  // Layer 1 quadrant 0
  *((volatile uint32_t *) 0x50100014) = 0x0000001f; // Rows
  *((volatile uint32_t *) 0x50100094) = 0x0000001f; // Columns
  *((volatile uint32_t *) 0x50100394) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100514) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50100594) = 0x0000eb20; // Layer control
  *((volatile uint32_t *) 0x50100a14) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50100614) = 0x120012f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100114) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50100794) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50100714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 1
  *((volatile uint32_t *) 0x50500014) = 0x0000001f; // Rows
  *((volatile uint32_t *) 0x50500094) = 0x0000001f; // Columns
  *((volatile uint32_t *) 0x50500394) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500514) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50500594) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a14) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50500614) = 0x120012f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500114) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50500794) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50500714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 2
  *((volatile uint32_t *) 0x50900014) = 0x0000001f; // Rows
  *((volatile uint32_t *) 0x50900094) = 0x0000001f; // Columns
  *((volatile uint32_t *) 0x50900394) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900514) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50900594) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a14) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50900614) = 0x120012f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900114) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50900794) = 0x00023000; // Post processing register
  *((volatile uint32_t *) 0x50900714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 3
  *((volatile uint32_t *) 0x50d00014) = 0x0000001f; // Rows
  *((volatile uint32_t *) 0x50d00094) = 0x0000001f; // Columns
  *((volatile uint32_t *) 0x50d00394) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00514) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50d00594) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a14) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00614) = 0x120012f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00114) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d00794) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50d00714) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 0
  *((volatile uint32_t *) 0x50100018) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50100098) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50100318) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100598) = 0x00002b20; // Layer control
  *((volatile uint32_t *) 0x50100a18) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50100618) = 0x02200418; // Mask offset and count
  *((volatile uint32_t *) 0x50100698) = 0x0000001f; // TRAM ptr max
  *((volatile uint32_t *) 0x50100798) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50100718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 1
  *((volatile uint32_t *) 0x50500018) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50500098) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50500318) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500598) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a18) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50500618) = 0x02200418; // Mask offset and count
  *((volatile uint32_t *) 0x50500698) = 0x0000001f; // TRAM ptr max
  *((volatile uint32_t *) 0x50500798) = 0x00023000; // Post processing register
  *((volatile uint32_t *) 0x50500718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 2
  *((volatile uint32_t *) 0x50900018) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50900098) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50900318) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900598) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a18) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50900618) = 0x02200418; // Mask offset and count
  *((volatile uint32_t *) 0x50900698) = 0x0000001f; // TRAM ptr max
  *((volatile uint32_t *) 0x50900798) = 0x00022000; // Post processing register

  // Layer 2 quadrant 3
  *((volatile uint32_t *) 0x50d00018) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50d00098) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50d00318) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00598) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a18) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00618) = 0x02200418; // Mask offset and count
  *((volatile uint32_t *) 0x50d00698) = 0x0000001f; // TRAM ptr max
  *((volatile uint32_t *) 0x50d00798) = 0x00022000; // Post processing register

  // Layer 3 quadrant 0
  *((volatile uint32_t *) 0x5010001c) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x5010009c) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x5010019c) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x5010021c) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x5010029c) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x5010031c) = 0x00010000; // SRAM write ptr
  *((volatile uint32_t *) 0x5010041c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x5010051c) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x5010059c) = 0x0000eba0; // Layer control
  *((volatile uint32_t *) 0x50100a1c) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x5010061c) = 0x04200518; // Mask offset and count
  *((volatile uint32_t *) 0x5010069c) = 0x0000000f; // TRAM ptr max
  *((volatile uint32_t *) 0x5010079c) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x5010071c) = 0xffffffff; // Mask and processor enables

  // Layer 3 quadrant 1
  *((volatile uint32_t *) 0x5050001c) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x5050009c) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x5050019c) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x5050021c) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x5050029c) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x5050031c) = 0x00010000; // SRAM write ptr
  *((volatile uint32_t *) 0x5050041c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x5050051c) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x5050059c) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a1c) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x5050061c) = 0x04200518; // Mask offset and count
  *((volatile uint32_t *) 0x5050069c) = 0x0000000f; // TRAM ptr max
  *((volatile uint32_t *) 0x5050079c) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x5050071c) = 0xffffffff; // Mask and processor enables

  // Layer 3 quadrant 2
  *((volatile uint32_t *) 0x5090001c) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x5090009c) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x5090019c) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x5090021c) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x5090029c) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x5090031c) = 0x00010000; // SRAM write ptr
  *((volatile uint32_t *) 0x5090041c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x5090051c) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x5090059c) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a1c) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x5090061c) = 0x04200518; // Mask offset and count
  *((volatile uint32_t *) 0x5090069c) = 0x0000000f; // TRAM ptr max
  *((volatile uint32_t *) 0x5090079c) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x5090071c) = 0xffffffff; // Mask and processor enables

  // Layer 3 quadrant 3
  *((volatile uint32_t *) 0x50d0001c) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50d0009c) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50d0019c) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d0021c) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d0029c) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d0031c) = 0x00010000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d0041c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d0051c) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50d0059c) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a1c) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50d0061c) = 0x04200518; // Mask offset and count
  *((volatile uint32_t *) 0x50d0069c) = 0x0000000f; // TRAM ptr max
  *((volatile uint32_t *) 0x50d0079c) = 0x00027000; // Post processing register
  *((volatile uint32_t *) 0x50d0071c) = 0xffffffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_configure_1(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x0000000f; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x0000000f; // Columns
  *((volatile uint32_t *) 0x50100310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100590) = 0x0000cb20; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100110) = 0x00000100; // 1D

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x0000000f; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x0000000f; // Columns
  *((volatile uint32_t *) 0x50500310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500110) = 0x00000100; // 1D

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x0000000f; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x0000000f; // Columns
  *((volatile uint32_t *) 0x50900310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50900790) = 0x00001000; // Post processing register
  *((volatile uint32_t *) 0x50900710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x0000000f; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x0000000f; // Columns
  *((volatile uint32_t *) 0x50d00310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d00710) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 0
  *((volatile uint32_t *) 0x50100014) = 0x00010011; // Rows
  *((volatile uint32_t *) 0x50100094) = 0x00010011; // Columns
  *((volatile uint32_t *) 0x50100194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50100214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50100294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50100514) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50100594) = 0x0000eba0; // Layer control
  *((volatile uint32_t *) 0x50100a14) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50100614) = 0x00400438; // Mask offset and count
  *((volatile uint32_t *) 0x50100694) = 0x00000007; // TRAM ptr max
  *((volatile uint32_t *) 0x50100794) = 0x00027000; // Post processing register
  *((volatile uint32_t *) 0x50100714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 1
  *((volatile uint32_t *) 0x50500014) = 0x00010011; // Rows
  *((volatile uint32_t *) 0x50500094) = 0x00010011; // Columns
  *((volatile uint32_t *) 0x50500194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50500214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50500294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50500414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50500514) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50500594) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a14) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50500614) = 0x00400438; // Mask offset and count
  *((volatile uint32_t *) 0x50500694) = 0x00000007; // TRAM ptr max
  *((volatile uint32_t *) 0x50500794) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50500714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 2
  *((volatile uint32_t *) 0x50900014) = 0x00010011; // Rows
  *((volatile uint32_t *) 0x50900094) = 0x00010011; // Columns
  *((volatile uint32_t *) 0x50900194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50900214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50900294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50900414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50900514) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50900594) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a14) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50900614) = 0x00400438; // Mask offset and count
  *((volatile uint32_t *) 0x50900694) = 0x00000007; // TRAM ptr max
  *((volatile uint32_t *) 0x50900794) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50900714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 3
  *((volatile uint32_t *) 0x50d00014) = 0x00010011; // Rows
  *((volatile uint32_t *) 0x50d00094) = 0x00010011; // Columns
  *((volatile uint32_t *) 0x50d00194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d00214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d00294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d00414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d00514) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50d00594) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a14) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50d00614) = 0x00400438; // Mask offset and count
  *((volatile uint32_t *) 0x50d00694) = 0x00000007; // TRAM ptr max
  *((volatile uint32_t *) 0x50d00794) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50d00714) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 0
  *((volatile uint32_t *) 0x50100018) = 0x00000007; // Rows
  *((volatile uint32_t *) 0x50100098) = 0x00000007; // Columns
  *((volatile uint32_t *) 0x50100318) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100398) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100498) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50100598) = 0x0000eb20; // Layer control
  *((volatile uint32_t *) 0x50100a18) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50100618) = 0x26402e38; // Mask offset and count
  *((volatile uint32_t *) 0x50100118) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50100798) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50100718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 1
  *((volatile uint32_t *) 0x50500018) = 0x00000007; // Rows
  *((volatile uint32_t *) 0x50500098) = 0x00000007; // Columns
  *((volatile uint32_t *) 0x50500318) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500398) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500498) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50500598) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a18) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50500618) = 0x26402e38; // Mask offset and count
  *((volatile uint32_t *) 0x50500118) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50500798) = 0x00023000; // Post processing register
  *((volatile uint32_t *) 0x50500718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 2
  *((volatile uint32_t *) 0x50900018) = 0x00000007; // Rows
  *((volatile uint32_t *) 0x50900098) = 0x00000007; // Columns
  *((volatile uint32_t *) 0x50900318) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900398) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900498) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50900598) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a18) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50900618) = 0x26402e38; // Mask offset and count
  *((volatile uint32_t *) 0x50900118) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50900798) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50900718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 3
  *((volatile uint32_t *) 0x50d00018) = 0x00000007; // Rows
  *((volatile uint32_t *) 0x50d00098) = 0x00000007; // Columns
  *((volatile uint32_t *) 0x50d00318) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00398) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00498) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d00598) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a18) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50d00618) = 0x26402e38; // Mask offset and count
  *((volatile uint32_t *) 0x50d00118) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d00798) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50d00718) = 0xffffffff; // Mask and processor enables

  // Layer 3 quadrant 0
  *((volatile uint32_t *) 0x5010001c) = 0x00010009; // Rows
  *((volatile uint32_t *) 0x5010009c) = 0x00010009; // Columns
  *((volatile uint32_t *) 0x5010019c) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x5010021c) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x5010029c) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x5010041c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x5010051c) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x5010059c) = 0x0000eba0; // Layer control
  *((volatile uint32_t *) 0x50100a1c) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x5010061c) = 0x05400938; // Mask offset and count
  *((volatile uint32_t *) 0x5010069c) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x5010079c) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x5010071c) = 0xffffffff; // Mask and processor enables

  // Layer 3 quadrant 1
  *((volatile uint32_t *) 0x5050001c) = 0x00010009; // Rows
  *((volatile uint32_t *) 0x5050009c) = 0x00010009; // Columns
  *((volatile uint32_t *) 0x5050019c) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x5050021c) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x5050029c) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x5050041c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x5050051c) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x5050059c) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a1c) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x5050061c) = 0x05400938; // Mask offset and count
  *((volatile uint32_t *) 0x5050069c) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x5050079c) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x5050071c) = 0xffffffff; // Mask and processor enables

  // Layer 3 quadrant 2
  *((volatile uint32_t *) 0x5090001c) = 0x00010009; // Rows
  *((volatile uint32_t *) 0x5090009c) = 0x00010009; // Columns
  *((volatile uint32_t *) 0x5090019c) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x5090021c) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x5090029c) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x5090041c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x5090051c) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x5090059c) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a1c) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x5090061c) = 0x05400938; // Mask offset and count
  *((volatile uint32_t *) 0x5090069c) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x5090079c) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x5090071c) = 0xffffffff; // Mask and processor enables

  // Layer 3 quadrant 3
  *((volatile uint32_t *) 0x50d0001c) = 0x00010009; // Rows
  *((volatile uint32_t *) 0x50d0009c) = 0x00010009; // Columns
  *((volatile uint32_t *) 0x50d0019c) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d0021c) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d0029c) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d0041c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d0051c) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50d0059c) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a1c) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x50d0061c) = 0x05400938; // Mask offset and count
  *((volatile uint32_t *) 0x50d0069c) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50d0079c) = 0x00027000; // Post processing register
  *((volatile uint32_t *) 0x50d0071c) = 0xffffffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_configure_2(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x00010005; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x00010005; // Columns
  *((volatile uint32_t *) 0x50100310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50100590) = 0x0000eb20; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100690) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50100790) = 0x00024000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x00010005; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x00010005; // Columns
  *((volatile uint32_t *) 0x50500310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50500590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500690) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50500790) = 0x00025000; // Post processing register
  *((volatile uint32_t *) 0x50500710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x00010005; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x00010005; // Columns
  *((volatile uint32_t *) 0x50900310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50900590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900690) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50900790) = 0x00024000; // Post processing register
  *((volatile uint32_t *) 0x50900710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x00010005; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x00010005; // Columns
  *((volatile uint32_t *) 0x50d00310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d00590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00690) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50d00790) = 0x00024000; // Post processing register
  *((volatile uint32_t *) 0x50d00710) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 0
  *((volatile uint32_t *) 0x50100014) = 0x00000003; // Rows
  *((volatile uint32_t *) 0x50100094) = 0x00000003; // Columns
  *((volatile uint32_t *) 0x50100194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50100214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50100294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100394) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50100514) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50100594) = 0x0000eba0; // Layer control
  *((volatile uint32_t *) 0x50100a14) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50100614) = 0x24002bf8; // Mask offset and count
  *((volatile uint32_t *) 0x50100114) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50100794) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50100714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 1
  *((volatile uint32_t *) 0x50500014) = 0x00000003; // Rows
  *((volatile uint32_t *) 0x50500094) = 0x00000003; // Columns
  *((volatile uint32_t *) 0x50500194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50500214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50500294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50500394) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50500514) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50500594) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a14) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50500614) = 0x24002bf8; // Mask offset and count
  *((volatile uint32_t *) 0x50500114) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50500794) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50500714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 2
  *((volatile uint32_t *) 0x50900014) = 0x00000003; // Rows
  *((volatile uint32_t *) 0x50900094) = 0x00000003; // Columns
  *((volatile uint32_t *) 0x50900194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50900214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50900294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50900394) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50900514) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50900594) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a14) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50900614) = 0x24002bf8; // Mask offset and count
  *((volatile uint32_t *) 0x50900114) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50900794) = 0x00023000; // Post processing register
  *((volatile uint32_t *) 0x50900714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 3
  *((volatile uint32_t *) 0x50d00014) = 0x00000003; // Rows
  *((volatile uint32_t *) 0x50d00094) = 0x00000003; // Columns
  *((volatile uint32_t *) 0x50d00194) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d00214) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d00294) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d00394) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d00514) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50d00594) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a14) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50d00614) = 0x24002bf8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00114) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d00794) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50d00714) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 0
  *((volatile uint32_t *) 0x50100318) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100398) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100598) = 0x0001e920; // Layer control
  *((volatile uint32_t *) 0x50100a18) = 0x00004807; // Layer control 2
  *((volatile uint32_t *) 0x50100618) = 0x2d002f78; // Mask offset and count
  *((volatile uint32_t *) 0x50100118) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50100798) = 0x00003000; // Post processing register
  *((volatile uint32_t *) 0x50100718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 1
  *((volatile uint32_t *) 0x50500318) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500398) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500598) = 0x00010920; // Layer control
  *((volatile uint32_t *) 0x50500a18) = 0x00004807; // Layer control 2
  *((volatile uint32_t *) 0x50500618) = 0x2d002f78; // Mask offset and count
  *((volatile uint32_t *) 0x50500118) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50500798) = 0x00002000; // Post processing register
  *((volatile uint32_t *) 0x50500718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 2
  *((volatile uint32_t *) 0x50900318) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900398) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900598) = 0x00010920; // Layer control
  *((volatile uint32_t *) 0x50900a18) = 0x00004807; // Layer control 2
  *((volatile uint32_t *) 0x50900618) = 0x2d002f78; // Mask offset and count
  *((volatile uint32_t *) 0x50900118) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50900798) = 0x00002000; // Post processing register
  *((volatile uint32_t *) 0x50900718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 3
  *((volatile uint32_t *) 0x50d00318) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00398) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00598) = 0x00010920; // Layer control
  *((volatile uint32_t *) 0x50d00a18) = 0x00004807; // Layer control 2
  *((volatile uint32_t *) 0x50d00618) = 0x2d002f78; // Mask offset and count
  *((volatile uint32_t *) 0x50d00118) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d00798) = 0x00002000; // Post processing register
  *((volatile uint32_t *) 0x50d00718) = 0xffffffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_load_bias_0(void)
{
  memcpy_8to32((uint32_t *) 0x50108000,layer_0_bias_0, sizeof(uint8_t) * 64);
  memcpy_8to32((uint32_t *) 0x50508000,layer_0_bias_1, sizeof(uint8_t) * 64);
  memcpy_8to32((uint32_t *) 0x50908000,layer_0_bias_2, sizeof(uint8_t) * 32);
  memcpy_8to32((uint32_t *) 0x50d08000,layer_0_bias_3, sizeof(uint8_t) * 32);

  return CNN_OK;
}
int cnn_load_bias_1(void)
{
  memcpy_8to32((uint32_t *) 0x50108000,layer_1_bias_0, sizeof(uint8_t) * 128);
  memcpy_8to32((uint32_t *) 0x50508000,layer_1_bias_1, sizeof(uint8_t) * 128);
  memcpy_8to32((uint32_t *) 0x50908000,layer_1_bias_2, sizeof(uint8_t) * 64);
  memcpy_8to32((uint32_t *) 0x50d08000,layer_1_bias_3, sizeof(uint8_t) * 64);

  return CNN_OK;
}
int cnn_load_bias_2(void)
{
  memcpy_8to32((uint32_t *) 0x50108000,layer_2_bias_0, sizeof(uint8_t) * 10);
  memcpy_8to32((uint32_t *) 0x50508000,layer_2_bias_1, sizeof(uint8_t) * 128);
  memcpy_8to32((uint32_t *) 0x50908000,layer_2_bias_2, sizeof(uint8_t) * 128);

  return CNN_OK;
}
int cnn_load_weights_0(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_0_kernel_0, 369);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_0_kernel_1, 369);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_0_kernel_2, 369);
  *((volatile uint8_t *) 0x5018c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_0_kernel_3, 225);
  *((volatile uint8_t *) 0x50190101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_0_kernel_4, 225);
  *((volatile uint8_t *) 0x50194101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_0_kernel_5, 225);
  *((volatile uint8_t *) 0x50198101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_0_kernel_6, 225);
  *((volatile uint8_t *) 0x5019c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_0_kernel_7, 225);
  *((volatile uint8_t *) 0x501a0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_0_kernel_8, 225);
  *((volatile uint8_t *) 0x501a4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_0_kernel_9, 225);
  *((volatile uint8_t *) 0x501a8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_0_kernel_10, 225);
  *((volatile uint8_t *) 0x501ac101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_0_kernel_11, 225);
  *((volatile uint8_t *) 0x501b0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_0_kernel_12, 225);
  *((volatile uint8_t *) 0x501b4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_0_kernel_13, 225);
  *((volatile uint8_t *) 0x501b8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_0_kernel_14, 225);
  *((volatile uint8_t *) 0x501bc101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_0_kernel_15, 225);
  *((volatile uint8_t *) 0x50580101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_0_kernel_16, 225);
  *((volatile uint8_t *) 0x50584101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_0_kernel_17, 225);
  *((volatile uint8_t *) 0x50588101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_0_kernel_18, 225);
  *((volatile uint8_t *) 0x5058c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_0_kernel_19, 225);
  *((volatile uint8_t *) 0x50590101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_0_kernel_20, 225);
  *((volatile uint8_t *) 0x50594101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_0_kernel_21, 225);
  *((volatile uint8_t *) 0x50598101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_0_kernel_22, 225);
  *((volatile uint8_t *) 0x5059c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_0_kernel_23, 225);
  *((volatile uint8_t *) 0x505a0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_0_kernel_24, 225);
  *((volatile uint8_t *) 0x505a4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_0_kernel_25, 225);
  *((volatile uint8_t *) 0x505a8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_0_kernel_26, 225);
  *((volatile uint8_t *) 0x505ac101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_0_kernel_27, 225);
  *((volatile uint8_t *) 0x505b0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_0_kernel_28, 225);
  *((volatile uint8_t *) 0x505b4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_0_kernel_29, 225);
  *((volatile uint8_t *) 0x505b8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_0_kernel_30, 225);
  *((volatile uint8_t *) 0x505bc101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_0_kernel_31, 225);
  *((volatile uint8_t *) 0x50980101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_0_kernel_32, 225);
  *((volatile uint8_t *) 0x50984101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_0_kernel_33, 225);
  *((volatile uint8_t *) 0x50988101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_0_kernel_34, 225);
  *((volatile uint8_t *) 0x5098c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_0_kernel_35, 225);
  *((volatile uint8_t *) 0x50990101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_0_kernel_36, 225);
  *((volatile uint8_t *) 0x50994101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_0_kernel_37, 225);
  *((volatile uint8_t *) 0x50998101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_0_kernel_38, 225);
  *((volatile uint8_t *) 0x5099c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_0_kernel_39, 225);
  *((volatile uint8_t *) 0x509a0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_0_kernel_40, 225);
  *((volatile uint8_t *) 0x509a4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_0_kernel_41, 225);
  *((volatile uint8_t *) 0x509a8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_0_kernel_42, 225);
  *((volatile uint8_t *) 0x509ac101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_0_kernel_43, 225);
  *((volatile uint8_t *) 0x509b0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_0_kernel_44, 225);
  *((volatile uint8_t *) 0x509b4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_0_kernel_45, 225);
  *((volatile uint8_t *) 0x509b8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_0_kernel_46, 225);
  *((volatile uint8_t *) 0x509bc101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_0_kernel_47, 225);
  *((volatile uint8_t *) 0x50d80101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_0_kernel_48, 225);
  *((volatile uint8_t *) 0x50d84101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_0_kernel_49, 225);
  *((volatile uint8_t *) 0x50d88101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_0_kernel_50, 225);
  *((volatile uint8_t *) 0x50d8c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_0_kernel_51, 225);
  *((volatile uint8_t *) 0x50d90101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_0_kernel_52, 225);
  *((volatile uint8_t *) 0x50d94101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_0_kernel_53, 225);
  *((volatile uint8_t *) 0x50d98101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_0_kernel_54, 225);
  *((volatile uint8_t *) 0x50d9c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_0_kernel_55, 225);
  *((volatile uint8_t *) 0x50da0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_0_kernel_56, 225);
  *((volatile uint8_t *) 0x50da4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_0_kernel_57, 225);
  *((volatile uint8_t *) 0x50da8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_0_kernel_58, 225);
  *((volatile uint8_t *) 0x50dac101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_0_kernel_59, 225);
  *((volatile uint8_t *) 0x50db0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_0_kernel_60, 225);
  *((volatile uint8_t *) 0x50db4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_0_kernel_61, 225);
  *((volatile uint8_t *) 0x50db8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_0_kernel_62, 225);
  *((volatile uint8_t *) 0x50dbc101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_0_kernel_63, 225);

  return CNN_OK;
}
int cnn_load_weights_1(void)
{
  *((volatile uint8_t *) 0x50180021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_1_kernel_0, 648);
  *((volatile uint8_t *) 0x50184021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_1_kernel_1, 648);
  *((volatile uint8_t *) 0x50188021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_1_kernel_2, 648);
  *((volatile uint8_t *) 0x5018c021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_1_kernel_3, 648);
  *((volatile uint8_t *) 0x50190021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_1_kernel_4, 648);
  *((volatile uint8_t *) 0x50194021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_1_kernel_5, 648);
  *((volatile uint8_t *) 0x50198021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_1_kernel_6, 648);
  *((volatile uint8_t *) 0x5019c021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_1_kernel_7, 648);
  *((volatile uint8_t *) 0x501a0021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_1_kernel_8, 648);
  *((volatile uint8_t *) 0x501a4021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_1_kernel_9, 648);
  *((volatile uint8_t *) 0x501a8021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_1_kernel_10, 648);
  *((volatile uint8_t *) 0x501ac021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_1_kernel_11, 648);
  *((volatile uint8_t *) 0x501b0021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_1_kernel_12, 648);
  *((volatile uint8_t *) 0x501b4021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_1_kernel_13, 648);
  *((volatile uint8_t *) 0x501b8021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_1_kernel_14, 648);
  *((volatile uint8_t *) 0x501bc021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_1_kernel_15, 648);
  *((volatile uint8_t *) 0x50580021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_1_kernel_16, 648);
  *((volatile uint8_t *) 0x50584021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_1_kernel_17, 648);
  *((volatile uint8_t *) 0x50588021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_1_kernel_18, 648);
  *((volatile uint8_t *) 0x5058c021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_1_kernel_19, 648);
  *((volatile uint8_t *) 0x50590021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_1_kernel_20, 648);
  *((volatile uint8_t *) 0x50594021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_1_kernel_21, 648);
  *((volatile uint8_t *) 0x50598021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_1_kernel_22, 648);
  *((volatile uint8_t *) 0x5059c021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_1_kernel_23, 648);
  *((volatile uint8_t *) 0x505a0021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_1_kernel_24, 648);
  *((volatile uint8_t *) 0x505a4021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_1_kernel_25, 648);
  *((volatile uint8_t *) 0x505a8021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_1_kernel_26, 648);
  *((volatile uint8_t *) 0x505ac021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_1_kernel_27, 648);
  *((volatile uint8_t *) 0x505b0021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_1_kernel_28, 648);
  *((volatile uint8_t *) 0x505b4021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_1_kernel_29, 648);
  *((volatile uint8_t *) 0x505b8021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_1_kernel_30, 648);
  *((volatile uint8_t *) 0x505bc021) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_1_kernel_31, 648);
  *((volatile uint8_t *) 0x50980001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_1_kernel_32, 666);
  *((volatile uint8_t *) 0x50984001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_1_kernel_33, 666);
  *((volatile uint8_t *) 0x50988001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_1_kernel_34, 666);
  *((volatile uint8_t *) 0x5098c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_1_kernel_35, 666);
  *((volatile uint8_t *) 0x50990001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_1_kernel_36, 666);
  *((volatile uint8_t *) 0x50994001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_1_kernel_37, 666);
  *((volatile uint8_t *) 0x50998001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_1_kernel_38, 666);
  *((volatile uint8_t *) 0x5099c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_1_kernel_39, 666);
  *((volatile uint8_t *) 0x509a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_1_kernel_40, 666);
  *((volatile uint8_t *) 0x509a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_1_kernel_41, 666);
  *((volatile uint8_t *) 0x509a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_1_kernel_42, 666);
  *((volatile uint8_t *) 0x509ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_1_kernel_43, 666);
  *((volatile uint8_t *) 0x509b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_1_kernel_44, 666);
  *((volatile uint8_t *) 0x509b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_1_kernel_45, 666);
  *((volatile uint8_t *) 0x509b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_1_kernel_46, 666);
  *((volatile uint8_t *) 0x509bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_1_kernel_47, 666);
  *((volatile uint8_t *) 0x50d80001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_1_kernel_48, 666);
  *((volatile uint8_t *) 0x50d84001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_1_kernel_49, 666);
  *((volatile uint8_t *) 0x50d88001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_1_kernel_50, 666);
  *((volatile uint8_t *) 0x50d8c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_1_kernel_51, 666);
  *((volatile uint8_t *) 0x50d90001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_1_kernel_52, 666);
  *((volatile uint8_t *) 0x50d94001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_1_kernel_53, 666);
  *((volatile uint8_t *) 0x50d98001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_1_kernel_54, 666);
  *((volatile uint8_t *) 0x50d9c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_1_kernel_55, 666);
  *((volatile uint8_t *) 0x50da0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_1_kernel_56, 666);
  *((volatile uint8_t *) 0x50da4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_1_kernel_57, 666);
  *((volatile uint8_t *) 0x50da8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_1_kernel_58, 666);
  *((volatile uint8_t *) 0x50dac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_1_kernel_59, 666);
  *((volatile uint8_t *) 0x50db0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_1_kernel_60, 666);
  *((volatile uint8_t *) 0x50db4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_1_kernel_61, 666);
  *((volatile uint8_t *) 0x50db8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_1_kernel_62, 666);
  *((volatile uint8_t *) 0x50dbc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_1_kernel_63, 666);

  return CNN_OK;
}
int cnn_load_weights_2(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_2_kernel_0, 381);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_2_kernel_1, 381);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_2_kernel_2, 381);
  *((volatile uint8_t *) 0x5018c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_2_kernel_3, 381);
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_2_kernel_4, 381);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_2_kernel_5, 381);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_2_kernel_6, 381);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_2_kernel_7, 381);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_2_kernel_8, 381);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_2_kernel_9, 381);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_2_kernel_10, 381);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_2_kernel_11, 381);
  *((volatile uint8_t *) 0x501b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_2_kernel_12, 381);
  *((volatile uint8_t *) 0x501b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_2_kernel_13, 381);
  *((volatile uint8_t *) 0x501b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_2_kernel_14, 381);
  *((volatile uint8_t *) 0x501bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_2_kernel_15, 381);
  *((volatile uint8_t *) 0x50580001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_2_kernel_16, 381);
  *((volatile uint8_t *) 0x50584001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_2_kernel_17, 381);
  *((volatile uint8_t *) 0x50588001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_2_kernel_18, 381);
  *((volatile uint8_t *) 0x5058c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_2_kernel_19, 381);
  *((volatile uint8_t *) 0x50590001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_2_kernel_20, 381);
  *((volatile uint8_t *) 0x50594001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_2_kernel_21, 381);
  *((volatile uint8_t *) 0x50598001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_2_kernel_22, 381);
  *((volatile uint8_t *) 0x5059c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_2_kernel_23, 381);
  *((volatile uint8_t *) 0x505a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_2_kernel_24, 381);
  *((volatile uint8_t *) 0x505a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_2_kernel_25, 381);
  *((volatile uint8_t *) 0x505a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_2_kernel_26, 381);
  *((volatile uint8_t *) 0x505ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_2_kernel_27, 381);
  *((volatile uint8_t *) 0x505b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_2_kernel_28, 381);
  *((volatile uint8_t *) 0x505b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_2_kernel_29, 381);
  *((volatile uint8_t *) 0x505b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_2_kernel_30, 381);
  *((volatile uint8_t *) 0x505bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_2_kernel_31, 381);
  *((volatile uint8_t *) 0x50980001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_2_kernel_32, 381);
  *((volatile uint8_t *) 0x50984001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_2_kernel_33, 381);
  *((volatile uint8_t *) 0x50988001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_2_kernel_34, 381);
  *((volatile uint8_t *) 0x5098c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_2_kernel_35, 381);
  *((volatile uint8_t *) 0x50990001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_2_kernel_36, 381);
  *((volatile uint8_t *) 0x50994001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_2_kernel_37, 381);
  *((volatile uint8_t *) 0x50998001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_2_kernel_38, 381);
  *((volatile uint8_t *) 0x5099c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_2_kernel_39, 381);
  *((volatile uint8_t *) 0x509a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_2_kernel_40, 381);
  *((volatile uint8_t *) 0x509a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_2_kernel_41, 381);
  *((volatile uint8_t *) 0x509a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_2_kernel_42, 381);
  *((volatile uint8_t *) 0x509ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_2_kernel_43, 381);
  *((volatile uint8_t *) 0x509b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_2_kernel_44, 381);
  *((volatile uint8_t *) 0x509b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_2_kernel_45, 381);
  *((volatile uint8_t *) 0x509b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_2_kernel_46, 381);
  *((volatile uint8_t *) 0x509bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_2_kernel_47, 381);
  *((volatile uint8_t *) 0x50d80001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_2_kernel_48, 381);
  *((volatile uint8_t *) 0x50d84001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_2_kernel_49, 381);
  *((volatile uint8_t *) 0x50d88001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_2_kernel_50, 381);
  *((volatile uint8_t *) 0x50d8c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_2_kernel_51, 381);
  *((volatile uint8_t *) 0x50d90001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_2_kernel_52, 381);
  *((volatile uint8_t *) 0x50d94001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_2_kernel_53, 381);
  *((volatile uint8_t *) 0x50d98001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_2_kernel_54, 381);
  *((volatile uint8_t *) 0x50d9c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_2_kernel_55, 381);
  *((volatile uint8_t *) 0x50da0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_2_kernel_56, 381);
  *((volatile uint8_t *) 0x50da4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_2_kernel_57, 381);
  *((volatile uint8_t *) 0x50da8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_2_kernel_58, 381);
  *((volatile uint8_t *) 0x50dac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_2_kernel_59, 381);
  *((volatile uint8_t *) 0x50db0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_2_kernel_60, 381);
  *((volatile uint8_t *) 0x50db4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_2_kernel_61, 381);
  *((volatile uint8_t *) 0x50db8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_2_kernel_62, 381);
  *((volatile uint8_t *) 0x50dbc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_2_kernel_63, 381);

  return CNN_OK;
}
int cnn_init_0(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50100008) = 0x00000003; // Layer count
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500008) = 0x00000003; // Layer count
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900008) = 0x00000003; // Layer count
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00008) = 0x00000003; // Layer count

  return CNN_OK;
}
int cnn_init_1(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50100008) = 0x00000003; // Layer count
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500008) = 0x00000003; // Layer count
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900008) = 0x00000003; // Layer count
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00008) = 0x00000003; // Layer count

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
