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
static const uint8_t  layer_0_bias_0[] = LAYER_0_BIAS_0;
static const uint8_t  layer_0_bias_1[] = LAYER_0_BIAS_1;
static const uint8_t  layer_0_bias_2[] = LAYER_0_BIAS_2;
static const uint8_t  layer_0_bias_3[] = LAYER_0_BIAS_3;
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

  // Custom unload for this network, layer 10: 32-bit data, shape: (10, 1, 1)
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
  *((volatile uint32_t *) 0x50100590) = 0x00002b20; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100690) = 0x0000001f; // TRAM ptr max
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
  *((volatile uint32_t *) 0x50500790) = 0x00001080; // Post processing register

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
  *((volatile uint32_t *) 0x50500794) = 0x000230c0; // Post processing register
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
  *((volatile uint32_t *) 0x50900794) = 0x00022000; // Post processing register
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
  *((volatile uint32_t *) 0x50100598) = 0x00006b20; // Layer control
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
  *((volatile uint32_t *) 0x50500798) = 0x00022000; // Post processing register
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
  *((volatile uint32_t *) 0x50900798) = 0x00023080; // Post processing register

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
  *((volatile uint32_t *) 0x5090079c) = 0x000270c0; // Post processing register
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
  *((volatile uint32_t *) 0x50d0079c) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50d0071c) = 0xffffffff; // Mask and processor enables

  // Layer 4 quadrant 0
  *((volatile uint32_t *) 0x50100020) = 0x0000000f; // Rows
  *((volatile uint32_t *) 0x501000a0) = 0x0000000f; // Columns
  *((volatile uint32_t *) 0x50100320) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x501003a0) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100420) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x501005a0) = 0x0000cb20; // Layer control
  *((volatile uint32_t *) 0x50100a20) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50100620) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100120) = 0x00000100; // 1D

  // Layer 4 quadrant 1
  *((volatile uint32_t *) 0x50500020) = 0x0000000f; // Rows
  *((volatile uint32_t *) 0x505000a0) = 0x0000000f; // Columns
  *((volatile uint32_t *) 0x50500320) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x505003a0) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500420) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x505005a0) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a20) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50500620) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500120) = 0x00000100; // 1D

  // Layer 4 quadrant 2
  *((volatile uint32_t *) 0x50900020) = 0x0000000f; // Rows
  *((volatile uint32_t *) 0x509000a0) = 0x0000000f; // Columns
  *((volatile uint32_t *) 0x50900320) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x509003a0) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900420) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x509005a0) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a20) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50900620) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900120) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50900720) = 0xffffffff; // Mask and processor enables

  // Layer 4 quadrant 3
  *((volatile uint32_t *) 0x50d00020) = 0x0000000f; // Rows
  *((volatile uint32_t *) 0x50d000a0) = 0x0000000f; // Columns
  *((volatile uint32_t *) 0x50d00320) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d003a0) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00420) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d005a0) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a20) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00620) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00120) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d007a0) = 0x00001080; // Post processing register
  *((volatile uint32_t *) 0x50d00720) = 0xffffffff; // Mask and processor enables

  // Layer 5 quadrant 0
  *((volatile uint32_t *) 0x50100024) = 0x00010011; // Rows
  *((volatile uint32_t *) 0x501000a4) = 0x00010011; // Columns
  *((volatile uint32_t *) 0x501001a4) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50100224) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x501002a4) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100424) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x501004a4) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50100524) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x501005a4) = 0x0000eba0; // Layer control
  *((volatile uint32_t *) 0x50100a24) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50100624) = 0x05200918; // Mask offset and count
  *((volatile uint32_t *) 0x501006a4) = 0x00000007; // TRAM ptr max
  *((volatile uint32_t *) 0x501007a4) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50100724) = 0xffffffff; // Mask and processor enables

  // Layer 5 quadrant 1
  *((volatile uint32_t *) 0x50500024) = 0x00010011; // Rows
  *((volatile uint32_t *) 0x505000a4) = 0x00010011; // Columns
  *((volatile uint32_t *) 0x505001a4) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50500224) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x505002a4) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50500424) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x505004a4) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50500524) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x505005a4) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a24) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50500624) = 0x05200918; // Mask offset and count
  *((volatile uint32_t *) 0x505006a4) = 0x00000007; // TRAM ptr max
  *((volatile uint32_t *) 0x505007a4) = 0x00027000; // Post processing register
  *((volatile uint32_t *) 0x50500724) = 0xffffffff; // Mask and processor enables

  // Layer 5 quadrant 2
  *((volatile uint32_t *) 0x50900024) = 0x00010011; // Rows
  *((volatile uint32_t *) 0x509000a4) = 0x00010011; // Columns
  *((volatile uint32_t *) 0x509001a4) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50900224) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x509002a4) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50900424) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x509004a4) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50900524) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x509005a4) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a24) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50900624) = 0x05200918; // Mask offset and count
  *((volatile uint32_t *) 0x509006a4) = 0x00000007; // TRAM ptr max
  *((volatile uint32_t *) 0x509007a4) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50900724) = 0xffffffff; // Mask and processor enables

  // Layer 5 quadrant 3
  *((volatile uint32_t *) 0x50d00024) = 0x00010011; // Rows
  *((volatile uint32_t *) 0x50d000a4) = 0x00010011; // Columns
  *((volatile uint32_t *) 0x50d001a4) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d00224) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d002a4) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d00424) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d004a4) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d00524) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50d005a4) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a24) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50d00624) = 0x05200918; // Mask offset and count
  *((volatile uint32_t *) 0x50d006a4) = 0x00000007; // TRAM ptr max
  *((volatile uint32_t *) 0x50d007a4) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50d00724) = 0xffffffff; // Mask and processor enables

  // Layer 6 quadrant 0
  *((volatile uint32_t *) 0x50100028) = 0x00000007; // Rows
  *((volatile uint32_t *) 0x501000a8) = 0x00000007; // Columns
  *((volatile uint32_t *) 0x50100328) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x501003a8) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100428) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x501004a8) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x501005a8) = 0x0000eb20; // Layer control
  *((volatile uint32_t *) 0x50100a28) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50100628) = 0x52205a18; // Mask offset and count
  *((volatile uint32_t *) 0x50100128) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x501007a8) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50100728) = 0xffffffff; // Mask and processor enables

  // Layer 6 quadrant 1
  *((volatile uint32_t *) 0x50500028) = 0x00000007; // Rows
  *((volatile uint32_t *) 0x505000a8) = 0x00000007; // Columns
  *((volatile uint32_t *) 0x50500328) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x505003a8) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500428) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x505004a8) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x505005a8) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a28) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50500628) = 0x52205a18; // Mask offset and count
  *((volatile uint32_t *) 0x50500128) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x505007a8) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50500728) = 0xffffffff; // Mask and processor enables

  // Layer 6 quadrant 2
  *((volatile uint32_t *) 0x50900028) = 0x00000007; // Rows
  *((volatile uint32_t *) 0x509000a8) = 0x00000007; // Columns
  *((volatile uint32_t *) 0x50900328) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x509003a8) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900428) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x509004a8) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x509005a8) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a28) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50900628) = 0x52205a18; // Mask offset and count
  *((volatile uint32_t *) 0x50900128) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x509007a8) = 0x00023000; // Post processing register
  *((volatile uint32_t *) 0x50900728) = 0xffffffff; // Mask and processor enables

  // Layer 6 quadrant 3
  *((volatile uint32_t *) 0x50d00028) = 0x00000007; // Rows
  *((volatile uint32_t *) 0x50d000a8) = 0x00000007; // Columns
  *((volatile uint32_t *) 0x50d00328) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d003a8) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00428) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d004a8) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d005a8) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a28) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50d00628) = 0x52205a18; // Mask offset and count
  *((volatile uint32_t *) 0x50d00128) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d007a8) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50d00728) = 0xffffffff; // Mask and processor enables

  // Layer 7 quadrant 0
  *((volatile uint32_t *) 0x5010002c) = 0x00010009; // Rows
  *((volatile uint32_t *) 0x501000ac) = 0x00010009; // Columns
  *((volatile uint32_t *) 0x501001ac) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x5010022c) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x501002ac) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x5010042c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x5010052c) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x501005ac) = 0x0000eba0; // Layer control
  *((volatile uint32_t *) 0x50100a2c) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x5010062c) = 0x0a200e18; // Mask offset and count
  *((volatile uint32_t *) 0x501006ac) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x501007ac) = 0x0002708a; // Post processing register
  *((volatile uint32_t *) 0x5010072c) = 0xffffffff; // Mask and processor enables

  // Layer 7 quadrant 1
  *((volatile uint32_t *) 0x5050002c) = 0x00010009; // Rows
  *((volatile uint32_t *) 0x505000ac) = 0x00010009; // Columns
  *((volatile uint32_t *) 0x505001ac) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x5050022c) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x505002ac) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x5050042c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x5050052c) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x505005ac) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a2c) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x5050062c) = 0x0a200e18; // Mask offset and count
  *((volatile uint32_t *) 0x505006ac) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x505007ac) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x5050072c) = 0xffffffff; // Mask and processor enables

  // Layer 7 quadrant 2
  *((volatile uint32_t *) 0x5090002c) = 0x00010009; // Rows
  *((volatile uint32_t *) 0x509000ac) = 0x00010009; // Columns
  *((volatile uint32_t *) 0x509001ac) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x5090022c) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x509002ac) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x5090042c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x5090052c) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x509005ac) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a2c) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x5090062c) = 0x0a200e18; // Mask offset and count
  *((volatile uint32_t *) 0x509006ac) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x509007ac) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x5090072c) = 0xffffffff; // Mask and processor enables

  // Layer 7 quadrant 3
  *((volatile uint32_t *) 0x50d0002c) = 0x00010009; // Rows
  *((volatile uint32_t *) 0x50d000ac) = 0x00010009; // Columns
  *((volatile uint32_t *) 0x50d001ac) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d0022c) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d002ac) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d0042c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d0052c) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50d005ac) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a2c) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x50d0062c) = 0x0a200e18; // Mask offset and count
  *((volatile uint32_t *) 0x50d006ac) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50d007ac) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50d0072c) = 0xffffffff; // Mask and processor enables

  // Layer 8 quadrant 0
  *((volatile uint32_t *) 0x50100030) = 0x00010005; // Rows
  *((volatile uint32_t *) 0x501000b0) = 0x00010005; // Columns
  *((volatile uint32_t *) 0x50100330) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100430) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x501004b0) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x501005b0) = 0x0000eb20; // Layer control
  *((volatile uint32_t *) 0x50100a30) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50100630) = 0x0e201218; // Mask offset and count
  *((volatile uint32_t *) 0x501006b0) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x501007b0) = 0x00024000; // Post processing register
  *((volatile uint32_t *) 0x50100730) = 0xffffffff; // Mask and processor enables

  // Layer 8 quadrant 1
  *((volatile uint32_t *) 0x50500030) = 0x00010005; // Rows
  *((volatile uint32_t *) 0x505000b0) = 0x00010005; // Columns
  *((volatile uint32_t *) 0x50500330) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500430) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x505004b0) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x505005b0) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a30) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50500630) = 0x0e201218; // Mask offset and count
  *((volatile uint32_t *) 0x505006b0) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x505007b0) = 0x00024000; // Post processing register
  *((volatile uint32_t *) 0x50500730) = 0xffffffff; // Mask and processor enables

  // Layer 8 quadrant 2
  *((volatile uint32_t *) 0x50900030) = 0x00010005; // Rows
  *((volatile uint32_t *) 0x509000b0) = 0x00010005; // Columns
  *((volatile uint32_t *) 0x50900330) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900430) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x509004b0) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x509005b0) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a30) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50900630) = 0x0e201218; // Mask offset and count
  *((volatile uint32_t *) 0x509006b0) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x509007b0) = 0x00024000; // Post processing register
  *((volatile uint32_t *) 0x50900730) = 0xffffffff; // Mask and processor enables

  // Layer 8 quadrant 3
  *((volatile uint32_t *) 0x50d00030) = 0x00010005; // Rows
  *((volatile uint32_t *) 0x50d000b0) = 0x00010005; // Columns
  *((volatile uint32_t *) 0x50d00330) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00430) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d004b0) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d005b0) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a30) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50d00630) = 0x0e201218; // Mask offset and count
  *((volatile uint32_t *) 0x50d006b0) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50d007b0) = 0x00025000; // Post processing register
  *((volatile uint32_t *) 0x50d00730) = 0xffffffff; // Mask and processor enables

  // Layer 9 quadrant 0
  *((volatile uint32_t *) 0x50100034) = 0x00000003; // Rows
  *((volatile uint32_t *) 0x501000b4) = 0x00000003; // Columns
  *((volatile uint32_t *) 0x501001b4) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50100234) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x501002b4) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x501003b4) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100434) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x501004b4) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50100534) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x501005b4) = 0x0000eba0; // Layer control
  *((volatile uint32_t *) 0x50100a34) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50100634) = 0xa320ab18; // Mask offset and count
  *((volatile uint32_t *) 0x50100134) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x501007b4) = 0x0002300a; // Post processing register
  *((volatile uint32_t *) 0x50100734) = 0xffffffff; // Mask and processor enables

  // Layer 9 quadrant 1
  *((volatile uint32_t *) 0x50500034) = 0x00000003; // Rows
  *((volatile uint32_t *) 0x505000b4) = 0x00000003; // Columns
  *((volatile uint32_t *) 0x505001b4) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50500234) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x505002b4) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x505003b4) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500434) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x505004b4) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50500534) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x505005b4) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a34) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50500634) = 0xa320ab18; // Mask offset and count
  *((volatile uint32_t *) 0x50500134) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x505007b4) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50500734) = 0xffffffff; // Mask and processor enables

  // Layer 9 quadrant 2
  *((volatile uint32_t *) 0x50900034) = 0x00000003; // Rows
  *((volatile uint32_t *) 0x509000b4) = 0x00000003; // Columns
  *((volatile uint32_t *) 0x509001b4) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50900234) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x509002b4) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x509003b4) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900434) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x509004b4) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50900534) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x509005b4) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a34) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50900634) = 0xa320ab18; // Mask offset and count
  *((volatile uint32_t *) 0x50900134) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x509007b4) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50900734) = 0xffffffff; // Mask and processor enables

  // Layer 9 quadrant 3
  *((volatile uint32_t *) 0x50d00034) = 0x00000003; // Rows
  *((volatile uint32_t *) 0x50d000b4) = 0x00000003; // Columns
  *((volatile uint32_t *) 0x50d001b4) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d00234) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d002b4) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d003b4) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00434) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d004b4) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d00534) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50d005b4) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a34) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50d00634) = 0xa320ab18; // Mask offset and count
  *((volatile uint32_t *) 0x50d00134) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d007b4) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50d00734) = 0xffffffff; // Mask and processor enables

  // Layer 10 quadrant 0
  *((volatile uint32_t *) 0x50100338) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x501003b8) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100438) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x501005b8) = 0x0001e920; // Layer control
  *((volatile uint32_t *) 0x50100a38) = 0x00004807; // Layer control 2
  *((volatile uint32_t *) 0x50100638) = 0xac20ae98; // Mask offset and count
  *((volatile uint32_t *) 0x50100138) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x501007b8) = 0x00003000; // Post processing register
  *((volatile uint32_t *) 0x50100738) = 0xffffffff; // Mask and processor enables

  // Layer 10 quadrant 1
  *((volatile uint32_t *) 0x50500338) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x505003b8) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500438) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x505005b8) = 0x00010920; // Layer control
  *((volatile uint32_t *) 0x50500a38) = 0x00004807; // Layer control 2
  *((volatile uint32_t *) 0x50500638) = 0xac20ae98; // Mask offset and count
  *((volatile uint32_t *) 0x50500138) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x505007b8) = 0x00002000; // Post processing register
  *((volatile uint32_t *) 0x50500738) = 0xffffffff; // Mask and processor enables

  // Layer 10 quadrant 2
  *((volatile uint32_t *) 0x50900338) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x509003b8) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900438) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x509005b8) = 0x00010920; // Layer control
  *((volatile uint32_t *) 0x50900a38) = 0x00004807; // Layer control 2
  *((volatile uint32_t *) 0x50900638) = 0xac20ae98; // Mask offset and count
  *((volatile uint32_t *) 0x50900138) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x509007b8) = 0x00002000; // Post processing register
  *((volatile uint32_t *) 0x50900738) = 0xffffffff; // Mask and processor enables

  // Layer 10 quadrant 3
  *((volatile uint32_t *) 0x50d00338) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d003b8) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00438) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d005b8) = 0x00010920; // Layer control
  *((volatile uint32_t *) 0x50d00a38) = 0x00004807; // Layer control 2
  *((volatile uint32_t *) 0x50d00638) = 0xac20ae98; // Mask offset and count
  *((volatile uint32_t *) 0x50d00138) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d007b8) = 0x00002000; // Post processing register
  *((volatile uint32_t *) 0x50d00738) = 0xffffffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_load_bias_0(void)
{
  memcpy_8to32((uint32_t *) 0x50108000,layer_0_bias_0, sizeof(uint8_t) * 202);
  memcpy_8to32((uint32_t *) 0x50508000,layer_0_bias_1, sizeof(uint8_t) * 224);
  memcpy_8to32((uint32_t *) 0x50908000,layer_0_bias_2, sizeof(uint8_t) * 224);
  memcpy_8to32((uint32_t *) 0x50d08000,layer_0_bias_3, sizeof(uint8_t) * 192);

  return CNN_OK;
}
int cnn_load_weights_0(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_0_kernel_0, 1398);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_0_kernel_1, 1398);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_0_kernel_2, 1398);
  *((volatile uint8_t *) 0x5018c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_0_kernel_3, 1254);
  *((volatile uint8_t *) 0x50190101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_0_kernel_4, 1254);
  *((volatile uint8_t *) 0x50194101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_0_kernel_5, 1254);
  *((volatile uint8_t *) 0x50198101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_0_kernel_6, 1254);
  *((volatile uint8_t *) 0x5019c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_0_kernel_7, 1254);
  *((volatile uint8_t *) 0x501a0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_0_kernel_8, 1254);
  *((volatile uint8_t *) 0x501a4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_0_kernel_9, 1254);
  *((volatile uint8_t *) 0x501a8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_0_kernel_10, 1254);
  *((volatile uint8_t *) 0x501ac101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_0_kernel_11, 1254);
  *((volatile uint8_t *) 0x501b0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_0_kernel_12, 1254);
  *((volatile uint8_t *) 0x501b4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_0_kernel_13, 1254);
  *((volatile uint8_t *) 0x501b8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_0_kernel_14, 1254);
  *((volatile uint8_t *) 0x501bc101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_0_kernel_15, 1254);
  *((volatile uint8_t *) 0x50580101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_0_kernel_16, 1254);
  *((volatile uint8_t *) 0x50584101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_0_kernel_17, 1254);
  *((volatile uint8_t *) 0x50588101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_0_kernel_18, 1254);
  *((volatile uint8_t *) 0x5058c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_0_kernel_19, 1254);
  *((volatile uint8_t *) 0x50590101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_0_kernel_20, 1254);
  *((volatile uint8_t *) 0x50594101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_0_kernel_21, 1254);
  *((volatile uint8_t *) 0x50598101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_0_kernel_22, 1254);
  *((volatile uint8_t *) 0x5059c101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_0_kernel_23, 1254);
  *((volatile uint8_t *) 0x505a0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_0_kernel_24, 1254);
  *((volatile uint8_t *) 0x505a4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_0_kernel_25, 1254);
  *((volatile uint8_t *) 0x505a8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_0_kernel_26, 1254);
  *((volatile uint8_t *) 0x505ac101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_0_kernel_27, 1254);
  *((volatile uint8_t *) 0x505b0101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_0_kernel_28, 1254);
  *((volatile uint8_t *) 0x505b4101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_0_kernel_29, 1254);
  *((volatile uint8_t *) 0x505b8101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_0_kernel_30, 1254);
  *((volatile uint8_t *) 0x505bc101) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_0_kernel_31, 1254);
  *((volatile uint8_t *) 0x50980001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_0_kernel_32, 1398);
  *((volatile uint8_t *) 0x50984001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_0_kernel_33, 1398);
  *((volatile uint8_t *) 0x50988001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_0_kernel_34, 1398);
  *((volatile uint8_t *) 0x5098c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_0_kernel_35, 1398);
  *((volatile uint8_t *) 0x50990001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_0_kernel_36, 1398);
  *((volatile uint8_t *) 0x50994001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_0_kernel_37, 1398);
  *((volatile uint8_t *) 0x50998001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_0_kernel_38, 1398);
  *((volatile uint8_t *) 0x5099c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_0_kernel_39, 1398);
  *((volatile uint8_t *) 0x509a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_0_kernel_40, 1398);
  *((volatile uint8_t *) 0x509a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_0_kernel_41, 1398);
  *((volatile uint8_t *) 0x509a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_0_kernel_42, 1398);
  *((volatile uint8_t *) 0x509ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_0_kernel_43, 1398);
  *((volatile uint8_t *) 0x509b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_0_kernel_44, 1398);
  *((volatile uint8_t *) 0x509b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_0_kernel_45, 1398);
  *((volatile uint8_t *) 0x509b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_0_kernel_46, 1398);
  *((volatile uint8_t *) 0x509bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_0_kernel_47, 1398);
  *((volatile uint8_t *) 0x50d80001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_0_kernel_48, 1398);
  *((volatile uint8_t *) 0x50d84001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_0_kernel_49, 1398);
  *((volatile uint8_t *) 0x50d88001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_0_kernel_50, 1398);
  *((volatile uint8_t *) 0x50d8c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_0_kernel_51, 1398);
  *((volatile uint8_t *) 0x50d90001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_0_kernel_52, 1398);
  *((volatile uint8_t *) 0x50d94001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_0_kernel_53, 1398);
  *((volatile uint8_t *) 0x50d98001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_0_kernel_54, 1398);
  *((volatile uint8_t *) 0x50d9c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_0_kernel_55, 1398);
  *((volatile uint8_t *) 0x50da0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_0_kernel_56, 1398);
  *((volatile uint8_t *) 0x50da4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_0_kernel_57, 1398);
  *((volatile uint8_t *) 0x50da8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_0_kernel_58, 1398);
  *((volatile uint8_t *) 0x50dac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_0_kernel_59, 1398);
  *((volatile uint8_t *) 0x50db0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_0_kernel_60, 1398);
  *((volatile uint8_t *) 0x50db4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_0_kernel_61, 1398);
  *((volatile uint8_t *) 0x50db8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_0_kernel_62, 1398);
  *((volatile uint8_t *) 0x50dbc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_0_kernel_63, 1398);

  return CNN_OK;
}
int cnn_init_0(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50100008) = 0x0000000a; // Layer count
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500008) = 0x0000000a; // Layer count
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900008) = 0x0000000a; // Layer count
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00008) = 0x0000000a; // Layer count

  return CNN_OK;
}
