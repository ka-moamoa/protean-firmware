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

int cnn_unload(uint32_t *out_buf)
{
  volatile uint32_t *addr;

  // Custom unload for this network, layer 8: 32-bit data, shape: (21, 1, 1)
  addr = (volatile uint32_t *) 0x50402000;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  addr = (volatile uint32_t *) 0x5040a000;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  addr = (volatile uint32_t *) 0x50412000;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  addr = (volatile uint32_t *) 0x5041a000;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  addr = (volatile uint32_t *) 0x50802000;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  addr = (volatile uint32_t *) 0x5080a000;
  *out_buf++ = *addr++;

  return CNN_OK;
}
int cnn_configure_0(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x0000007f; // Rows
  *((volatile uint32_t *) 0x50100310) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50100590) = 0x0000eb20; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x00019811; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x00000678; // Mask offset and count
  *((volatile uint32_t *) 0x50100110) = 0x00001100; // 1D
  *((volatile uint32_t *) 0x50100790) = 0x00024000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x0000007f; // Rows
  *((volatile uint32_t *) 0x50500310) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50500590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x00019811; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x00000678; // Mask offset and count
  *((volatile uint32_t *) 0x50500110) = 0x00001100; // 1D
  *((volatile uint32_t *) 0x50500790) = 0x00024000; // Post processing register
  *((volatile uint32_t *) 0x50500710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x0000007f; // Rows
  *((volatile uint32_t *) 0x50900310) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50900590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x00019811; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x00000678; // Mask offset and count
  *((volatile uint32_t *) 0x50900110) = 0x00001100; // 1D
  *((volatile uint32_t *) 0x50900790) = 0x00024000; // Post processing register
  *((volatile uint32_t *) 0x50900710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x0000007f; // Rows
  *((volatile uint32_t *) 0x50d00310) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d00590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x00019811; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x00000678; // Mask offset and count
  *((volatile uint32_t *) 0x50d00110) = 0x00001100; // 1D
  *((volatile uint32_t *) 0x50d00790) = 0x00024000; // Post processing register
  *((volatile uint32_t *) 0x50d00710) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 0
  *((volatile uint32_t *) 0x50100014) = 0x0000007f; // Rows
  *((volatile uint32_t *) 0x50100414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50100514) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50100594) = 0x0000eb20; // Layer control
  *((volatile uint32_t *) 0x50100a14) = 0x00017811; // Layer control 2
  *((volatile uint32_t *) 0x50100614) = 0x02400838; // Mask offset and count
  *((volatile uint32_t *) 0x50100114) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x50100794) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50100714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 1
  *((volatile uint32_t *) 0x50500014) = 0x0000007f; // Rows
  *((volatile uint32_t *) 0x50500414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50500514) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50500594) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a14) = 0x00017811; // Layer control 2
  *((volatile uint32_t *) 0x50500614) = 0x02400838; // Mask offset and count
  *((volatile uint32_t *) 0x50500114) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x50500794) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50500714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 2
  *((volatile uint32_t *) 0x50900014) = 0x0000007f; // Rows
  *((volatile uint32_t *) 0x50900414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50900514) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50900594) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a14) = 0x00017811; // Layer control 2
  *((volatile uint32_t *) 0x50900614) = 0x02400838; // Mask offset and count
  *((volatile uint32_t *) 0x50900114) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x50900794) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50900714) = 0xffffffff; // Mask and processor enables

  // Layer 1 quadrant 3
  *((volatile uint32_t *) 0x50d00014) = 0x0000007f; // Rows
  *((volatile uint32_t *) 0x50d00414) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00494) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d00514) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50d00594) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a14) = 0x00017811; // Layer control 2
  *((volatile uint32_t *) 0x50d00614) = 0x02400838; // Mask offset and count
  *((volatile uint32_t *) 0x50d00114) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x50d00794) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50d00714) = 0x000f000f; // Mask and processor enables

  // Layer 2 quadrant 0
  *((volatile uint32_t *) 0x50100018) = 0x0001007f; // Rows
  *((volatile uint32_t *) 0x50100198) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50100298) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100318) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50100418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100598) = 0x00006ba0; // Layer control
  *((volatile uint32_t *) 0x50100a18) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x50100618) = 0x08400c38; // Mask offset and count
  *((volatile uint32_t *) 0x50100118) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x50100718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 1
  *((volatile uint32_t *) 0x50500018) = 0x0001007f; // Rows
  *((volatile uint32_t *) 0x50500198) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50500298) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50500318) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50500418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500598) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a18) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x50500618) = 0x08400c38; // Mask offset and count
  *((volatile uint32_t *) 0x50500118) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x50500718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 2
  *((volatile uint32_t *) 0x50900018) = 0x0001007f; // Rows
  *((volatile uint32_t *) 0x50900198) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50900298) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50900318) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50900418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900598) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a18) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x50900618) = 0x08400c38; // Mask offset and count
  *((volatile uint32_t *) 0x50900118) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x50900718) = 0xffffffff; // Mask and processor enables

  // Layer 2 quadrant 3
  *((volatile uint32_t *) 0x50d00018) = 0x0001007f; // Rows
  *((volatile uint32_t *) 0x50d00198) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d00298) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d00318) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00418) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00598) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a18) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x50d00618) = 0x08400c38; // Mask offset and count
  *((volatile uint32_t *) 0x50d00118) = 0x00001300; // 1D

  // Layer 3 quadrant 0
  *((volatile uint32_t *) 0x5010001c) = 0x0000003e; // Rows
  *((volatile uint32_t *) 0x5010041c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x5010051c) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x5010059c) = 0x0000eb20; // Layer control
  *((volatile uint32_t *) 0x50100a1c) = 0x00017800; // Layer control 2
  *((volatile uint32_t *) 0x5010061c) = 0x0c600dd8; // Mask offset and count
  *((volatile uint32_t *) 0x5010011c) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x5010079c) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x5010071c) = 0xffffffff; // Mask and processor enables

  // Layer 3 quadrant 1
  *((volatile uint32_t *) 0x5050001c) = 0x0000003e; // Rows
  *((volatile uint32_t *) 0x5050041c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x5050051c) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x5050059c) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a1c) = 0x00017800; // Layer control 2
  *((volatile uint32_t *) 0x5050061c) = 0x0c600dd8; // Mask offset and count
  *((volatile uint32_t *) 0x5050011c) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x5050079c) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x5050071c) = 0xffffffff; // Mask and processor enables

  // Layer 3 quadrant 2
  *((volatile uint32_t *) 0x5090001c) = 0x0000003e; // Rows
  *((volatile uint32_t *) 0x5090041c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x5090051c) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x5090059c) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a1c) = 0x00017800; // Layer control 2
  *((volatile uint32_t *) 0x5090061c) = 0x0c600dd8; // Mask offset and count
  *((volatile uint32_t *) 0x5090011c) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x5090079c) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x5090071c) = 0xffffffff; // Mask and processor enables

  // Layer 3 quadrant 3
  *((volatile uint32_t *) 0x50d0001c) = 0x0000003e; // Rows
  *((volatile uint32_t *) 0x50d0041c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d0051c) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50d0059c) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a1c) = 0x00017800; // Layer control 2
  *((volatile uint32_t *) 0x50d0061c) = 0x0c600dd8; // Mask offset and count
  *((volatile uint32_t *) 0x50d0011c) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x50d0079c) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50d0071c) = 0xffffffff; // Mask and processor enables

  // Layer 4 quadrant 0
  *((volatile uint32_t *) 0x50100020) = 0x0001003e; // Rows
  *((volatile uint32_t *) 0x501001a0) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x501002a0) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100320) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50100420) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x501005a0) = 0x00006ba0; // Layer control
  *((volatile uint32_t *) 0x50100a20) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50100620) = 0x0de00fd8; // Mask offset and count
  *((volatile uint32_t *) 0x50100120) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x501007a0) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50100720) = 0xffffffff; // Mask and processor enables

  // Layer 4 quadrant 1
  *((volatile uint32_t *) 0x50500020) = 0x0001003e; // Rows
  *((volatile uint32_t *) 0x505001a0) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x505002a0) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50500320) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50500420) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x505005a0) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a20) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50500620) = 0x0de00fd8; // Mask offset and count
  *((volatile uint32_t *) 0x50500120) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x505007a0) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50500720) = 0xffffffff; // Mask and processor enables

  // Layer 4 quadrant 2
  *((volatile uint32_t *) 0x50900020) = 0x0001003e; // Rows
  *((volatile uint32_t *) 0x509001a0) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x509002a0) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50900320) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50900420) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x509005a0) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a20) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50900620) = 0x0de00fd8; // Mask offset and count
  *((volatile uint32_t *) 0x50900120) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x509007a0) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50900720) = 0xffffffff; // Mask and processor enables

  // Layer 4 quadrant 3
  *((volatile uint32_t *) 0x50d00020) = 0x0001003e; // Rows
  *((volatile uint32_t *) 0x50d001a0) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d002a0) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d00320) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00420) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d005a0) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a20) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00620) = 0x0de00fd8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00120) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x50d007a0) = 0x00022000; // Post processing register

  // Layer 5 quadrant 0
  *((volatile uint32_t *) 0x50100024) = 0x0000001d; // Rows
  *((volatile uint32_t *) 0x50100424) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x501004a4) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50100524) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x501005a4) = 0x0000eb20; // Layer control
  *((volatile uint32_t *) 0x50100a24) = 0x00017810; // Layer control 2
  *((volatile uint32_t *) 0x50100624) = 0x10201318; // Mask offset and count
  *((volatile uint32_t *) 0x50100124) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x501007a4) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50100724) = 0xffffffff; // Mask and processor enables

  // Layer 5 quadrant 1
  *((volatile uint32_t *) 0x50500024) = 0x0000001d; // Rows
  *((volatile uint32_t *) 0x50500424) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x505004a4) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50500524) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x505005a4) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a24) = 0x00017810; // Layer control 2
  *((volatile uint32_t *) 0x50500624) = 0x10201318; // Mask offset and count
  *((volatile uint32_t *) 0x50500124) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x505007a4) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50500724) = 0xffffffff; // Mask and processor enables

  // Layer 5 quadrant 2
  *((volatile uint32_t *) 0x50900024) = 0x0000001d; // Rows
  *((volatile uint32_t *) 0x50900424) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x509004a4) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50900524) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x509005a4) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a24) = 0x00017810; // Layer control 2
  *((volatile uint32_t *) 0x50900624) = 0x10201318; // Mask offset and count
  *((volatile uint32_t *) 0x50900124) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x509007a4) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50900724) = 0xffffffff; // Mask and processor enables

  // Layer 5 quadrant 3
  *((volatile uint32_t *) 0x50d00024) = 0x0000001d; // Rows
  *((volatile uint32_t *) 0x50d00424) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d004a4) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d00524) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50d005a4) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a24) = 0x00017810; // Layer control 2
  *((volatile uint32_t *) 0x50d00624) = 0x10201318; // Mask offset and count
  *((volatile uint32_t *) 0x50d00124) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x50d007a4) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50d00724) = 0xffffffff; // Mask and processor enables

  // Layer 6 quadrant 0
  *((volatile uint32_t *) 0x50100028) = 0x0001001d; // Rows
  *((volatile uint32_t *) 0x501001a8) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x501002a8) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100328) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50100428) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x501004a8) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x501005a8) = 0x00006aa0; // Layer control
  *((volatile uint32_t *) 0x50100a28) = 0x00019811; // Layer control 2
  *((volatile uint32_t *) 0x50100628) = 0x13201998; // Mask offset and count
  *((volatile uint32_t *) 0x50100128) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x50100728) = 0xffffffff; // Mask and processor enables

  // Layer 6 quadrant 1
  *((volatile uint32_t *) 0x50500028) = 0x0001001d; // Rows
  *((volatile uint32_t *) 0x505001a8) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x505002a8) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50500328) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50500428) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x505004a8) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x505005a8) = 0x00000aa0; // Layer control
  *((volatile uint32_t *) 0x50500a28) = 0x00019811; // Layer control 2
  *((volatile uint32_t *) 0x50500628) = 0x13201998; // Mask offset and count
  *((volatile uint32_t *) 0x50500128) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x50500728) = 0xffffffff; // Mask and processor enables

  // Layer 6 quadrant 2
  *((volatile uint32_t *) 0x50900028) = 0x0001001d; // Rows
  *((volatile uint32_t *) 0x509001a8) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x509002a8) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50900328) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50900428) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x509004a8) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x509005a8) = 0x00000aa0; // Layer control
  *((volatile uint32_t *) 0x50900a28) = 0x00019811; // Layer control 2
  *((volatile uint32_t *) 0x50900628) = 0x13201998; // Mask offset and count
  *((volatile uint32_t *) 0x50900128) = 0x00001300; // 1D
  *((volatile uint32_t *) 0x50900728) = 0xffffffff; // Mask and processor enables

  // Layer 6 quadrant 3
  *((volatile uint32_t *) 0x50d00028) = 0x0001001d; // Rows
  *((volatile uint32_t *) 0x50d001a8) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d002a8) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d00328) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00428) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d004a8) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d005a8) = 0x00000aa0; // Layer control
  *((volatile uint32_t *) 0x50d00a28) = 0x00019811; // Layer control 2
  *((volatile uint32_t *) 0x50d00628) = 0x13201998; // Mask offset and count
  *((volatile uint32_t *) 0x50d00128) = 0x00001300; // 1D

  // Layer 7 quadrant 0
  *((volatile uint32_t *) 0x5010002c) = 0x0001000f; // Rows
  *((volatile uint32_t *) 0x501001ac) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x501002ac) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x5010042c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x5010052c) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x501005ac) = 0x0000eba0; // Layer control
  *((volatile uint32_t *) 0x50100a2c) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x5010062c) = 0x0cf010e8; // Mask offset and count
  *((volatile uint32_t *) 0x5010012c) = 0x00001600; // 1D
  *((volatile uint32_t *) 0x501007ac) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x5010072c) = 0xffffffff; // Mask and processor enables

  // Layer 7 quadrant 1
  *((volatile uint32_t *) 0x5050002c) = 0x0001000f; // Rows
  *((volatile uint32_t *) 0x505001ac) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x505002ac) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x5050042c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x5050052c) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x505005ac) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a2c) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x5050062c) = 0x0cf010e8; // Mask offset and count
  *((volatile uint32_t *) 0x5050012c) = 0x00001600; // 1D
  *((volatile uint32_t *) 0x505007ac) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x5050072c) = 0xffffffff; // Mask and processor enables

  // Layer 7 quadrant 2
  *((volatile uint32_t *) 0x5090002c) = 0x0001000f; // Rows
  *((volatile uint32_t *) 0x509001ac) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x509002ac) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x5090042c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x5090052c) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x509005ac) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a2c) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x5090062c) = 0x0cf010e8; // Mask offset and count
  *((volatile uint32_t *) 0x5090012c) = 0x00001600; // 1D
  *((volatile uint32_t *) 0x509007ac) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x5090072c) = 0xffffffff; // Mask and processor enables

  // Layer 7 quadrant 3
  *((volatile uint32_t *) 0x50d0002c) = 0x0001000f; // Rows
  *((volatile uint32_t *) 0x50d001ac) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d002ac) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d0042c) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d0052c) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50d005ac) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a2c) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x50d0062c) = 0x0cf010e8; // Mask offset and count
  *((volatile uint32_t *) 0x50d0012c) = 0x00001600; // 1D
  *((volatile uint32_t *) 0x50d007ac) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50d0072c) = 0x000f000f; // Mask and processor enables

  // Layer 8 quadrant 0
  *((volatile uint32_t *) 0x50100330) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x501003b0) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100430) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x501005b0) = 0x0001e920; // Layer control
  *((volatile uint32_t *) 0x50100a30) = 0x0000a003; // Layer control 2
  *((volatile uint32_t *) 0x50100630) = 0x666068f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100130) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50100730) = 0xffffffff; // Mask and processor enables

  // Layer 8 quadrant 1
  *((volatile uint32_t *) 0x50500330) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x505003b0) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500430) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x505005b0) = 0x00010920; // Layer control
  *((volatile uint32_t *) 0x50500a30) = 0x0000a003; // Layer control 2
  *((volatile uint32_t *) 0x50500630) = 0x666068f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500130) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50500730) = 0xffffffff; // Mask and processor enables

  // Layer 8 quadrant 2
  *((volatile uint32_t *) 0x50900330) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x509003b0) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900430) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x509005b0) = 0x00010920; // Layer control
  *((volatile uint32_t *) 0x50900a30) = 0x0000a003; // Layer control 2
  *((volatile uint32_t *) 0x50900630) = 0x666068f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900130) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50900730) = 0xffffffff; // Mask and processor enables

  // Layer 8 quadrant 3
  *((volatile uint32_t *) 0x50d00330) = 0x00000800; // SRAM write ptr
  *((volatile uint32_t *) 0x50d003b0) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00430) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d005b0) = 0x00010920; // Layer control
  *((volatile uint32_t *) 0x50d00a30) = 0x0000a003; // Layer control 2
  *((volatile uint32_t *) 0x50d00630) = 0x666068f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00130) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d00730) = 0xffffffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_load_bias_0(void)
{
  // Not used in this network
  return CNN_OK;
}
int cnn_load_weights_0(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_0_kernel_0, 842);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_0_kernel_1, 842);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_0_kernel_2, 842);
  *((volatile uint8_t *) 0x5018c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_0_kernel_3, 842);
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_0_kernel_4, 842);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_0_kernel_5, 842);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_0_kernel_6, 842);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_0_kernel_7, 842);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_0_kernel_8, 842);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_0_kernel_9, 842);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_0_kernel_10, 842);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_0_kernel_11, 842);
  *((volatile uint8_t *) 0x501b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_0_kernel_12, 842);
  *((volatile uint8_t *) 0x501b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_0_kernel_13, 842);
  *((volatile uint8_t *) 0x501b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_0_kernel_14, 842);
  *((volatile uint8_t *) 0x501bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_0_kernel_15, 842);
  *((volatile uint8_t *) 0x50580001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_0_kernel_16, 842);
  *((volatile uint8_t *) 0x50584001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_0_kernel_17, 842);
  *((volatile uint8_t *) 0x50588001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_0_kernel_18, 842);
  *((volatile uint8_t *) 0x5058c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_0_kernel_19, 842);
  *((volatile uint8_t *) 0x50590001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_0_kernel_20, 842);
  *((volatile uint8_t *) 0x50594001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_0_kernel_21, 842);
  *((volatile uint8_t *) 0x50598001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_0_kernel_22, 842);
  *((volatile uint8_t *) 0x5059c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_0_kernel_23, 842);
  *((volatile uint8_t *) 0x505a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_0_kernel_24, 842);
  *((volatile uint8_t *) 0x505a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_0_kernel_25, 842);
  *((volatile uint8_t *) 0x505a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_0_kernel_26, 842);
  *((volatile uint8_t *) 0x505ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_0_kernel_27, 842);
  *((volatile uint8_t *) 0x505b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_0_kernel_28, 842);
  *((volatile uint8_t *) 0x505b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_0_kernel_29, 842);
  *((volatile uint8_t *) 0x505b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_0_kernel_30, 842);
  *((volatile uint8_t *) 0x505bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_0_kernel_31, 842);
  *((volatile uint8_t *) 0x50980001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_0_kernel_32, 842);
  *((volatile uint8_t *) 0x50984001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_0_kernel_33, 842);
  *((volatile uint8_t *) 0x50988001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_0_kernel_34, 842);
  *((volatile uint8_t *) 0x5098c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_0_kernel_35, 842);
  *((volatile uint8_t *) 0x50990001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_0_kernel_36, 842);
  *((volatile uint8_t *) 0x50994001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_0_kernel_37, 842);
  *((volatile uint8_t *) 0x50998001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_0_kernel_38, 842);
  *((volatile uint8_t *) 0x5099c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_0_kernel_39, 842);
  *((volatile uint8_t *) 0x509a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_0_kernel_40, 842);
  *((volatile uint8_t *) 0x509a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_0_kernel_41, 842);
  *((volatile uint8_t *) 0x509a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_0_kernel_42, 842);
  *((volatile uint8_t *) 0x509ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_0_kernel_43, 842);
  *((volatile uint8_t *) 0x509b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_0_kernel_44, 842);
  *((volatile uint8_t *) 0x509b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_0_kernel_45, 842);
  *((volatile uint8_t *) 0x509b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_0_kernel_46, 842);
  *((volatile uint8_t *) 0x509bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_0_kernel_47, 842);
  *((volatile uint8_t *) 0x50d80001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_0_kernel_48, 842);
  *((volatile uint8_t *) 0x50d84001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_0_kernel_49, 842);
  *((volatile uint8_t *) 0x50d88001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_0_kernel_50, 842);
  *((volatile uint8_t *) 0x50d8c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_0_kernel_51, 842);
  *((volatile uint8_t *) 0x50d90001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_0_kernel_52, 842);
  *((volatile uint8_t *) 0x50d94001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_0_kernel_53, 842);
  *((volatile uint8_t *) 0x50d98001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_0_kernel_54, 842);
  *((volatile uint8_t *) 0x50d9c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_0_kernel_55, 842);
  *((volatile uint8_t *) 0x50da0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_0_kernel_56, 842);
  *((volatile uint8_t *) 0x50da4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_0_kernel_57, 842);
  *((volatile uint8_t *) 0x50da8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_0_kernel_58, 842);
  *((volatile uint8_t *) 0x50dac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_0_kernel_59, 842);
  *((volatile uint8_t *) 0x50db0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_0_kernel_60, 842);
  *((volatile uint8_t *) 0x50db4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_0_kernel_61, 842);
  *((volatile uint8_t *) 0x50db8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_0_kernel_62, 842);
  *((volatile uint8_t *) 0x50dbc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_0_kernel_63, 842);

  return CNN_OK;
}
int cnn_init_0(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50100008) = 0x00000008; // Layer count
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500008) = 0x00000008; // Layer count
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900008) = 0x00000008; // Layer count
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00008) = 0x00000008; // Layer count

  return CNN_OK;
}
