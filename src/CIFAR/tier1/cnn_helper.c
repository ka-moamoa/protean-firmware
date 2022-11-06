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
void load_input_1 ( uint32_t * layer_1_input_0,uint32_t * layer_1_input_4,uint32_t * layer_1_input_8,uint32_t * layer_1_input_12,uint32_t * layer_1_input_16,uint32_t * layer_1_input_20,uint32_t * layer_1_input_24,uint32_t * layer_1_input_28,uint32_t * layer_1_input_32,uint32_t * layer_1_input_36,uint32_t * layer_1_input_40,uint32_t * layer_1_input_44,uint32_t * layer_1_input_48,uint32_t * layer_1_input_52,uint32_t * layer_1_input_56,uint32_t * layer_1_input_60 )
{ 
  memcpy32((uint32_t *) 0x50404000, layer_1_input_0, 1024);
  memcpy32((uint32_t *) 0x5040c000, layer_1_input_4, 1024);
  memcpy32((uint32_t *) 0x50414000, layer_1_input_8, 1024);
  memcpy32((uint32_t *) 0x5041c000, layer_1_input_12, 1024);
  memcpy32((uint32_t *) 0x50804000, layer_1_input_16, 1024);
  memcpy32((uint32_t *) 0x5080c000, layer_1_input_20, 1024);
  memcpy32((uint32_t *) 0x50814000, layer_1_input_24, 1024);
  memcpy32((uint32_t *) 0x5081c000, layer_1_input_28, 1024);
  memcpy32((uint32_t *) 0x50c04000, layer_1_input_32, 1024);
  memcpy32((uint32_t *) 0x50c0c000, layer_1_input_36, 1024);
  memcpy32((uint32_t *) 0x50c14000, layer_1_input_40, 1024);
  memcpy32((uint32_t *) 0x50c1c000, layer_1_input_44, 1024);
  memcpy32((uint32_t *) 0x51004000, layer_1_input_48, 1024);
  memcpy32((uint32_t *) 0x5100c000, layer_1_input_52, 1024);
  memcpy32((uint32_t *) 0x51014000, layer_1_input_56, 1024);
  memcpy32((uint32_t *) 0x5101c000, layer_1_input_60, 1024);

 }
void load_input_2 ( uint32_t * layer_2_input_0,uint32_t * layer_2_input_4,uint32_t * layer_2_input_8,uint32_t * layer_2_input_12,uint32_t * layer_2_input_16,uint32_t * layer_2_input_20,uint32_t * layer_2_input_24,uint32_t * layer_2_input_28 )
{ 
  memcpy32((uint32_t *) 0x50400000, layer_2_input_0, 1024);
  memcpy32((uint32_t *) 0x50408000, layer_2_input_4, 1024);
  memcpy32((uint32_t *) 0x50410000, layer_2_input_8, 1024);
  memcpy32((uint32_t *) 0x50418000, layer_2_input_12, 1024);
  memcpy32((uint32_t *) 0x50800000, layer_2_input_16, 1024);
  memcpy32((uint32_t *) 0x50808000, layer_2_input_20, 1024);
  memcpy32((uint32_t *) 0x50810000, layer_2_input_24, 1024);
  memcpy32((uint32_t *) 0x50818000, layer_2_input_28, 1024);

 }
void load_input_3 ( uint32_t * layer_3_input_0,uint32_t * layer_3_input_4,uint32_t * layer_3_input_8,uint32_t * layer_3_input_12,uint32_t * layer_3_input_16,uint32_t * layer_3_input_20,uint32_t * layer_3_input_24,uint32_t * layer_3_input_28,uint32_t * layer_3_input_32,uint32_t * layer_3_input_36,uint32_t * layer_3_input_40,uint32_t * layer_3_input_44,uint32_t * layer_3_input_48,uint32_t * layer_3_input_52,uint32_t * layer_3_input_56,uint32_t * layer_3_input_60 )
{ 
  memcpy32((uint32_t *) 0x50404000, layer_3_input_0, 1024);
  memcpy32((uint32_t *) 0x5040c000, layer_3_input_4, 1024);
  memcpy32((uint32_t *) 0x50414000, layer_3_input_8, 1024);
  memcpy32((uint32_t *) 0x5041c000, layer_3_input_12, 1024);
  memcpy32((uint32_t *) 0x50804000, layer_3_input_16, 1024);
  memcpy32((uint32_t *) 0x5080c000, layer_3_input_20, 1024);
  memcpy32((uint32_t *) 0x50814000, layer_3_input_24, 1024);
  memcpy32((uint32_t *) 0x5081c000, layer_3_input_28, 1024);
  memcpy32((uint32_t *) 0x50c04000, layer_3_input_32, 1024);
  memcpy32((uint32_t *) 0x50c0c000, layer_3_input_36, 1024);
  memcpy32((uint32_t *) 0x50c14000, layer_3_input_40, 1024);
  memcpy32((uint32_t *) 0x50c1c000, layer_3_input_44, 1024);
  memcpy32((uint32_t *) 0x51004000, layer_3_input_48, 1024);
  memcpy32((uint32_t *) 0x5100c000, layer_3_input_52, 1024);
  memcpy32((uint32_t *) 0x51014000, layer_3_input_56, 1024);
  memcpy32((uint32_t *) 0x5101c000, layer_3_input_60, 1024);

 }
void load_input_4 ( uint32_t * layer_4_input_0,uint32_t * layer_4_input_4,uint32_t * layer_4_input_8,uint32_t * layer_4_input_12,uint32_t * layer_4_input_16,uint32_t * layer_4_input_20,uint32_t * layer_4_input_24,uint32_t * layer_4_input_28 )
{ 
  memcpy32((uint32_t *) 0x50c00000, layer_4_input_0, 256);
  memcpy32((uint32_t *) 0x50c08000, layer_4_input_4, 256);
  memcpy32((uint32_t *) 0x50c10000, layer_4_input_8, 256);
  memcpy32((uint32_t *) 0x50c18000, layer_4_input_12, 256);
  memcpy32((uint32_t *) 0x51000000, layer_4_input_16, 256);
  memcpy32((uint32_t *) 0x51008000, layer_4_input_20, 256);
  memcpy32((uint32_t *) 0x51010000, layer_4_input_24, 256);
  memcpy32((uint32_t *) 0x51018000, layer_4_input_28, 256);

 }
void load_input_5 ( uint32_t * layer_5_input_0,uint32_t * layer_5_input_4,uint32_t * layer_5_input_8,uint32_t * layer_5_input_12,uint32_t * layer_5_input_16,uint32_t * layer_5_input_20,uint32_t * layer_5_input_24,uint32_t * layer_5_input_28,uint32_t * layer_5_input_32,uint32_t * layer_5_input_36,uint32_t * layer_5_input_40,uint32_t * layer_5_input_44,uint32_t * layer_5_input_48,uint32_t * layer_5_input_52,uint32_t * layer_5_input_56,uint32_t * layer_5_input_60 )
{ 
  memcpy32((uint32_t *) 0x50404000, layer_5_input_0, 256);
  memcpy32((uint32_t *) 0x5040c000, layer_5_input_4, 256);
  memcpy32((uint32_t *) 0x50414000, layer_5_input_8, 256);
  memcpy32((uint32_t *) 0x5041c000, layer_5_input_12, 256);
  memcpy32((uint32_t *) 0x50804000, layer_5_input_16, 256);
  memcpy32((uint32_t *) 0x5080c000, layer_5_input_20, 256);
  memcpy32((uint32_t *) 0x50814000, layer_5_input_24, 256);
  memcpy32((uint32_t *) 0x5081c000, layer_5_input_28, 256);
  memcpy32((uint32_t *) 0x50c04000, layer_5_input_32, 256);
  memcpy32((uint32_t *) 0x50c0c000, layer_5_input_36, 256);
  memcpy32((uint32_t *) 0x50c14000, layer_5_input_40, 256);
  memcpy32((uint32_t *) 0x50c1c000, layer_5_input_44, 256);
  memcpy32((uint32_t *) 0x51004000, layer_5_input_48, 256);
  memcpy32((uint32_t *) 0x5100c000, layer_5_input_52, 256);
  memcpy32((uint32_t *) 0x51014000, layer_5_input_56, 256);
  memcpy32((uint32_t *) 0x5101c000, layer_5_input_60, 256);

 }
void load_input_6 ( uint32_t * layer_6_input_0,uint32_t * layer_6_input_4,uint32_t * layer_6_input_8,uint32_t * layer_6_input_12,uint32_t * layer_6_input_16,uint32_t * layer_6_input_20,uint32_t * layer_6_input_24,uint32_t * layer_6_input_28,uint32_t * layer_6_input_32,uint32_t * layer_6_input_36,uint32_t * layer_6_input_40,uint32_t * layer_6_input_44,uint32_t * layer_6_input_48,uint32_t * layer_6_input_52,uint32_t * layer_6_input_56,uint32_t * layer_6_input_60 )
{ 
  memcpy32((uint32_t *) 0x50400000, layer_6_input_0, 128);
  memcpy32((uint32_t *) 0x50408000, layer_6_input_4, 128);
  memcpy32((uint32_t *) 0x50410000, layer_6_input_8, 128);
  memcpy32((uint32_t *) 0x50418000, layer_6_input_12, 128);
  memcpy32((uint32_t *) 0x50800000, layer_6_input_16, 128);
  memcpy32((uint32_t *) 0x50808000, layer_6_input_20, 128);
  memcpy32((uint32_t *) 0x50810000, layer_6_input_24, 128);
  memcpy32((uint32_t *) 0x50818000, layer_6_input_28, 128);
  memcpy32((uint32_t *) 0x50c00000, layer_6_input_32, 128);
  memcpy32((uint32_t *) 0x50c08000, layer_6_input_36, 128);
  memcpy32((uint32_t *) 0x50c10000, layer_6_input_40, 128);
  memcpy32((uint32_t *) 0x50c18000, layer_6_input_44, 128);
  memcpy32((uint32_t *) 0x51000000, layer_6_input_48, 128);
  memcpy32((uint32_t *) 0x51008000, layer_6_input_52, 128);
  memcpy32((uint32_t *) 0x51010000, layer_6_input_56, 128);
  memcpy32((uint32_t *) 0x51018000, layer_6_input_60, 128);

 }
void load_input_7 ( uint32_t * layer_7_input_0,uint32_t * layer_7_input_4,uint32_t * layer_7_input_8,uint32_t * layer_7_input_12,uint32_t * layer_7_input_16,uint32_t * layer_7_input_20,uint32_t * layer_7_input_24,uint32_t * layer_7_input_28,uint32_t * layer_7_input_32,uint32_t * layer_7_input_36,uint32_t * layer_7_input_40,uint32_t * layer_7_input_44,uint32_t * layer_7_input_48,uint32_t * layer_7_input_52,uint32_t * layer_7_input_56,uint32_t * layer_7_input_60 )
{ 
  memcpy32((uint32_t *) 0x50404000, layer_7_input_0, 128);
  memcpy32((uint32_t *) 0x5040c000, layer_7_input_4, 128);
  memcpy32((uint32_t *) 0x50414000, layer_7_input_8, 128);
  memcpy32((uint32_t *) 0x5041c000, layer_7_input_12, 128);
  memcpy32((uint32_t *) 0x50804000, layer_7_input_16, 128);
  memcpy32((uint32_t *) 0x5080c000, layer_7_input_20, 128);
  memcpy32((uint32_t *) 0x50814000, layer_7_input_24, 128);
  memcpy32((uint32_t *) 0x5081c000, layer_7_input_28, 128);
  memcpy32((uint32_t *) 0x50c04000, layer_7_input_32, 128);
  memcpy32((uint32_t *) 0x50c0c000, layer_7_input_36, 128);
  memcpy32((uint32_t *) 0x50c14000, layer_7_input_40, 128);
  memcpy32((uint32_t *) 0x50c1c000, layer_7_input_44, 128);
  memcpy32((uint32_t *) 0x51004000, layer_7_input_48, 128);
  memcpy32((uint32_t *) 0x5100c000, layer_7_input_52, 128);
  memcpy32((uint32_t *) 0x51014000, layer_7_input_56, 128);
  memcpy32((uint32_t *) 0x5101c000, layer_7_input_60, 128);

 }
void load_input_8 ( uint32_t * layer_8_input_0,uint32_t * layer_8_input_4,uint32_t * layer_8_input_8,uint32_t * layer_8_input_12,uint32_t * layer_8_input_16,uint32_t * layer_8_input_20,uint32_t * layer_8_input_24,uint32_t * layer_8_input_28,uint32_t * layer_8_input_32,uint32_t * layer_8_input_36,uint32_t * layer_8_input_40,uint32_t * layer_8_input_44,uint32_t * layer_8_input_48,uint32_t * layer_8_input_52,uint32_t * layer_8_input_56,uint32_t * layer_8_input_60 )
{ 
  memcpy32((uint32_t *) 0x50400000, layer_8_input_0, 16);
  memcpy32((uint32_t *) 0x50408000, layer_8_input_4, 16);
  memcpy32((uint32_t *) 0x50410000, layer_8_input_8, 16);
  memcpy32((uint32_t *) 0x50418000, layer_8_input_12, 16);
  memcpy32((uint32_t *) 0x50800000, layer_8_input_16, 16);
  memcpy32((uint32_t *) 0x50808000, layer_8_input_20, 16);
  memcpy32((uint32_t *) 0x50810000, layer_8_input_24, 16);
  memcpy32((uint32_t *) 0x50818000, layer_8_input_28, 16);
  memcpy32((uint32_t *) 0x50c00000, layer_8_input_32, 16);
  memcpy32((uint32_t *) 0x50c08000, layer_8_input_36, 16);
  memcpy32((uint32_t *) 0x50c10000, layer_8_input_40, 16);
  memcpy32((uint32_t *) 0x50c18000, layer_8_input_44, 16);
  memcpy32((uint32_t *) 0x51000000, layer_8_input_48, 16);
  memcpy32((uint32_t *) 0x51008000, layer_8_input_52, 16);
  memcpy32((uint32_t *) 0x51010000, layer_8_input_56, 16);
  memcpy32((uint32_t *) 0x51018000, layer_8_input_60, 16);

 }
void load_input_9 ( uint32_t * layer_9_input_0,uint32_t * layer_9_input_4,uint32_t * layer_9_input_8,uint32_t * layer_9_input_12,uint32_t * layer_9_input_16,uint32_t * layer_9_input_20,uint32_t * layer_9_input_24,uint32_t * layer_9_input_28,uint32_t * layer_9_input_32,uint32_t * layer_9_input_36,uint32_t * layer_9_input_40,uint32_t * layer_9_input_44,uint32_t * layer_9_input_48,uint32_t * layer_9_input_52,uint32_t * layer_9_input_56,uint32_t * layer_9_input_60 )
{ 
  memcpy32((uint32_t *) 0x50404000, layer_9_input_0, 32);
  memcpy32((uint32_t *) 0x5040c000, layer_9_input_4, 32);
  memcpy32((uint32_t *) 0x50414000, layer_9_input_8, 32);
  memcpy32((uint32_t *) 0x5041c000, layer_9_input_12, 32);
  memcpy32((uint32_t *) 0x50804000, layer_9_input_16, 32);
  memcpy32((uint32_t *) 0x5080c000, layer_9_input_20, 32);
  memcpy32((uint32_t *) 0x50814000, layer_9_input_24, 32);
  memcpy32((uint32_t *) 0x5081c000, layer_9_input_28, 32);
  memcpy32((uint32_t *) 0x50c04000, layer_9_input_32, 32);
  memcpy32((uint32_t *) 0x50c0c000, layer_9_input_36, 32);
  memcpy32((uint32_t *) 0x50c14000, layer_9_input_40, 32);
  memcpy32((uint32_t *) 0x50c1c000, layer_9_input_44, 32);
  memcpy32((uint32_t *) 0x51004000, layer_9_input_48, 32);
  memcpy32((uint32_t *) 0x5100c000, layer_9_input_52, 32);
  memcpy32((uint32_t *) 0x51014000, layer_9_input_56, 32);
  memcpy32((uint32_t *) 0x5101c000, layer_9_input_60, 32);

 }
void load_input_10 ( uint32_t * layer_10_input_0,uint32_t * layer_10_input_4,uint32_t * layer_10_input_8,uint32_t * layer_10_input_12,uint32_t * layer_10_input_16,uint32_t * layer_10_input_20,uint32_t * layer_10_input_24,uint32_t * layer_10_input_28,uint32_t * layer_10_input_32,uint32_t * layer_10_input_36,uint32_t * layer_10_input_40,uint32_t * layer_10_input_44,uint32_t * layer_10_input_48,uint32_t * layer_10_input_52,uint32_t * layer_10_input_56,uint32_t * layer_10_input_60 )
{ 
  memcpy32((uint32_t *) 0x50400000, layer_10_input_0, 8);
  memcpy32((uint32_t *) 0x50408000, layer_10_input_4, 8);
  memcpy32((uint32_t *) 0x50410000, layer_10_input_8, 8);
  memcpy32((uint32_t *) 0x50418000, layer_10_input_12, 8);
  memcpy32((uint32_t *) 0x50800000, layer_10_input_16, 8);
  memcpy32((uint32_t *) 0x50808000, layer_10_input_20, 8);
  memcpy32((uint32_t *) 0x50810000, layer_10_input_24, 8);
  memcpy32((uint32_t *) 0x50818000, layer_10_input_28, 8);
  memcpy32((uint32_t *) 0x50c00000, layer_10_input_32, 8);
  memcpy32((uint32_t *) 0x50c08000, layer_10_input_36, 8);
  memcpy32((uint32_t *) 0x50c10000, layer_10_input_40, 8);
  memcpy32((uint32_t *) 0x50c18000, layer_10_input_44, 8);
  memcpy32((uint32_t *) 0x51000000, layer_10_input_48, 8);
  memcpy32((uint32_t *) 0x51008000, layer_10_input_52, 8);
  memcpy32((uint32_t *) 0x51010000, layer_10_input_56, 8);
  memcpy32((uint32_t *) 0x51018000, layer_10_input_60, 8);

 }
void copy_output_0 ( uint32_t * layer_0_output_0,uint32_t * layer_0_output_4,uint32_t * layer_0_output_8,uint32_t * layer_0_output_12,uint32_t * layer_0_output_16,uint32_t * layer_0_output_20,uint32_t * layer_0_output_24,uint32_t * layer_0_output_28,uint32_t * layer_0_output_32,uint32_t * layer_0_output_36,uint32_t * layer_0_output_40,uint32_t * layer_0_output_44,uint32_t * layer_0_output_48,uint32_t * layer_0_output_52,uint32_t * layer_0_output_56,uint32_t * layer_0_output_60 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50404000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5040c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50414000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5041c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50804000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5080c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50814000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5081c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c04000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c0c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c14000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c1c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_44[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51004000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_48[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5100c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_52[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51014000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_56[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5101c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_0_output_60[i] = (*addr++ & mask);
    }

}
void copy_output_1 ( uint32_t * layer_1_output_0,uint32_t * layer_1_output_4,uint32_t * layer_1_output_8,uint32_t * layer_1_output_12,uint32_t * layer_1_output_16,uint32_t * layer_1_output_20,uint32_t * layer_1_output_24,uint32_t * layer_1_output_28 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50400000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_1_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50408000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_1_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50410000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_1_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50418000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_1_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50800000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_1_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50808000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_1_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50810000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_1_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50818000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_1_output_28[i] = (*addr++ & mask);
    }

}
void copy_output_2 ( uint32_t * layer_2_output_0,uint32_t * layer_2_output_4,uint32_t * layer_2_output_8,uint32_t * layer_2_output_12,uint32_t * layer_2_output_16,uint32_t * layer_2_output_20,uint32_t * layer_2_output_24,uint32_t * layer_2_output_28,uint32_t * layer_2_output_32,uint32_t * layer_2_output_36,uint32_t * layer_2_output_40,uint32_t * layer_2_output_44,uint32_t * layer_2_output_48,uint32_t * layer_2_output_52,uint32_t * layer_2_output_56,uint32_t * layer_2_output_60 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50404000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5040c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50414000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5041c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50804000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5080c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50814000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5081c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c04000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c0c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c14000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c1c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_44[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51004000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_48[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5100c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_52[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51014000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_56[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5101c000;
    mask = 0xffffffff;
    len = 1024;
    for (i = 0; i < len; i++)
    {
        layer_2_output_60[i] = (*addr++ & mask);
    }

}
void copy_output_3 ( uint32_t * layer_3_output_0,uint32_t * layer_3_output_4,uint32_t * layer_3_output_8,uint32_t * layer_3_output_12,uint32_t * layer_3_output_16,uint32_t * layer_3_output_20,uint32_t * layer_3_output_24,uint32_t * layer_3_output_28 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50c00000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_3_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c08000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_3_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c10000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_3_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c18000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_3_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51000000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_3_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51008000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_3_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51010000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_3_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51018000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_3_output_28[i] = (*addr++ & mask);
    }

}
void copy_output_4 ( uint32_t * layer_4_output_0,uint32_t * layer_4_output_4,uint32_t * layer_4_output_8,uint32_t * layer_4_output_12,uint32_t * layer_4_output_16,uint32_t * layer_4_output_20,uint32_t * layer_4_output_24,uint32_t * layer_4_output_28,uint32_t * layer_4_output_32,uint32_t * layer_4_output_36,uint32_t * layer_4_output_40,uint32_t * layer_4_output_44,uint32_t * layer_4_output_48,uint32_t * layer_4_output_52,uint32_t * layer_4_output_56,uint32_t * layer_4_output_60 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50404000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5040c000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50414000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5041c000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50804000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5080c000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50814000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5081c000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c04000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c0c000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c14000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c1c000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_44[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51004000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_48[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5100c000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_52[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51014000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_56[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5101c000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_4_output_60[i] = (*addr++ & mask);
    }

}
void copy_output_5 ( uint32_t * layer_5_output_0,uint32_t * layer_5_output_4,uint32_t * layer_5_output_8,uint32_t * layer_5_output_12,uint32_t * layer_5_output_16,uint32_t * layer_5_output_20,uint32_t * layer_5_output_24,uint32_t * layer_5_output_28,uint32_t * layer_5_output_32,uint32_t * layer_5_output_36,uint32_t * layer_5_output_40,uint32_t * layer_5_output_44,uint32_t * layer_5_output_48,uint32_t * layer_5_output_52,uint32_t * layer_5_output_56,uint32_t * layer_5_output_60 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50400000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50408000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50410000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50418000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50800000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50808000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50810000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50818000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c00000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c08000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c10000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c18000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_44[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51000000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_48[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51008000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_52[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51010000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_56[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51018000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_5_output_60[i] = (*addr++ & mask);
    }

}
void copy_output_6 ( uint32_t * layer_6_output_0,uint32_t * layer_6_output_4,uint32_t * layer_6_output_8,uint32_t * layer_6_output_12,uint32_t * layer_6_output_16,uint32_t * layer_6_output_20,uint32_t * layer_6_output_24,uint32_t * layer_6_output_28,uint32_t * layer_6_output_32,uint32_t * layer_6_output_36,uint32_t * layer_6_output_40,uint32_t * layer_6_output_44,uint32_t * layer_6_output_48,uint32_t * layer_6_output_52,uint32_t * layer_6_output_56,uint32_t * layer_6_output_60 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50404000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5040c000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50414000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5041c000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50804000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5080c000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50814000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5081c000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c04000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c0c000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c14000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c1c000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_44[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51004000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_48[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5100c000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_52[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51014000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_56[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5101c000;
    mask = 0xffffffff;
    len = 128;
    for (i = 0; i < len; i++)
    {
        layer_6_output_60[i] = (*addr++ & mask);
    }

}
void copy_output_7 ( uint32_t * layer_7_output_0,uint32_t * layer_7_output_4,uint32_t * layer_7_output_8,uint32_t * layer_7_output_12,uint32_t * layer_7_output_16,uint32_t * layer_7_output_20,uint32_t * layer_7_output_24,uint32_t * layer_7_output_28,uint32_t * layer_7_output_32,uint32_t * layer_7_output_36,uint32_t * layer_7_output_40,uint32_t * layer_7_output_44,uint32_t * layer_7_output_48,uint32_t * layer_7_output_52,uint32_t * layer_7_output_56,uint32_t * layer_7_output_60 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50400000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50408000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50410000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50418000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50800000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50808000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50810000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50818000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c00000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c08000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c10000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c18000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_44[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51000000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_48[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51008000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_52[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51010000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_56[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51018000;
    mask = 0xffffffff;
    len = 16;
    for (i = 0; i < len; i++)
    {
        layer_7_output_60[i] = (*addr++ & mask);
    }

}
void copy_output_8 ( uint32_t * layer_8_output_0,uint32_t * layer_8_output_4,uint32_t * layer_8_output_8,uint32_t * layer_8_output_12,uint32_t * layer_8_output_16,uint32_t * layer_8_output_20,uint32_t * layer_8_output_24,uint32_t * layer_8_output_28,uint32_t * layer_8_output_32,uint32_t * layer_8_output_36,uint32_t * layer_8_output_40,uint32_t * layer_8_output_44,uint32_t * layer_8_output_48,uint32_t * layer_8_output_52,uint32_t * layer_8_output_56,uint32_t * layer_8_output_60 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50404000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5040c000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50414000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5041c000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50804000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5080c000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50814000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5081c000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c04000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c0c000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c14000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c1c000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_44[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51004000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_48[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5100c000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_52[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51014000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_56[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5101c000;
    mask = 0xffffffff;
    len = 32;
    for (i = 0; i < len; i++)
    {
        layer_8_output_60[i] = (*addr++ & mask);
    }

}
void copy_output_9 ( uint32_t * layer_9_output_0,uint32_t * layer_9_output_4,uint32_t * layer_9_output_8,uint32_t * layer_9_output_12,uint32_t * layer_9_output_16,uint32_t * layer_9_output_20,uint32_t * layer_9_output_24,uint32_t * layer_9_output_28,uint32_t * layer_9_output_32,uint32_t * layer_9_output_36,uint32_t * layer_9_output_40,uint32_t * layer_9_output_44,uint32_t * layer_9_output_48,uint32_t * layer_9_output_52,uint32_t * layer_9_output_56,uint32_t * layer_9_output_60 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50400000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50408000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50410000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50418000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50800000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50808000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50810000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50818000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c00000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c08000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c10000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c18000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_44[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51000000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_48[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51008000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_52[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51010000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_56[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51018000;
    mask = 0xffffffff;
    len = 8;
    for (i = 0; i < len; i++)
    {
        layer_9_output_60[i] = (*addr++ & mask);
    }

}
