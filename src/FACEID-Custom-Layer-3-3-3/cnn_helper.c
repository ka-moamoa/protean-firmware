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

  int i;
  const uint32_t *in0 = layer_0_input_0;

  for (i = 0; i < 19200; i++) {
    // Remove the following line if there is no risk that the source would overrun the FIFO:
    while (((*((volatile uint32_t *) 0x50000004) & 1)) != 0); // Wait for FIFO 0
    *((volatile uint32_t *) 0x50000008) = *in0++; // Write FIFO 0
  }
}
void load_input_1 ( uint32_t * layer_1_input_0,uint32_t * layer_1_input_4,uint32_t * layer_1_input_8,uint32_t * layer_1_input_12,uint32_t * layer_1_input_16,uint32_t * layer_1_input_20,uint32_t * layer_1_input_24,uint32_t * layer_1_input_28 )
{ 
  memcpy32((uint32_t *) 0x50c00000, layer_1_input_0, 1200);
  memcpy32((uint32_t *) 0x50c08000, layer_1_input_4, 1200);
  memcpy32((uint32_t *) 0x50c10000, layer_1_input_8, 1200);
  memcpy32((uint32_t *) 0x50c18000, layer_1_input_12, 1200);
  memcpy32((uint32_t *) 0x51000000, layer_1_input_16, 1200);
  memcpy32((uint32_t *) 0x51008000, layer_1_input_20, 1200);
  memcpy32((uint32_t *) 0x51010000, layer_1_input_24, 1200);
  memcpy32((uint32_t *) 0x51018000, layer_1_input_28, 1200);

 }
void load_input_2 ( uint32_t * layer_2_input_0,uint32_t * layer_2_input_4,uint32_t * layer_2_input_8,uint32_t * layer_2_input_12,uint32_t * layer_2_input_16,uint32_t * layer_2_input_20,uint32_t * layer_2_input_24,uint32_t * layer_2_input_28,uint32_t * layer_2_input_32,uint32_t * layer_2_input_36,uint32_t * layer_2_input_40,uint32_t * layer_2_input_44,uint32_t * layer_2_input_48,uint32_t * layer_2_input_52,uint32_t * layer_2_input_56,uint32_t * layer_2_input_60 )
{ 
  memcpy32((uint32_t *) 0x50402000, layer_2_input_0, 70);
  memcpy32((uint32_t *) 0x5040a000, layer_2_input_4, 70);
  memcpy32((uint32_t *) 0x50412000, layer_2_input_8, 70);
  memcpy32((uint32_t *) 0x5041a000, layer_2_input_12, 70);
  memcpy32((uint32_t *) 0x50802000, layer_2_input_16, 70);
  memcpy32((uint32_t *) 0x5080a000, layer_2_input_20, 70);
  memcpy32((uint32_t *) 0x50812000, layer_2_input_24, 70);
  memcpy32((uint32_t *) 0x5081a000, layer_2_input_28, 70);
  memcpy32((uint32_t *) 0x50c02000, layer_2_input_32, 70);
  memcpy32((uint32_t *) 0x50c0a000, layer_2_input_36, 70);
  memcpy32((uint32_t *) 0x50c12000, layer_2_input_40, 70);
  memcpy32((uint32_t *) 0x50c1a000, layer_2_input_44, 70);
  memcpy32((uint32_t *) 0x51002000, layer_2_input_48, 70);
  memcpy32((uint32_t *) 0x5100a000, layer_2_input_52, 70);
  memcpy32((uint32_t *) 0x51012000, layer_2_input_56, 70);
  memcpy32((uint32_t *) 0x5101a000, layer_2_input_60, 70);

 }
void copy_output_0 ( uint32_t * layer_0_output_0,uint32_t * layer_0_output_4,uint32_t * layer_0_output_8,uint32_t * layer_0_output_12,uint32_t * layer_0_output_16,uint32_t * layer_0_output_20,uint32_t * layer_0_output_24,uint32_t * layer_0_output_28 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50c00000;
    mask = 0xffffffff;
    len = 1200;
    for (i = 0; i < len; i++)
    {
        layer_0_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c08000;
    mask = 0xffffffff;
    len = 1200;
    for (i = 0; i < len; i++)
    {
        layer_0_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c10000;
    mask = 0xffffffff;
    len = 1200;
    for (i = 0; i < len; i++)
    {
        layer_0_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c18000;
    mask = 0xffffffff;
    len = 1200;
    for (i = 0; i < len; i++)
    {
        layer_0_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51000000;
    mask = 0xffffffff;
    len = 1200;
    for (i = 0; i < len; i++)
    {
        layer_0_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51008000;
    mask = 0xffffffff;
    len = 1200;
    for (i = 0; i < len; i++)
    {
        layer_0_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51010000;
    mask = 0xffffffff;
    len = 1200;
    for (i = 0; i < len; i++)
    {
        layer_0_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51018000;
    mask = 0xffffffff;
    len = 1200;
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
        addr = (uint32_t *) 0x50402000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5040a000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50412000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5041a000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50802000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5080a000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50812000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5081a000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c02000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c0a000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c12000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c1a000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_44[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51002000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_48[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5100a000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_52[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51012000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_56[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5101a000;
    mask = 0xffffffff;
    len = 70;
    for (i = 0; i < len; i++)
    {
        layer_1_output_60[i] = (*addr++ & mask);
    }

}
