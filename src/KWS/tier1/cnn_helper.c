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
void load_input_1 ( uint32_t * layer_1_input_0,uint32_t * layer_1_input_4,uint32_t * layer_1_input_8,uint32_t * layer_1_input_12,uint32_t * layer_1_input_16,uint32_t * layer_1_input_20,uint32_t * layer_1_input_24,uint32_t * layer_1_input_28,uint32_t * layer_1_input_32,uint32_t * layer_1_input_36,uint32_t * layer_1_input_40,uint32_t * layer_1_input_44,uint32_t * layer_1_input_48 )
{ 
  memcpy32((uint32_t *) 0x50402000, layer_1_input_0, 256);
  memcpy32((uint32_t *) 0x5040a000, layer_1_input_4, 256);
  memcpy32((uint32_t *) 0x50412000, layer_1_input_8, 256);
  memcpy32((uint32_t *) 0x5041a000, layer_1_input_12, 256);
  memcpy32((uint32_t *) 0x50802000, layer_1_input_16, 256);
  memcpy32((uint32_t *) 0x5080a000, layer_1_input_20, 256);
  memcpy32((uint32_t *) 0x50812000, layer_1_input_24, 256);
  memcpy32((uint32_t *) 0x5081a000, layer_1_input_28, 256);
  memcpy32((uint32_t *) 0x50c02000, layer_1_input_32, 256);
  memcpy32((uint32_t *) 0x50c0a000, layer_1_input_36, 256);
  memcpy32((uint32_t *) 0x50c12000, layer_1_input_40, 256);
  memcpy32((uint32_t *) 0x50c1a000, layer_1_input_44, 256);
*((volatile uint32_t *) 0x51002000) =layer_1_input_48[0];
*((volatile uint32_t *) 0x51002008) =layer_1_input_48[1];
*((volatile uint32_t *) 0x51002010) =layer_1_input_48[2];
*((volatile uint32_t *) 0x51002018) =layer_1_input_48[3];
*((volatile uint32_t *) 0x51002020) =layer_1_input_48[4];
*((volatile uint32_t *) 0x51002028) =layer_1_input_48[5];
*((volatile uint32_t *) 0x51002030) =layer_1_input_48[6];
*((volatile uint32_t *) 0x51002038) =layer_1_input_48[7];
*((volatile uint32_t *) 0x51002040) =layer_1_input_48[8];
*((volatile uint32_t *) 0x51002048) =layer_1_input_48[9];
*((volatile uint32_t *) 0x51002050) =layer_1_input_48[10];
*((volatile uint32_t *) 0x51002058) =layer_1_input_48[11];
*((volatile uint32_t *) 0x51002060) =layer_1_input_48[12];
*((volatile uint32_t *) 0x51002068) =layer_1_input_48[13];
*((volatile uint32_t *) 0x51002070) =layer_1_input_48[14];
*((volatile uint32_t *) 0x51002078) =layer_1_input_48[15];
*((volatile uint32_t *) 0x51002080) =layer_1_input_48[16];
*((volatile uint32_t *) 0x51002088) =layer_1_input_48[17];
*((volatile uint32_t *) 0x51002090) =layer_1_input_48[18];
*((volatile uint32_t *) 0x51002098) =layer_1_input_48[19];
*((volatile uint32_t *) 0x510020a0) =layer_1_input_48[20];
*((volatile uint32_t *) 0x510020a8) =layer_1_input_48[21];
*((volatile uint32_t *) 0x510020b0) =layer_1_input_48[22];
*((volatile uint32_t *) 0x510020b8) =layer_1_input_48[23];
*((volatile uint32_t *) 0x510020c0) =layer_1_input_48[24];
*((volatile uint32_t *) 0x510020c8) =layer_1_input_48[25];
*((volatile uint32_t *) 0x510020d0) =layer_1_input_48[26];
*((volatile uint32_t *) 0x510020d8) =layer_1_input_48[27];
*((volatile uint32_t *) 0x510020e0) =layer_1_input_48[28];
*((volatile uint32_t *) 0x510020e8) =layer_1_input_48[29];
*((volatile uint32_t *) 0x510020f0) =layer_1_input_48[30];
*((volatile uint32_t *) 0x510020f8) =layer_1_input_48[31];
*((volatile uint32_t *) 0x51002100) =layer_1_input_48[32];
*((volatile uint32_t *) 0x51002108) =layer_1_input_48[33];
*((volatile uint32_t *) 0x51002110) =layer_1_input_48[34];
*((volatile uint32_t *) 0x51002118) =layer_1_input_48[35];
*((volatile uint32_t *) 0x51002120) =layer_1_input_48[36];
*((volatile uint32_t *) 0x51002128) =layer_1_input_48[37];
*((volatile uint32_t *) 0x51002130) =layer_1_input_48[38];
*((volatile uint32_t *) 0x51002138) =layer_1_input_48[39];
*((volatile uint32_t *) 0x51002140) =layer_1_input_48[40];
*((volatile uint32_t *) 0x51002148) =layer_1_input_48[41];
*((volatile uint32_t *) 0x51002150) =layer_1_input_48[42];
*((volatile uint32_t *) 0x51002158) =layer_1_input_48[43];
*((volatile uint32_t *) 0x51002160) =layer_1_input_48[44];
*((volatile uint32_t *) 0x51002168) =layer_1_input_48[45];
*((volatile uint32_t *) 0x51002170) =layer_1_input_48[46];
*((volatile uint32_t *) 0x51002178) =layer_1_input_48[47];
*((volatile uint32_t *) 0x51002180) =layer_1_input_48[48];
*((volatile uint32_t *) 0x51002188) =layer_1_input_48[49];
*((volatile uint32_t *) 0x51002190) =layer_1_input_48[50];
*((volatile uint32_t *) 0x51002198) =layer_1_input_48[51];
*((volatile uint32_t *) 0x510021a0) =layer_1_input_48[52];
*((volatile uint32_t *) 0x510021a8) =layer_1_input_48[53];
*((volatile uint32_t *) 0x510021b0) =layer_1_input_48[54];
*((volatile uint32_t *) 0x510021b8) =layer_1_input_48[55];
*((volatile uint32_t *) 0x510021c0) =layer_1_input_48[56];
*((volatile uint32_t *) 0x510021c8) =layer_1_input_48[57];
*((volatile uint32_t *) 0x510021d0) =layer_1_input_48[58];
*((volatile uint32_t *) 0x510021d8) =layer_1_input_48[59];
*((volatile uint32_t *) 0x510021e0) =layer_1_input_48[60];
*((volatile uint32_t *) 0x510021e8) =layer_1_input_48[61];
*((volatile uint32_t *) 0x510021f0) =layer_1_input_48[62];
*((volatile uint32_t *) 0x510021f8) =layer_1_input_48[63];
*((volatile uint32_t *) 0x51002200) =layer_1_input_48[64];
*((volatile uint32_t *) 0x51002208) =layer_1_input_48[65];
*((volatile uint32_t *) 0x51002210) =layer_1_input_48[66];
*((volatile uint32_t *) 0x51002218) =layer_1_input_48[67];
*((volatile uint32_t *) 0x51002220) =layer_1_input_48[68];
*((volatile uint32_t *) 0x51002228) =layer_1_input_48[69];
*((volatile uint32_t *) 0x51002230) =layer_1_input_48[70];
*((volatile uint32_t *) 0x51002238) =layer_1_input_48[71];
*((volatile uint32_t *) 0x51002240) =layer_1_input_48[72];
*((volatile uint32_t *) 0x51002248) =layer_1_input_48[73];
*((volatile uint32_t *) 0x51002250) =layer_1_input_48[74];
*((volatile uint32_t *) 0x51002258) =layer_1_input_48[75];
*((volatile uint32_t *) 0x51002260) =layer_1_input_48[76];
*((volatile uint32_t *) 0x51002268) =layer_1_input_48[77];
*((volatile uint32_t *) 0x51002270) =layer_1_input_48[78];
*((volatile uint32_t *) 0x51002278) =layer_1_input_48[79];
*((volatile uint32_t *) 0x51002280) =layer_1_input_48[80];
*((volatile uint32_t *) 0x51002288) =layer_1_input_48[81];
*((volatile uint32_t *) 0x51002290) =layer_1_input_48[82];
*((volatile uint32_t *) 0x51002298) =layer_1_input_48[83];
*((volatile uint32_t *) 0x510022a0) =layer_1_input_48[84];
*((volatile uint32_t *) 0x510022a8) =layer_1_input_48[85];
*((volatile uint32_t *) 0x510022b0) =layer_1_input_48[86];
*((volatile uint32_t *) 0x510022b8) =layer_1_input_48[87];
*((volatile uint32_t *) 0x510022c0) =layer_1_input_48[88];
*((volatile uint32_t *) 0x510022c8) =layer_1_input_48[89];
*((volatile uint32_t *) 0x510022d0) =layer_1_input_48[90];
*((volatile uint32_t *) 0x510022d8) =layer_1_input_48[91];
*((volatile uint32_t *) 0x510022e0) =layer_1_input_48[92];
*((volatile uint32_t *) 0x510022e8) =layer_1_input_48[93];
*((volatile uint32_t *) 0x510022f0) =layer_1_input_48[94];
*((volatile uint32_t *) 0x510022f8) =layer_1_input_48[95];
*((volatile uint32_t *) 0x51002300) =layer_1_input_48[96];
*((volatile uint32_t *) 0x51002308) =layer_1_input_48[97];
*((volatile uint32_t *) 0x51002310) =layer_1_input_48[98];
*((volatile uint32_t *) 0x51002318) =layer_1_input_48[99];
*((volatile uint32_t *) 0x51002320) =layer_1_input_48[100];
*((volatile uint32_t *) 0x51002328) =layer_1_input_48[101];
*((volatile uint32_t *) 0x51002330) =layer_1_input_48[102];
*((volatile uint32_t *) 0x51002338) =layer_1_input_48[103];
*((volatile uint32_t *) 0x51002340) =layer_1_input_48[104];
*((volatile uint32_t *) 0x51002348) =layer_1_input_48[105];
*((volatile uint32_t *) 0x51002350) =layer_1_input_48[106];
*((volatile uint32_t *) 0x51002358) =layer_1_input_48[107];
*((volatile uint32_t *) 0x51002360) =layer_1_input_48[108];
*((volatile uint32_t *) 0x51002368) =layer_1_input_48[109];
*((volatile uint32_t *) 0x51002370) =layer_1_input_48[110];
*((volatile uint32_t *) 0x51002378) =layer_1_input_48[111];
*((volatile uint32_t *) 0x51002380) =layer_1_input_48[112];
*((volatile uint32_t *) 0x51002388) =layer_1_input_48[113];
*((volatile uint32_t *) 0x51002390) =layer_1_input_48[114];
*((volatile uint32_t *) 0x51002398) =layer_1_input_48[115];
*((volatile uint32_t *) 0x510023a0) =layer_1_input_48[116];
*((volatile uint32_t *) 0x510023a8) =layer_1_input_48[117];
*((volatile uint32_t *) 0x510023b0) =layer_1_input_48[118];
*((volatile uint32_t *) 0x510023b8) =layer_1_input_48[119];
*((volatile uint32_t *) 0x510023c0) =layer_1_input_48[120];
*((volatile uint32_t *) 0x510023c8) =layer_1_input_48[121];
*((volatile uint32_t *) 0x510023d0) =layer_1_input_48[122];
*((volatile uint32_t *) 0x510023d8) =layer_1_input_48[123];
*((volatile uint32_t *) 0x510023e0) =layer_1_input_48[124];
*((volatile uint32_t *) 0x510023e8) =layer_1_input_48[125];
*((volatile uint32_t *) 0x510023f0) =layer_1_input_48[126];
*((volatile uint32_t *) 0x510023f8) =layer_1_input_48[127];

 }
void load_input_2 ( uint32_t * layer_2_input_0,uint32_t * layer_2_input_4,uint32_t * layer_2_input_8,uint32_t * layer_2_input_12,uint32_t * layer_2_input_16,uint32_t * layer_2_input_20,uint32_t * layer_2_input_24,uint32_t * layer_2_input_28,uint32_t * layer_2_input_32,uint32_t * layer_2_input_36,uint32_t * layer_2_input_40,uint32_t * layer_2_input_44 )
{ 
  memcpy32((uint32_t *) 0x50400000, layer_2_input_0, 252);
  memcpy32((uint32_t *) 0x50408000, layer_2_input_4, 252);
  memcpy32((uint32_t *) 0x50410000, layer_2_input_8, 252);
  memcpy32((uint32_t *) 0x50418000, layer_2_input_12, 252);
  memcpy32((uint32_t *) 0x50800000, layer_2_input_16, 252);
  memcpy32((uint32_t *) 0x50808000, layer_2_input_20, 252);
  memcpy32((uint32_t *) 0x50810000, layer_2_input_24, 252);
  memcpy32((uint32_t *) 0x50818000, layer_2_input_28, 252);
  memcpy32((uint32_t *) 0x50c00000, layer_2_input_32, 252);
  memcpy32((uint32_t *) 0x50c08000, layer_2_input_36, 252);
  memcpy32((uint32_t *) 0x50c10000, layer_2_input_40, 252);
  memcpy32((uint32_t *) 0x50c18000, layer_2_input_44, 252);

 }
void load_input_3 ( uint32_t * layer_3_input_0,uint32_t * layer_3_input_4,uint32_t * layer_3_input_8,uint32_t * layer_3_input_12,uint32_t * layer_3_input_16,uint32_t * layer_3_input_20,uint32_t * layer_3_input_24,uint32_t * layer_3_input_28,uint32_t * layer_3_input_32,uint32_t * layer_3_input_36,uint32_t * layer_3_input_40,uint32_t * layer_3_input_44,uint32_t * layer_3_input_48,uint32_t * layer_3_input_52,uint32_t * layer_3_input_56,uint32_t * layer_3_input_60 )
{ 
  memcpy32((uint32_t *) 0x50402000, layer_3_input_0, 63);
  memcpy32((uint32_t *) 0x5040a000, layer_3_input_4, 63);
  memcpy32((uint32_t *) 0x50412000, layer_3_input_8, 63);
  memcpy32((uint32_t *) 0x5041a000, layer_3_input_12, 63);
  memcpy32((uint32_t *) 0x50802000, layer_3_input_16, 63);
  memcpy32((uint32_t *) 0x5080a000, layer_3_input_20, 63);
  memcpy32((uint32_t *) 0x50812000, layer_3_input_24, 63);
  memcpy32((uint32_t *) 0x5081a000, layer_3_input_28, 63);
  memcpy32((uint32_t *) 0x50c02000, layer_3_input_32, 63);
  memcpy32((uint32_t *) 0x50c0a000, layer_3_input_36, 63);
  memcpy32((uint32_t *) 0x50c12000, layer_3_input_40, 63);
  memcpy32((uint32_t *) 0x50c1a000, layer_3_input_44, 63);
  memcpy32((uint32_t *) 0x51002000, layer_3_input_48, 63);
  memcpy32((uint32_t *) 0x5100a000, layer_3_input_52, 63);
  memcpy32((uint32_t *) 0x51012000, layer_3_input_56, 63);
  memcpy32((uint32_t *) 0x5101a000, layer_3_input_60, 63);

 }
void load_input_4 ( uint32_t * layer_4_input_0,uint32_t * layer_4_input_4,uint32_t * layer_4_input_8,uint32_t * layer_4_input_12,uint32_t * layer_4_input_16,uint32_t * layer_4_input_20,uint32_t * layer_4_input_24,uint32_t * layer_4_input_28,uint32_t * layer_4_input_32,uint32_t * layer_4_input_36,uint32_t * layer_4_input_40,uint32_t * layer_4_input_44 )
{ 
  memcpy32((uint32_t *) 0x50400000, layer_4_input_0, 61);
  memcpy32((uint32_t *) 0x50408000, layer_4_input_4, 61);
  memcpy32((uint32_t *) 0x50410000, layer_4_input_8, 61);
  memcpy32((uint32_t *) 0x50418000, layer_4_input_12, 61);
  memcpy32((uint32_t *) 0x50800000, layer_4_input_16, 61);
  memcpy32((uint32_t *) 0x50808000, layer_4_input_20, 61);
  memcpy32((uint32_t *) 0x50810000, layer_4_input_24, 61);
  memcpy32((uint32_t *) 0x50818000, layer_4_input_28, 61);
  memcpy32((uint32_t *) 0x50c00000, layer_4_input_32, 61);
  memcpy32((uint32_t *) 0x50c08000, layer_4_input_36, 61);
  memcpy32((uint32_t *) 0x50c10000, layer_4_input_40, 61);
  memcpy32((uint32_t *) 0x50c18000, layer_4_input_44, 61);

 }
void load_input_5 ( uint32_t * layer_5_input_0,uint32_t * layer_5_input_4,uint32_t * layer_5_input_8,uint32_t * layer_5_input_12,uint32_t * layer_5_input_16,uint32_t * layer_5_input_20,uint32_t * layer_5_input_24,uint32_t * layer_5_input_28,uint32_t * layer_5_input_32,uint32_t * layer_5_input_36,uint32_t * layer_5_input_40,uint32_t * layer_5_input_44,uint32_t * layer_5_input_48,uint32_t * layer_5_input_52,uint32_t * layer_5_input_56,uint32_t * layer_5_input_60 )
{ 
  memcpy32((uint32_t *) 0x50402000, layer_5_input_0, 30);
  memcpy32((uint32_t *) 0x5040a000, layer_5_input_4, 30);
  memcpy32((uint32_t *) 0x50412000, layer_5_input_8, 30);
  memcpy32((uint32_t *) 0x5041a000, layer_5_input_12, 30);
  memcpy32((uint32_t *) 0x50802000, layer_5_input_16, 30);
  memcpy32((uint32_t *) 0x5080a000, layer_5_input_20, 30);
  memcpy32((uint32_t *) 0x50812000, layer_5_input_24, 30);
  memcpy32((uint32_t *) 0x5081a000, layer_5_input_28, 30);
  memcpy32((uint32_t *) 0x50c02000, layer_5_input_32, 30);
  memcpy32((uint32_t *) 0x50c0a000, layer_5_input_36, 30);
  memcpy32((uint32_t *) 0x50c12000, layer_5_input_40, 30);
  memcpy32((uint32_t *) 0x50c1a000, layer_5_input_44, 30);
  memcpy32((uint32_t *) 0x51002000, layer_5_input_48, 30);
  memcpy32((uint32_t *) 0x5100a000, layer_5_input_52, 30);
  memcpy32((uint32_t *) 0x51012000, layer_5_input_56, 30);
  memcpy32((uint32_t *) 0x5101a000, layer_5_input_60, 30);

 }
void load_input_6 ( uint32_t * layer_6_input_0,uint32_t * layer_6_input_4,uint32_t * layer_6_input_8,uint32_t * layer_6_input_12,uint32_t * layer_6_input_16,uint32_t * layer_6_input_20,uint32_t * layer_6_input_24,uint32_t * layer_6_input_28,uint32_t * layer_6_input_32,uint32_t * layer_6_input_36,uint32_t * layer_6_input_40,uint32_t * layer_6_input_44 )
{ 
  memcpy32((uint32_t *) 0x50400000, layer_6_input_0, 56);
  memcpy32((uint32_t *) 0x50408000, layer_6_input_4, 56);
  memcpy32((uint32_t *) 0x50410000, layer_6_input_8, 56);
  memcpy32((uint32_t *) 0x50418000, layer_6_input_12, 56);
  memcpy32((uint32_t *) 0x50800000, layer_6_input_16, 56);
  memcpy32((uint32_t *) 0x50808000, layer_6_input_20, 56);
  memcpy32((uint32_t *) 0x50810000, layer_6_input_24, 56);
  memcpy32((uint32_t *) 0x50818000, layer_6_input_28, 56);
  memcpy32((uint32_t *) 0x50c00000, layer_6_input_32, 56);
  memcpy32((uint32_t *) 0x50c08000, layer_6_input_36, 56);
  memcpy32((uint32_t *) 0x50c10000, layer_6_input_40, 56);
  memcpy32((uint32_t *) 0x50c18000, layer_6_input_44, 56);

 }
void load_input_7 ( uint32_t * layer_7_input_0,uint32_t * layer_7_input_4,uint32_t * layer_7_input_8,uint32_t * layer_7_input_12,uint32_t * layer_7_input_16,uint32_t * layer_7_input_20,uint32_t * layer_7_input_24,uint32_t * layer_7_input_28,uint32_t * layer_7_input_32,uint32_t * layer_7_input_36,uint32_t * layer_7_input_40,uint32_t * layer_7_input_44,uint32_t * layer_7_input_48 )
{ 
  memcpy32((uint32_t *) 0x50402000, layer_7_input_0, 28);
  memcpy32((uint32_t *) 0x5040a000, layer_7_input_4, 28);
  memcpy32((uint32_t *) 0x50412000, layer_7_input_8, 28);
  memcpy32((uint32_t *) 0x5041a000, layer_7_input_12, 28);
  memcpy32((uint32_t *) 0x50802000, layer_7_input_16, 28);
  memcpy32((uint32_t *) 0x5080a000, layer_7_input_20, 28);
  memcpy32((uint32_t *) 0x50812000, layer_7_input_24, 28);
  memcpy32((uint32_t *) 0x5081a000, layer_7_input_28, 28);
  memcpy32((uint32_t *) 0x50c02000, layer_7_input_32, 28);
  memcpy32((uint32_t *) 0x50c0a000, layer_7_input_36, 28);
  memcpy32((uint32_t *) 0x50c12000, layer_7_input_40, 28);
  memcpy32((uint32_t *) 0x50c1a000, layer_7_input_44, 28);
*((volatile uint32_t *) 0x51002000) =layer_7_input_48[0];
*((volatile uint32_t *) 0x51002008) =layer_7_input_48[1];
*((volatile uint32_t *) 0x51002010) =layer_7_input_48[2];
*((volatile uint32_t *) 0x51002018) =layer_7_input_48[3];
*((volatile uint32_t *) 0x51002020) =layer_7_input_48[4];
*((volatile uint32_t *) 0x51002028) =layer_7_input_48[5];
*((volatile uint32_t *) 0x51002030) =layer_7_input_48[6];
*((volatile uint32_t *) 0x51002038) =layer_7_input_48[7];
*((volatile uint32_t *) 0x51002040) =layer_7_input_48[8];
*((volatile uint32_t *) 0x51002048) =layer_7_input_48[9];
*((volatile uint32_t *) 0x51002050) =layer_7_input_48[10];
*((volatile uint32_t *) 0x51002058) =layer_7_input_48[11];
*((volatile uint32_t *) 0x51002060) =layer_7_input_48[12];
*((volatile uint32_t *) 0x51002068) =layer_7_input_48[13];

 }
void load_input_8 ( uint32_t * layer_8_input_0,uint32_t * layer_8_input_4,uint32_t * layer_8_input_8,uint32_t * layer_8_input_12,uint32_t * layer_8_input_16,uint32_t * layer_8_input_20,uint32_t * layer_8_input_24,uint32_t * layer_8_input_28,uint32_t * layer_8_input_32,uint32_t * layer_8_input_36,uint32_t * layer_8_input_40,uint32_t * layer_8_input_44,uint32_t * layer_8_input_48,uint32_t * layer_8_input_52,uint32_t * layer_8_input_56,uint32_t * layer_8_input_60 )
{ 
  memcpy32((uint32_t *) 0x50400000, layer_8_input_0, 4);
  memcpy32((uint32_t *) 0x50408000, layer_8_input_4, 4);
  memcpy32((uint32_t *) 0x50410000, layer_8_input_8, 4);
  memcpy32((uint32_t *) 0x50418000, layer_8_input_12, 4);
  memcpy32((uint32_t *) 0x50800000, layer_8_input_16, 4);
  memcpy32((uint32_t *) 0x50808000, layer_8_input_20, 4);
  memcpy32((uint32_t *) 0x50810000, layer_8_input_24, 4);
  memcpy32((uint32_t *) 0x50818000, layer_8_input_28, 4);
  memcpy32((uint32_t *) 0x50c00000, layer_8_input_32, 4);
  memcpy32((uint32_t *) 0x50c08000, layer_8_input_36, 4);
  memcpy32((uint32_t *) 0x50c10000, layer_8_input_40, 4);
  memcpy32((uint32_t *) 0x50c18000, layer_8_input_44, 4);
  memcpy32((uint32_t *) 0x51000000, layer_8_input_48, 4);
  memcpy32((uint32_t *) 0x51008000, layer_8_input_52, 4);
  memcpy32((uint32_t *) 0x51010000, layer_8_input_56, 4);
  memcpy32((uint32_t *) 0x51018000, layer_8_input_60, 4);

 }
void copy_output_0 ( uint32_t * layer_0_output_0,uint32_t * layer_0_output_4,uint32_t * layer_0_output_8,uint32_t * layer_0_output_12,uint32_t * layer_0_output_16,uint32_t * layer_0_output_20,uint32_t * layer_0_output_24,uint32_t * layer_0_output_28,uint32_t * layer_0_output_32,uint32_t * layer_0_output_36,uint32_t * layer_0_output_40,uint32_t * layer_0_output_44,uint32_t * layer_0_output_48 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50402000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5040a000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50412000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5041a000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50802000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5080a000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50812000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5081a000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c02000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c0a000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c12000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c1a000;
    mask = 0xffffffff;
    len = 256;
    for (i = 0; i < len; i++)
    {
        layer_0_output_44[i] = (*addr++ & mask);
    }
layer_0_output_48[0] = *((volatile uint32_t *)0x51002000);
layer_0_output_48[1] = *((volatile uint32_t *)0x51002008);
layer_0_output_48[2] = *((volatile uint32_t *)0x51002010);
layer_0_output_48[3] = *((volatile uint32_t *)0x51002018);
layer_0_output_48[4] = *((volatile uint32_t *)0x51002020);
layer_0_output_48[5] = *((volatile uint32_t *)0x51002028);
layer_0_output_48[6] = *((volatile uint32_t *)0x51002030);
layer_0_output_48[7] = *((volatile uint32_t *)0x51002038);
layer_0_output_48[8] = *((volatile uint32_t *)0x51002040);
layer_0_output_48[9] = *((volatile uint32_t *)0x51002048);
layer_0_output_48[10] = *((volatile uint32_t *)0x51002050);
layer_0_output_48[11] = *((volatile uint32_t *)0x51002058);
layer_0_output_48[12] = *((volatile uint32_t *)0x51002060);
layer_0_output_48[13] = *((volatile uint32_t *)0x51002068);
layer_0_output_48[14] = *((volatile uint32_t *)0x51002070);
layer_0_output_48[15] = *((volatile uint32_t *)0x51002078);
layer_0_output_48[16] = *((volatile uint32_t *)0x51002080);
layer_0_output_48[17] = *((volatile uint32_t *)0x51002088);
layer_0_output_48[18] = *((volatile uint32_t *)0x51002090);
layer_0_output_48[19] = *((volatile uint32_t *)0x51002098);
layer_0_output_48[20] = *((volatile uint32_t *)0x510020a0);
layer_0_output_48[21] = *((volatile uint32_t *)0x510020a8);
layer_0_output_48[22] = *((volatile uint32_t *)0x510020b0);
layer_0_output_48[23] = *((volatile uint32_t *)0x510020b8);
layer_0_output_48[24] = *((volatile uint32_t *)0x510020c0);
layer_0_output_48[25] = *((volatile uint32_t *)0x510020c8);
layer_0_output_48[26] = *((volatile uint32_t *)0x510020d0);
layer_0_output_48[27] = *((volatile uint32_t *)0x510020d8);
layer_0_output_48[28] = *((volatile uint32_t *)0x510020e0);
layer_0_output_48[29] = *((volatile uint32_t *)0x510020e8);
layer_0_output_48[30] = *((volatile uint32_t *)0x510020f0);
layer_0_output_48[31] = *((volatile uint32_t *)0x510020f8);
layer_0_output_48[32] = *((volatile uint32_t *)0x51002100);
layer_0_output_48[33] = *((volatile uint32_t *)0x51002108);
layer_0_output_48[34] = *((volatile uint32_t *)0x51002110);
layer_0_output_48[35] = *((volatile uint32_t *)0x51002118);
layer_0_output_48[36] = *((volatile uint32_t *)0x51002120);
layer_0_output_48[37] = *((volatile uint32_t *)0x51002128);
layer_0_output_48[38] = *((volatile uint32_t *)0x51002130);
layer_0_output_48[39] = *((volatile uint32_t *)0x51002138);
layer_0_output_48[40] = *((volatile uint32_t *)0x51002140);
layer_0_output_48[41] = *((volatile uint32_t *)0x51002148);
layer_0_output_48[42] = *((volatile uint32_t *)0x51002150);
layer_0_output_48[43] = *((volatile uint32_t *)0x51002158);
layer_0_output_48[44] = *((volatile uint32_t *)0x51002160);
layer_0_output_48[45] = *((volatile uint32_t *)0x51002168);
layer_0_output_48[46] = *((volatile uint32_t *)0x51002170);
layer_0_output_48[47] = *((volatile uint32_t *)0x51002178);
layer_0_output_48[48] = *((volatile uint32_t *)0x51002180);
layer_0_output_48[49] = *((volatile uint32_t *)0x51002188);
layer_0_output_48[50] = *((volatile uint32_t *)0x51002190);
layer_0_output_48[51] = *((volatile uint32_t *)0x51002198);
layer_0_output_48[52] = *((volatile uint32_t *)0x510021a0);
layer_0_output_48[53] = *((volatile uint32_t *)0x510021a8);
layer_0_output_48[54] = *((volatile uint32_t *)0x510021b0);
layer_0_output_48[55] = *((volatile uint32_t *)0x510021b8);
layer_0_output_48[56] = *((volatile uint32_t *)0x510021c0);
layer_0_output_48[57] = *((volatile uint32_t *)0x510021c8);
layer_0_output_48[58] = *((volatile uint32_t *)0x510021d0);
layer_0_output_48[59] = *((volatile uint32_t *)0x510021d8);
layer_0_output_48[60] = *((volatile uint32_t *)0x510021e0);
layer_0_output_48[61] = *((volatile uint32_t *)0x510021e8);
layer_0_output_48[62] = *((volatile uint32_t *)0x510021f0);
layer_0_output_48[63] = *((volatile uint32_t *)0x510021f8);
layer_0_output_48[64] = *((volatile uint32_t *)0x51002200);
layer_0_output_48[65] = *((volatile uint32_t *)0x51002208);
layer_0_output_48[66] = *((volatile uint32_t *)0x51002210);
layer_0_output_48[67] = *((volatile uint32_t *)0x51002218);
layer_0_output_48[68] = *((volatile uint32_t *)0x51002220);
layer_0_output_48[69] = *((volatile uint32_t *)0x51002228);
layer_0_output_48[70] = *((volatile uint32_t *)0x51002230);
layer_0_output_48[71] = *((volatile uint32_t *)0x51002238);
layer_0_output_48[72] = *((volatile uint32_t *)0x51002240);
layer_0_output_48[73] = *((volatile uint32_t *)0x51002248);
layer_0_output_48[74] = *((volatile uint32_t *)0x51002250);
layer_0_output_48[75] = *((volatile uint32_t *)0x51002258);
layer_0_output_48[76] = *((volatile uint32_t *)0x51002260);
layer_0_output_48[77] = *((volatile uint32_t *)0x51002268);
layer_0_output_48[78] = *((volatile uint32_t *)0x51002270);
layer_0_output_48[79] = *((volatile uint32_t *)0x51002278);
layer_0_output_48[80] = *((volatile uint32_t *)0x51002280);
layer_0_output_48[81] = *((volatile uint32_t *)0x51002288);
layer_0_output_48[82] = *((volatile uint32_t *)0x51002290);
layer_0_output_48[83] = *((volatile uint32_t *)0x51002298);
layer_0_output_48[84] = *((volatile uint32_t *)0x510022a0);
layer_0_output_48[85] = *((volatile uint32_t *)0x510022a8);
layer_0_output_48[86] = *((volatile uint32_t *)0x510022b0);
layer_0_output_48[87] = *((volatile uint32_t *)0x510022b8);
layer_0_output_48[88] = *((volatile uint32_t *)0x510022c0);
layer_0_output_48[89] = *((volatile uint32_t *)0x510022c8);
layer_0_output_48[90] = *((volatile uint32_t *)0x510022d0);
layer_0_output_48[91] = *((volatile uint32_t *)0x510022d8);
layer_0_output_48[92] = *((volatile uint32_t *)0x510022e0);
layer_0_output_48[93] = *((volatile uint32_t *)0x510022e8);
layer_0_output_48[94] = *((volatile uint32_t *)0x510022f0);
layer_0_output_48[95] = *((volatile uint32_t *)0x510022f8);
layer_0_output_48[96] = *((volatile uint32_t *)0x51002300);
layer_0_output_48[97] = *((volatile uint32_t *)0x51002308);
layer_0_output_48[98] = *((volatile uint32_t *)0x51002310);
layer_0_output_48[99] = *((volatile uint32_t *)0x51002318);
layer_0_output_48[100] = *((volatile uint32_t *)0x51002320);
layer_0_output_48[101] = *((volatile uint32_t *)0x51002328);
layer_0_output_48[102] = *((volatile uint32_t *)0x51002330);
layer_0_output_48[103] = *((volatile uint32_t *)0x51002338);
layer_0_output_48[104] = *((volatile uint32_t *)0x51002340);
layer_0_output_48[105] = *((volatile uint32_t *)0x51002348);
layer_0_output_48[106] = *((volatile uint32_t *)0x51002350);
layer_0_output_48[107] = *((volatile uint32_t *)0x51002358);
layer_0_output_48[108] = *((volatile uint32_t *)0x51002360);
layer_0_output_48[109] = *((volatile uint32_t *)0x51002368);
layer_0_output_48[110] = *((volatile uint32_t *)0x51002370);
layer_0_output_48[111] = *((volatile uint32_t *)0x51002378);
layer_0_output_48[112] = *((volatile uint32_t *)0x51002380);
layer_0_output_48[113] = *((volatile uint32_t *)0x51002388);
layer_0_output_48[114] = *((volatile uint32_t *)0x51002390);
layer_0_output_48[115] = *((volatile uint32_t *)0x51002398);
layer_0_output_48[116] = *((volatile uint32_t *)0x510023a0);
layer_0_output_48[117] = *((volatile uint32_t *)0x510023a8);
layer_0_output_48[118] = *((volatile uint32_t *)0x510023b0);
layer_0_output_48[119] = *((volatile uint32_t *)0x510023b8);
layer_0_output_48[120] = *((volatile uint32_t *)0x510023c0);
layer_0_output_48[121] = *((volatile uint32_t *)0x510023c8);
layer_0_output_48[122] = *((volatile uint32_t *)0x510023d0);
layer_0_output_48[123] = *((volatile uint32_t *)0x510023d8);
layer_0_output_48[124] = *((volatile uint32_t *)0x510023e0);
layer_0_output_48[125] = *((volatile uint32_t *)0x510023e8);
layer_0_output_48[126] = *((volatile uint32_t *)0x510023f0);
layer_0_output_48[127] = *((volatile uint32_t *)0x510023f8);

}
void copy_output_1 ( uint32_t * layer_1_output_0,uint32_t * layer_1_output_4,uint32_t * layer_1_output_8,uint32_t * layer_1_output_12,uint32_t * layer_1_output_16,uint32_t * layer_1_output_20,uint32_t * layer_1_output_24,uint32_t * layer_1_output_28,uint32_t * layer_1_output_32,uint32_t * layer_1_output_36,uint32_t * layer_1_output_40,uint32_t * layer_1_output_44 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50400000;
    mask = 0xffffffff;
    len = 252;
    for (i = 0; i < len; i++)
    {
        layer_1_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50408000;
    mask = 0xffffffff;
    len = 252;
    for (i = 0; i < len; i++)
    {
        layer_1_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50410000;
    mask = 0xffffffff;
    len = 252;
    for (i = 0; i < len; i++)
    {
        layer_1_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50418000;
    mask = 0xffffffff;
    len = 252;
    for (i = 0; i < len; i++)
    {
        layer_1_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50800000;
    mask = 0xffffffff;
    len = 252;
    for (i = 0; i < len; i++)
    {
        layer_1_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50808000;
    mask = 0xffffffff;
    len = 252;
    for (i = 0; i < len; i++)
    {
        layer_1_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50810000;
    mask = 0xffffffff;
    len = 252;
    for (i = 0; i < len; i++)
    {
        layer_1_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50818000;
    mask = 0xffffffff;
    len = 252;
    for (i = 0; i < len; i++)
    {
        layer_1_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c00000;
    mask = 0xffffffff;
    len = 252;
    for (i = 0; i < len; i++)
    {
        layer_1_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c08000;
    mask = 0xffffffff;
    len = 252;
    for (i = 0; i < len; i++)
    {
        layer_1_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c10000;
    mask = 0xffffffff;
    len = 252;
    for (i = 0; i < len; i++)
    {
        layer_1_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c18000;
    mask = 0xffffffff;
    len = 252;
    for (i = 0; i < len; i++)
    {
        layer_1_output_44[i] = (*addr++ & mask);
    }

}
void copy_output_2 ( uint32_t * layer_2_output_0,uint32_t * layer_2_output_4,uint32_t * layer_2_output_8,uint32_t * layer_2_output_12,uint32_t * layer_2_output_16,uint32_t * layer_2_output_20,uint32_t * layer_2_output_24,uint32_t * layer_2_output_28,uint32_t * layer_2_output_32,uint32_t * layer_2_output_36,uint32_t * layer_2_output_40,uint32_t * layer_2_output_44,uint32_t * layer_2_output_48,uint32_t * layer_2_output_52,uint32_t * layer_2_output_56,uint32_t * layer_2_output_60 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50402000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5040a000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50412000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5041a000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50802000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5080a000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50812000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5081a000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c02000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c0a000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c12000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c1a000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_44[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51002000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_48[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5100a000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_52[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51012000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_56[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5101a000;
    mask = 0xffffffff;
    len = 63;
    for (i = 0; i < len; i++)
    {
        layer_2_output_60[i] = (*addr++ & mask);
    }

}
void copy_output_3 ( uint32_t * layer_3_output_0,uint32_t * layer_3_output_4,uint32_t * layer_3_output_8,uint32_t * layer_3_output_12,uint32_t * layer_3_output_16,uint32_t * layer_3_output_20,uint32_t * layer_3_output_24,uint32_t * layer_3_output_28,uint32_t * layer_3_output_32,uint32_t * layer_3_output_36,uint32_t * layer_3_output_40,uint32_t * layer_3_output_44 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50400000;
    mask = 0xffffffff;
    len = 61;
    for (i = 0; i < len; i++)
    {
        layer_3_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50408000;
    mask = 0xffffffff;
    len = 61;
    for (i = 0; i < len; i++)
    {
        layer_3_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50410000;
    mask = 0xffffffff;
    len = 61;
    for (i = 0; i < len; i++)
    {
        layer_3_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50418000;
    mask = 0xffffffff;
    len = 61;
    for (i = 0; i < len; i++)
    {
        layer_3_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50800000;
    mask = 0xffffffff;
    len = 61;
    for (i = 0; i < len; i++)
    {
        layer_3_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50808000;
    mask = 0xffffffff;
    len = 61;
    for (i = 0; i < len; i++)
    {
        layer_3_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50810000;
    mask = 0xffffffff;
    len = 61;
    for (i = 0; i < len; i++)
    {
        layer_3_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50818000;
    mask = 0xffffffff;
    len = 61;
    for (i = 0; i < len; i++)
    {
        layer_3_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c00000;
    mask = 0xffffffff;
    len = 61;
    for (i = 0; i < len; i++)
    {
        layer_3_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c08000;
    mask = 0xffffffff;
    len = 61;
    for (i = 0; i < len; i++)
    {
        layer_3_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c10000;
    mask = 0xffffffff;
    len = 61;
    for (i = 0; i < len; i++)
    {
        layer_3_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c18000;
    mask = 0xffffffff;
    len = 61;
    for (i = 0; i < len; i++)
    {
        layer_3_output_44[i] = (*addr++ & mask);
    }

}
void copy_output_4 ( uint32_t * layer_4_output_0,uint32_t * layer_4_output_4,uint32_t * layer_4_output_8,uint32_t * layer_4_output_12,uint32_t * layer_4_output_16,uint32_t * layer_4_output_20,uint32_t * layer_4_output_24,uint32_t * layer_4_output_28,uint32_t * layer_4_output_32,uint32_t * layer_4_output_36,uint32_t * layer_4_output_40,uint32_t * layer_4_output_44,uint32_t * layer_4_output_48,uint32_t * layer_4_output_52,uint32_t * layer_4_output_56,uint32_t * layer_4_output_60 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50402000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5040a000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50412000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5041a000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50802000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5080a000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50812000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5081a000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c02000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c0a000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c12000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c1a000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_44[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51002000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_48[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5100a000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_52[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51012000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_56[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5101a000;
    mask = 0xffffffff;
    len = 30;
    for (i = 0; i < len; i++)
    {
        layer_4_output_60[i] = (*addr++ & mask);
    }

}
void copy_output_5 ( uint32_t * layer_5_output_0,uint32_t * layer_5_output_4,uint32_t * layer_5_output_8,uint32_t * layer_5_output_12,uint32_t * layer_5_output_16,uint32_t * layer_5_output_20,uint32_t * layer_5_output_24,uint32_t * layer_5_output_28,uint32_t * layer_5_output_32,uint32_t * layer_5_output_36,uint32_t * layer_5_output_40,uint32_t * layer_5_output_44 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50400000;
    mask = 0xffffffff;
    len = 56;
    for (i = 0; i < len; i++)
    {
        layer_5_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50408000;
    mask = 0xffffffff;
    len = 56;
    for (i = 0; i < len; i++)
    {
        layer_5_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50410000;
    mask = 0xffffffff;
    len = 56;
    for (i = 0; i < len; i++)
    {
        layer_5_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50418000;
    mask = 0xffffffff;
    len = 56;
    for (i = 0; i < len; i++)
    {
        layer_5_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50800000;
    mask = 0xffffffff;
    len = 56;
    for (i = 0; i < len; i++)
    {
        layer_5_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50808000;
    mask = 0xffffffff;
    len = 56;
    for (i = 0; i < len; i++)
    {
        layer_5_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50810000;
    mask = 0xffffffff;
    len = 56;
    for (i = 0; i < len; i++)
    {
        layer_5_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50818000;
    mask = 0xffffffff;
    len = 56;
    for (i = 0; i < len; i++)
    {
        layer_5_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c00000;
    mask = 0xffffffff;
    len = 56;
    for (i = 0; i < len; i++)
    {
        layer_5_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c08000;
    mask = 0xffffffff;
    len = 56;
    for (i = 0; i < len; i++)
    {
        layer_5_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c10000;
    mask = 0xffffffff;
    len = 56;
    for (i = 0; i < len; i++)
    {
        layer_5_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c18000;
    mask = 0xffffffff;
    len = 56;
    for (i = 0; i < len; i++)
    {
        layer_5_output_44[i] = (*addr++ & mask);
    }

}
void copy_output_6 ( uint32_t * layer_6_output_0,uint32_t * layer_6_output_4,uint32_t * layer_6_output_8,uint32_t * layer_6_output_12,uint32_t * layer_6_output_16,uint32_t * layer_6_output_20,uint32_t * layer_6_output_24,uint32_t * layer_6_output_28,uint32_t * layer_6_output_32,uint32_t * layer_6_output_36,uint32_t * layer_6_output_40,uint32_t * layer_6_output_44,uint32_t * layer_6_output_48 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50402000;
    mask = 0xffffffff;
    len = 28;
    for (i = 0; i < len; i++)
    {
        layer_6_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5040a000;
    mask = 0xffffffff;
    len = 28;
    for (i = 0; i < len; i++)
    {
        layer_6_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50412000;
    mask = 0xffffffff;
    len = 28;
    for (i = 0; i < len; i++)
    {
        layer_6_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5041a000;
    mask = 0xffffffff;
    len = 28;
    for (i = 0; i < len; i++)
    {
        layer_6_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50802000;
    mask = 0xffffffff;
    len = 28;
    for (i = 0; i < len; i++)
    {
        layer_6_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5080a000;
    mask = 0xffffffff;
    len = 28;
    for (i = 0; i < len; i++)
    {
        layer_6_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50812000;
    mask = 0xffffffff;
    len = 28;
    for (i = 0; i < len; i++)
    {
        layer_6_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x5081a000;
    mask = 0xffffffff;
    len = 28;
    for (i = 0; i < len; i++)
    {
        layer_6_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c02000;
    mask = 0xffffffff;
    len = 28;
    for (i = 0; i < len; i++)
    {
        layer_6_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c0a000;
    mask = 0xffffffff;
    len = 28;
    for (i = 0; i < len; i++)
    {
        layer_6_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c12000;
    mask = 0xffffffff;
    len = 28;
    for (i = 0; i < len; i++)
    {
        layer_6_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c1a000;
    mask = 0xffffffff;
    len = 28;
    for (i = 0; i < len; i++)
    {
        layer_6_output_44[i] = (*addr++ & mask);
    }
layer_6_output_48[0] = *((volatile uint32_t *)0x51002000);
layer_6_output_48[1] = *((volatile uint32_t *)0x51002008);
layer_6_output_48[2] = *((volatile uint32_t *)0x51002010);
layer_6_output_48[3] = *((volatile uint32_t *)0x51002018);
layer_6_output_48[4] = *((volatile uint32_t *)0x51002020);
layer_6_output_48[5] = *((volatile uint32_t *)0x51002028);
layer_6_output_48[6] = *((volatile uint32_t *)0x51002030);
layer_6_output_48[7] = *((volatile uint32_t *)0x51002038);
layer_6_output_48[8] = *((volatile uint32_t *)0x51002040);
layer_6_output_48[9] = *((volatile uint32_t *)0x51002048);
layer_6_output_48[10] = *((volatile uint32_t *)0x51002050);
layer_6_output_48[11] = *((volatile uint32_t *)0x51002058);
layer_6_output_48[12] = *((volatile uint32_t *)0x51002060);
layer_6_output_48[13] = *((volatile uint32_t *)0x51002068);

}
void copy_output_7 ( uint32_t * layer_7_output_0,uint32_t * layer_7_output_4,uint32_t * layer_7_output_8,uint32_t * layer_7_output_12,uint32_t * layer_7_output_16,uint32_t * layer_7_output_20,uint32_t * layer_7_output_24,uint32_t * layer_7_output_28,uint32_t * layer_7_output_32,uint32_t * layer_7_output_36,uint32_t * layer_7_output_40,uint32_t * layer_7_output_44,uint32_t * layer_7_output_48,uint32_t * layer_7_output_52,uint32_t * layer_7_output_56,uint32_t * layer_7_output_60 )
{
    int i;
    uint32_t mask, len;
    uint32_t *addr;
        addr = (uint32_t *) 0x50400000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_0[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50408000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_4[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50410000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_8[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50418000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_12[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50800000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_16[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50808000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_20[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50810000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_24[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50818000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_28[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c00000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_32[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c08000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_36[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c10000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_40[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x50c18000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_44[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51000000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_48[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51008000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_52[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51010000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_56[i] = (*addr++ & mask);
    }
    addr = (uint32_t *) 0x51018000;
    mask = 0xffffffff;
    len = 4;
    for (i = 0; i < len; i++)
    {
        layer_7_output_60[i] = (*addr++ & mask);
    }

}
