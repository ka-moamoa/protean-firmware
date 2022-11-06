/*******************************************************************************
* Copyright (C) Maxim Integrated Products, Inc., All rights Reserved.
*
* This software is protected by copyright laws of the United States and
* of foreign countries. This material may also be protected by patent laws
* and technology transfer regulations of the United States and of foreign
* countries. This software is furnished under a license agreement and/or a
* nondisclosure agreement and may only be used or reproduced in accordance
* with the terms of those agreements. Dissemination of this information to
* any party or parties not specified in the license agreement and/or
* nondisclosure agreement is expressly prohibited.
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL MAXIM INTEGRATED BE LIABLE FOR ANY CLAIM, DAMAGES
* OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
* OTHER DEALINGS IN THE SOFTWARE.
*
* Except as contained in this notice, the name of Maxim Integrated
* Products, Inc. shall not be used except as stated in the Maxim Integrated
* Products, Inc. Branding Policy.
*
* The mere transfer of this software does not imply any licenses
* of trade secrets, proprietary technology, copyrights, patents,
* trademarks, maskwork rights, or any other form of intellectual
* property whatsoever. Maxim Integrated Products, Inc. retains all
* ownership rights.
*******************************************************************************/

// mnist-extrasmall-L1
// Created using ./ai8xize.py --test-dir sdk/Examples/MAX78000/CNN --prefix mnist-extrasmall-L1 --checkpoint-file trained/ai85-mnist-extrasmall-qat8-q.pth.tar --config-file networks/mnist-chw-extrasmall-ai85.yaml --softmax --device MAX78000 --compact-data --mexpress --timer 0 --display-checkpoint --verbose --sample-numpy-filename L1 --stop-after 1 --skip-checkpoint-layers 1 --skip-yaml-layers 1 --sample-input sdk/Examples/MAX78000/CNN/mnist-extrasmall-L0/L0.npy --input-offset 0x2000

// DO NOT EDIT - regenerate this file instead!

// Configuring 2 layers:
// Layer 0: 8x28x28 (HWC data), 2x2 max pool with stride 2/2, conv2d with kernel size 3x3, stride 1/1, pad 2/2, ReLU, 8x16x16 output
// Layer 1: 8x16x16 (HWC data), 4x4 max pool with stride 4/4, conv2d with kernel size 3x3, stride 1/1, pad 1/1, ReLU, 8x4x4 output

#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include "mxc.h"
#include "gcfr_regs.h"
#include "cnn.h"
#include "weights.h"

void CNN_ISR(void)
{
  // Acknowledge interrupt to all groups
  *((volatile uint32_t *) 0x50100000) &= ~((1<<12) | 1);

  // CNN_COMPLETE; // Signal that processing is complete
#ifdef CNN_INFERENCE_TIMER
  cnn_time = MXC_TMR_SW_Stop(CNN_INFERENCE_TIMER);
#else
  cnn_time = 1;
#endif
}

int cnn_continue(void)
{
  cnn_time = 0;

  *((volatile uint32_t *) 0x50100000) |= 1; // Re-enable group 0

  return CNN_OK;
}

int cnn_stop(void)
{
  *((volatile uint32_t *) 0x50100000) &= ~1; // Disable group 0

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


// Kernels:
static const uint32_t layer_0_kernel_0[] = LAYER_0_KERNEL_0;

static const uint32_t layer_1_kernel_4[] = LAYER_1_KERNEL_4;
static const uint32_t layer_1_kernel_5[] = LAYER_1_KERNEL_5;
static const uint32_t layer_1_kernel_6[] = LAYER_1_KERNEL_6;
static const uint32_t layer_1_kernel_7[] = LAYER_1_KERNEL_7;
static const uint32_t layer_1_kernel_8[] = LAYER_1_KERNEL_8;
static const uint32_t layer_1_kernel_9[] = LAYER_1_KERNEL_9;
static const uint32_t layer_1_kernel_10[] = LAYER_1_KERNEL_10;
static const uint32_t layer_1_kernel_11[] = LAYER_1_KERNEL_11;

static const uint32_t layer_2_kernel_4[] = LAYER_2_KERNEL_4;
static const uint32_t layer_2_kernel_5[] = LAYER_2_KERNEL_5;
static const uint32_t layer_2_kernel_6[] = LAYER_2_KERNEL_6;
static const uint32_t layer_2_kernel_7[] = LAYER_2_KERNEL_7;
static const uint32_t layer_2_kernel_8[] = LAYER_2_KERNEL_8;
static const uint32_t layer_2_kernel_9[] = LAYER_2_KERNEL_9;
static const uint32_t layer_2_kernel_10[] = LAYER_2_KERNEL_10;
static const uint32_t layer_2_kernel_11[] = LAYER_2_KERNEL_11;

static const uint32_t layer_3_kernel_4[] = LAYER_3_KERNEL_4;
static const uint32_t layer_3_kernel_5[] = LAYER_3_KERNEL_5;
static const uint32_t layer_3_kernel_6[] = LAYER_3_KERNEL_6;
static const uint32_t layer_3_kernel_7[] = LAYER_3_KERNEL_7;
static const uint32_t layer_3_kernel_8[] = LAYER_3_KERNEL_8;
static const uint32_t layer_3_kernel_9[] = LAYER_3_KERNEL_9;
static const uint32_t layer_3_kernel_10[] = LAYER_3_KERNEL_10;
static const uint32_t layer_3_kernel_11[] = LAYER_3_KERNEL_11;

static const uint8_t layer_3_bias_0[] = LAYER_3_BIAS_0;

int cnn_load_weights_0(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_0_kernel_0, 18);

  return CNN_OK;
}

int cnn_load_weights_1(void)
{
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_1_kernel_4, 18);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_1_kernel_5, 18);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_1_kernel_6, 18);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_1_kernel_7, 18);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_1_kernel_8, 18);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_1_kernel_9, 18);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_1_kernel_10, 18);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_1_kernel_11, 18);

  return CNN_OK;
}

int cnn_load_weights_2(void)
{
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_2_kernel_4, 18);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_2_kernel_5, 18);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_2_kernel_6, 18);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_2_kernel_7, 18);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_2_kernel_8, 18);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_2_kernel_9, 18);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_2_kernel_10, 18);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_2_kernel_11, 18);

  return CNN_OK;
}

int cnn_load_weights_3(void)
{
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_3_kernel_4, 41);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_3_kernel_5, 41);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_3_kernel_6, 41);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_3_kernel_7, 41);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_3_kernel_8, 41);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_3_kernel_9, 41);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_3_kernel_10, 41);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_3_kernel_11, 41);

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

int cnn_load_bias_3(void)
{
  memcpy_8to32((uint32_t *) 0x50108000, layer_3_bias_0, sizeof(uint8_t) * 10);
  return CNN_OK;
}

int cnn_init(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control

  return CNN_OK;
}

int cnn_configure_0(void)
{
  // Layer 0 group 0
  *((volatile uint32_t *) 0x50100010) = 0x0001001d; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x0001001d; // Columns
  *((volatile uint32_t *) 0x50100310) = 0x00002800; // SRAM write ptr
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100590) = 0x00000b60; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x00003800; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x00000038; // Mask offset and count
  *((volatile uint32_t *) 0x50100690) = 0x0000001b; // TRAM ptr max
  *((volatile uint32_t *) 0x50100790) = 0x00002000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0x00010001; // Mask and processor enables


  return CNN_OK;
}

int cnn_configure_1(void)
{
  // Layer 0 group 0
  *((volatile uint32_t *) 0x50100010) = 0x0002001f; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x0002001f; // Columns
  *((volatile uint32_t *) 0x50100190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50100210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50100290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100310) = 0x00002000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100510) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50100590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x00003800; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x00000038; // Mask offset and count
  *((volatile uint32_t *) 0x50100690) = 0x0000000f; // TRAM ptr max
  *((volatile uint32_t *) 0x50100710) = 0x0ff00ff0; // Mask and processor enables

  return CNN_OK;
}

int cnn_configure_2(void)
{
  // Layer 0 group 0
  *((volatile uint32_t *) 0x50100010) = 0x00010011; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x00010011; // Columns
  *((volatile uint32_t *) 0x50100190) = 0x00000003; // Pooling rows
  *((volatile uint32_t *) 0x50100210) = 0x00000003; // Pooling columns
  *((volatile uint32_t *) 0x50100290) = 0x00000003; // Stride
  *((volatile uint32_t *) 0x50100310) = 0x00002800; // SRAM write ptr
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x00003800; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x00000038; // Mask offset and count
  *((volatile uint32_t *) 0x50100690) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50100790) = 0x00002000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0x0ff00ff0; // Mask and processor enables


  return CNN_OK;
}

int cnn_configure_3(void)
{
  // Layer 0 group 0
  *((volatile uint32_t *) 0x50100390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100510) = 0x00000800; // SRAM read ptr
  *((volatile uint32_t *) 0x50100590) = 0x00010920; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0000480f; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000004f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50100790) = 0x00001000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0x0ff00ff0; // Mask and processor enables


  return CNN_OK;
}

int cnn_start(void)
{
  cnn_time = 0;

  *((volatile uint32_t *) 0x50100000) = 0x00100808; // Enable group 0

#ifdef CNN_INFERENCE_TIMER
  MXC_TMR_SW_Start(CNN_INFERENCE_TIMER);
#endif

  // CNN_START; // Allow capture of processing time
  *((volatile uint32_t *) 0x50100000) = 0x00100009; // Master enable group 0

  return CNN_OK;
}

// Custom unload for this network: 8-bit data, shape: [8, 28, 28]
int cnn_unload_0(uint32_t *out_buf32)
{
  // No need to unload this network
  return CNN_OK;
}

// Custom unload for this network: 8-bit data, shape: [8, 4, 4]
int cnn_unload_1(uint32_t *out_buf32)
{
  // No need to unload this network
  return CNN_OK;
}

// Custom unload for this network: 8-bit data, shape: [8, 4, 4]
int cnn_unload_2(uint32_t *out_buf32)
{
  // No need to unload this network
  return CNN_OK;
}

// Custom unload for this network: 32-bit data, shape: [10, 1, 1]
int cnn_unload_3(uint32_t *out_buf)
{
  volatile uint32_t *addr;

  addr = (volatile uint32_t *) 0x50400000;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  addr = (volatile uint32_t *) 0x50408000;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  addr = (volatile uint32_t *) 0x50410000;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;

  return CNN_OK;
}

int cnn_enable(uint32_t clock_source, uint32_t clock_divider)
{
  // Reset all domains, restore power to CNN
  MXC_GCFR->reg3 = 0xf; // Reset
  MXC_GCFR->reg1 = 0x1; // Mask memory
  MXC_GCFR->reg0 = 0x1; // Power
  MXC_GCFR->reg2 = 0xe; // Iso
  MXC_GCFR->reg3 = 0x0; // Reset

  MXC_GCR->pclkdiv = (MXC_GCR->pclkdiv & ~(MXC_F_GCR_PCLKDIV_CNNCLKDIV | MXC_F_GCR_PCLKDIV_CNNCLKSEL))
                     | clock_divider | clock_source;
  MXC_SYS_ClockEnable(MXC_SYS_PERIPH_CLOCK_CNN); // Enable CNN clock

  NVIC_SetVector(CNN_IRQn, CNN_ISR); // Set CNN complete vector

  return CNN_OK;
}

int cnn_boost_enable(mxc_gpio_regs_t *port, uint32_t pin)
{
  mxc_gpio_cfg_t gpio_out;
  gpio_out.port = port;
  gpio_out.mask = pin;
  gpio_out.pad = MXC_GPIO_PAD_NONE;
  gpio_out.func = MXC_GPIO_FUNC_OUT;
  MXC_GPIO_Config(&gpio_out);
  MXC_GPIO_OutSet(gpio_out.port, gpio_out.mask);

  return CNN_OK;
}

int cnn_boost_disable(mxc_gpio_regs_t *port, uint32_t pin)
{
  mxc_gpio_cfg_t gpio_out;
  gpio_out.port = port;
  gpio_out.mask = pin;
  gpio_out.pad = MXC_GPIO_PAD_NONE;
  gpio_out.func = MXC_GPIO_FUNC_OUT;
  MXC_GPIO_Config(&gpio_out);
  MXC_GPIO_OutSet(gpio_out.port, gpio_out.mask);

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

