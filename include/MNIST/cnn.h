/**************************************************************************************************
* Copyright (C) Maxim Integrated Products, Inc. All Rights Reserved.
*
* Maxim Integrated Products, Inc. Default Copyright Notice:
* https://www.maximintegrated.com/en/aboutus/legal/copyrights.html
**************************************************************************************************/

/*
 * This header file was automatically generated for the mnist-extrasmall-L1 network from a template.
 * Please do not edit; instead, edit the template and regenerate.
 */

#ifndef __CNN_H__
#define __CNN_H__

#include <stdint.h>
#include <mxc.h>
typedef int32_t q31_t;
typedef int16_t q15_t;

/* Return codes */
#define CNN_FAIL 0
#define CNN_OK 1

/*
  SUMMARY OF OPS
  Hardware: 167,168 ops (156,672 macc; 10,496 comp; 0 add; 0 mul; 0 bitwise)
    Layer 0: 155,776 ops (147,456 macc; 8,320 comp; 0 add; 0 mul; 0 bitwise)
    Layer 1: 11,392 ops (9,216 macc; 2,176 comp; 0 add; 0 mul; 0 bitwise)

  RESOURCE USAGE
  Weight memory: 1,152 bytes out of 442,368 bytes total (0%)
  Bias memory:   0 bytes out of 2,048 bytes total (0%)
*/

/* Number of outputs for this network */
#define CNN_NUM_OUTPUTS_0 6272
#define CNN_NUM_OUTPUTS_1 2048
#define CNN_NUM_OUTPUTS_2 128
#define CNN_NUM_OUTPUTS_3 10

/* Use this timer to time the inference */
#define CNN_INFERENCE_TIMER MXC_TMR0

/* Port pin actions used to signal that processing is active */
#define CNN_START LED_On(1)
#define CNN_COMPLETE LED_Off(1)
#define SYS_START LED_On(0)
#define SYS_COMPLETE LED_Off(0)

/* Run software SoftMax on unloaded data */
void softmax_q17p14_q15(const q31_t * vec_in, const uint16_t dim_vec, q15_t * p_out);
/* Shift the input, then calculate SoftMax */
void softmax_shift_q17p14_q15(q31_t * vec_in, const uint16_t dim_vec, uint8_t in_shift, q15_t * p_out);

/* Stopwatch - holds the runtime when accelerator finishes */
extern volatile uint32_t cnn_time;

/* Custom memcopy routines used for weights and data */
void memcpy32(uint32_t *dst, const uint32_t *src, int n);
void memcpy32_const(uint32_t *dst, int n);

/* Enable clocks and power to accelerator, enable interrupt */
int cnn_enable(uint32_t clock_source, uint32_t clock_divider);

/* Disable clocks and power to accelerator */
int cnn_disable(void);

/* Perform minimum accelerator initialization so it can be configured */
int cnn_init(void);

/* Configure accelerator for the given network */
int cnn_configure_0(void);
int cnn_configure_1(void);
int cnn_configure_2(void);
int cnn_configure_3(void);

/* Load accelerator weights */
int cnn_load_weights_0(void);
int cnn_load_weights_1(void);
int cnn_load_weights_2(void);
int cnn_load_weights_3(void);

/* Verify accelerator weights (debug only) */
int cnn_verify_weights(void);

/* Load accelerator bias values (if needed) */
int cnn_load_bias_0(void);
int cnn_load_bias_1(void);
int cnn_load_bias_2(void);
int cnn_load_bias_3(void);

/* Start accelerator processing */
int cnn_start(void);

/* Force stop accelerator */
int cnn_stop(void);

/* Continue accelerator after stop */
int cnn_continue(void);

/* Unload results from accelerator */
int cnn_unload_0(uint32_t *out_buf);
int cnn_unload_1(uint32_t *out_buf);
int cnn_unload_2(uint32_t *out_buf);
int cnn_unload_3(uint32_t *out_buf);

/* Turn on the boost circuit */
int cnn_boost_enable(mxc_gpio_regs_t *port, uint32_t pin);

/* Turn off the boost circuit */
int cnn_boost_disable(mxc_gpio_regs_t *port, uint32_t pin);

#endif // __CNN_H__
