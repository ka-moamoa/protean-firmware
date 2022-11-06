#include "cnn_helper.h"
#include "mxc.h"
#include "cnn.h"
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
      if ((*addr++ & mask) != *ptr++) {
        printf("Data mismatch (%d/%d) at address 0x%08x: Expected 0x%08x, read 0x%08x.\n",
               i + 1, len, addr - 1, *(ptr - 1), *(addr - 1) & mask);
        return CNN_FAIL;
      }
  }

  return CNN_OK;
}
void load_input_0( const uint32_t *layer_0_input_0, const uint32_t *layer_0_input_4, const uint32_t *layer_0_input_8, const uint32_t *layer_0_input_12, const uint32_t *layer_0_input_16, const uint32_t *layer_0_input_20, const uint32_t *layer_0_input_24, const uint32_t *layer_0_input_28, const uint32_t *layer_0_input_32, const uint32_t *layer_0_input_36, const uint32_t *layer_0_input_40, const uint32_t *layer_0_input_44, const uint32_t *layer_0_input_48, const uint32_t *layer_0_input_52, const uint32_t *layer_0_input_56, const uint32_t *layer_0_input_60)
{
  // This function loads the sample data input -- replace with actual data

  memcpy32((uint32_t *) 0x50400000, layer_0_input_0, 256);
  memcpy32((uint32_t *) 0x50408000, layer_0_input_4, 256);
  memcpy32((uint32_t *) 0x50410000, layer_0_input_8, 256);
  memcpy32((uint32_t *) 0x50418000, layer_0_input_12, 256);
  memcpy32((uint32_t *) 0x50800000, layer_0_input_16, 256);
  memcpy32((uint32_t *) 0x50808000, layer_0_input_20, 256);
  memcpy32((uint32_t *) 0x50810000, layer_0_input_24, 256);
  memcpy32((uint32_t *) 0x50818000, layer_0_input_28, 256);
  memcpy32((uint32_t *) 0x50c00000, layer_0_input_32, 256);
  memcpy32((uint32_t *) 0x50c08000, layer_0_input_36, 256);
  memcpy32((uint32_t *) 0x50c10000, layer_0_input_40, 256);
  memcpy32((uint32_t *) 0x50c18000, layer_0_input_44, 256);
  memcpy32((uint32_t *) 0x51000000, layer_0_input_48, 256);
  memcpy32((uint32_t *) 0x51008000, layer_0_input_52, 256);
  memcpy32((uint32_t *) 0x51010000, layer_0_input_56, 256);
  memcpy32((uint32_t *) 0x51018000, layer_0_input_60, 256);
}
