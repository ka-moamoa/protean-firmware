#include "cnn_helper.h"
#include "cnn.h"

void load_input_0(const uint32_t *layer_0_input)
{
  // This function loads the sample data input -- replace with actual data
  memcpy32((uint32_t *) 0x50400000, layer_0_input, 196);
}

void load_input_1(uint32_t *layer_1_input_4, uint32_t *layer_1_input_8)
{
  memcpy32((uint32_t *) 0x5040a000, layer_1_input_4, 784);
  memcpy32((uint32_t *) 0x50412000, layer_1_input_8, 784);
}

void load_input_2(uint32_t *layer_2_input_4, uint32_t *layer_2_input_8)
{
  memcpy32((uint32_t *) 0x50408000, layer_2_input_4, 256);
  memcpy32((uint32_t *) 0x50410000, layer_2_input_8, 256);
}

void load_input_3(uint32_t *layer_3_input_4, uint32_t *layer_3_input_8)
{
  memcpy32((uint32_t *) 0x5040a000, layer_3_input_4, 16);
  memcpy32((uint32_t *) 0x50412000, layer_3_input_8, 16);
}

void copy_output_0(uint32_t *layer_0_output1, uint32_t *layer_0_output2)
{
  int i;
  uint32_t mask, len;
  uint32_t *addr;

  addr = (uint32_t *) 0x5040a000;
  mask = 0xffffffff;
  len = 784;
  for (i = 0; i < len; i++) {
    layer_0_output1[i] = (*addr++ & mask);
  }
  
  addr = (uint32_t *) 0x50412000;
  mask = 0xffffffff;
  len = 784;
  for (i = 0; i < len; i++) {
    layer_0_output2[i] = (*addr++ & mask);
  }
}

void copy_output_1(uint32_t *layer_1_output1, uint32_t *layer_1_output2)
{
  int i;
  uint32_t mask, len;
  uint32_t *addr;

  addr = (uint32_t *) 0x50408000;
  mask = 0xffffffff;
  len = 256;
  for (i = 0; i < len; i++) {
    layer_1_output1[i] = (*addr++ & mask);
  }

  addr = (uint32_t *) 0x50410000;
  mask = 0xffffffff;
  len = 256;
  for (i = 0; i < len; i++) {
    layer_1_output2[i] = (*addr++ & mask);
  }
}

void copy_output_2(uint32_t *layer_2_output1, uint32_t *layer_2_output2)
{
  int i;
  uint32_t mask, len;
  uint32_t *addr;

  addr = (uint32_t *) 0x5040a000;
  mask = 0xffffffff;
  len = 16;
  for (i = 0; i < len; i++) {
    layer_2_output1[i] = (*addr++ & mask);
  }

  addr = (uint32_t *) 0x50412000;
  mask = 0xffffffff;
  len = 16;
  for (i = 0; i < len; i++) {
    layer_2_output2[i] = (*addr++ & mask);
  }
}

// Expected output of layer 0 for mnist-extrasmall-L3 given the sample input (known-answer test)
// Delete this function for production code
int check_output(void)
{
  int i;
  uint32_t mask, len;
  volatile uint32_t *addr;
  const uint32_t sample_output[] = SAMPLE_OUTPUT;
  const uint32_t *ptr = sample_output;

  while ((addr = (volatile uint32_t *) *ptr++) != 0) {
    mask = *ptr++;
    len = *ptr++;
    for (i = 0; i < len; i++)
      if ((*addr++ & mask) != *ptr++) return CNN_FAIL;
  }

  return CNN_OK;
}