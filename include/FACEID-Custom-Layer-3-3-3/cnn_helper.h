#ifndef __CNN_HELPER_H__
#define __CNN_HELPER_H__
#include <stdint.h>
#include "sampledata.h"
#include "sampleoutput.h"

void load_input_0( const uint32_t *layer_0_input_0);
void load_input_1 ( uint32_t * layer_1_input_0,uint32_t * layer_1_input_4,uint32_t * layer_1_input_8,uint32_t * layer_1_input_12,uint32_t * layer_1_input_16,uint32_t * layer_1_input_20,uint32_t * layer_1_input_24,uint32_t * layer_1_input_28 );
void load_input_2 ( uint32_t * layer_2_input_0,uint32_t * layer_2_input_4,uint32_t * layer_2_input_8,uint32_t * layer_2_input_12,uint32_t * layer_2_input_16,uint32_t * layer_2_input_20,uint32_t * layer_2_input_24,uint32_t * layer_2_input_28,uint32_t * layer_2_input_32,uint32_t * layer_2_input_36,uint32_t * layer_2_input_40,uint32_t * layer_2_input_44,uint32_t * layer_2_input_48,uint32_t * layer_2_input_52,uint32_t * layer_2_input_56,uint32_t * layer_2_input_60 );


void copy_output_0 ( uint32_t * layer_0_output_0,uint32_t * layer_0_output_4,uint32_t * layer_0_output_8,uint32_t * layer_0_output_12,uint32_t * layer_0_output_16,uint32_t * layer_0_output_20,uint32_t * layer_0_output_24,uint32_t * layer_0_output_28 );
void copy_output_1 ( uint32_t * layer_1_output_0,uint32_t * layer_1_output_4,uint32_t * layer_1_output_8,uint32_t * layer_1_output_12,uint32_t * layer_1_output_16,uint32_t * layer_1_output_20,uint32_t * layer_1_output_24,uint32_t * layer_1_output_28,uint32_t * layer_1_output_32,uint32_t * layer_1_output_36,uint32_t * layer_1_output_40,uint32_t * layer_1_output_44,uint32_t * layer_1_output_48,uint32_t * layer_1_output_52,uint32_t * layer_1_output_56,uint32_t * layer_1_output_60 );


int check_output(void);
#endif // __CNN_HELPER_H__