#ifndef __CNN_HELPER_H__
#define __CNN_HELPER_H__


#include <stdint.h>
#include "sampledata.h"
#include "sampleoutput.h"

/* Load input to layers */
void load_input_0(const uint32_t *layer_0_input);
void load_input_1(uint32_t *layer_1_input_4, uint32_t *layer_1_input_8);
void load_input_2(uint32_t *layer_2_input_4, uint32_t *layer_2_input_8);
void load_input_3(uint32_t *layer_3_input_4, uint32_t *layer_3_input_8);

/* Copy output of layers */
void copy_output_0(uint32_t *layer_0_output1, uint32_t *layer_0_output2);
void copy_output_1(uint32_t *layer_1_output1, uint32_t *layer_1_output2);
void copy_output_2(uint32_t *layer_2_output1, uint32_t *layer_2_output2);

// Check expected output of mnist-extrasmall for a given sample input (known-answer test)
int check_output(void);

#endif // __CNN_HELPER_H__