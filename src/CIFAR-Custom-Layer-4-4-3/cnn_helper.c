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
void load_input_0( const uint32_t *layer_0_input_0)
{
  // This function loads the sample data input -- replace with actual data

  memcpy32((uint32_t *) 0x50400000, layer_0_input_0, 1024);
}
void load_input_1 ( uint32_t * layer_1_input_0,uint32_t * layer_1_input_4,uint32_t * layer_1_input_8,uint32_t * layer_1_input_12,uint32_t * layer_1_input_16,uint32_t * layer_1_input_20,uint32_t * layer_1_input_24,uint32_t * layer_1_input_28 )
{ 
  memcpy32((uint32_t *) 0x50c00000, layer_1_input_0, 256);
  memcpy32((uint32_t *) 0x50c08000, layer_1_input_4, 256);
  memcpy32((uint32_t *) 0x50c10000, layer_1_input_8, 256);
  memcpy32((uint32_t *) 0x50c18000, layer_1_input_12, 256);
  memcpy32((uint32_t *) 0x51000000, layer_1_input_16, 256);
  memcpy32((uint32_t *) 0x51008000, layer_1_input_20, 256);
  memcpy32((uint32_t *) 0x51010000, layer_1_input_24, 256);
  memcpy32((uint32_t *) 0x51018000, layer_1_input_28, 256);

 }
void load_input_2 ( uint32_t * layer_2_input_0,uint32_t * layer_2_input_4,uint32_t * layer_2_input_8,uint32_t * layer_2_input_12,uint32_t * layer_2_input_16,uint32_t * layer_2_input_20,uint32_t * layer_2_input_24,uint32_t * layer_2_input_28,uint32_t * layer_2_input_32,uint32_t * layer_2_input_36,uint32_t * layer_2_input_40,uint32_t * layer_2_input_44,uint32_t * layer_2_input_48,uint32_t * layer_2_input_52,uint32_t * layer_2_input_56,uint32_t * layer_2_input_60 )
{ 
  memcpy32((uint32_t *) 0x50400000, layer_2_input_0, 16);
  memcpy32((uint32_t *) 0x50408000, layer_2_input_4, 16);
  memcpy32((uint32_t *) 0x50410000, layer_2_input_8, 16);
  memcpy32((uint32_t *) 0x50418000, layer_2_input_12, 16);
  memcpy32((uint32_t *) 0x50800000, layer_2_input_16, 16);
  memcpy32((uint32_t *) 0x50808000, layer_2_input_20, 16);
  memcpy32((uint32_t *) 0x50810000, layer_2_input_24, 16);
  memcpy32((uint32_t *) 0x50818000, layer_2_input_28, 16);
  memcpy32((uint32_t *) 0x50c00000, layer_2_input_32, 16);
  memcpy32((uint32_t *) 0x50c08000, layer_2_input_36, 16);
  memcpy32((uint32_t *) 0x50c10000, layer_2_input_40, 16);
  memcpy32((uint32_t *) 0x50c18000, layer_2_input_44, 16);
  memcpy32((uint32_t *) 0x51000000, layer_2_input_48, 16);
  memcpy32((uint32_t *) 0x51008000, layer_2_input_52, 16);
  memcpy32((uint32_t *) 0x51010000, layer_2_input_56, 16);
  memcpy32((uint32_t *) 0x51018000, layer_2_input_60, 16);

 }
void copy_output_0 ( uint32_t * layer_0_output_0,uint32_t * layer_0_output_4,uint32_t * layer_0_output_8,uint32_t * layer_0_output_12,uint32_t * layer_0_output_16,uint32_t * layer_0_output_20,uint32_t * layer_0_output_24,uint32_t * layer_0_output_28 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50c00000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c08000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c10000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c18000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51000000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51008000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51010000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51018000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_28[i] = (*addr++ & mask);
    }

}
void copy_output_1 ( uint32_t * layer_1_output_0,uint32_t * layer_1_output_4,uint32_t * layer_1_output_8,uint32_t * layer_1_output_12,uint32_t * layer_1_output_16,uint32_t * layer_1_output_20,uint32_t * layer_1_output_24,uint32_t * layer_1_output_28,uint32_t * layer_1_output_32,uint32_t * layer_1_output_36,uint32_t * layer_1_output_40,uint32_t * layer_1_output_44,uint32_t * layer_1_output_48,uint32_t * layer_1_output_52,uint32_t * layer_1_output_56,uint32_t * layer_1_output_60 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50400000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50408000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50410000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50418000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50800000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50808000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50810000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50818000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c00000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c08000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c10000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c18000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_44[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51000000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_48[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51008000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_52[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51010000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_56[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51018000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_1_output_60[i] = (*addr++ & mask);
    }

}
