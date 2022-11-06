#include <math.h>
#include <complex.h>
#include "fft.h"
#include "chameleon.h"
#include "sampledata_tier2.h"
#include "app_debug_logger.h"


// we operate in half 0.25 s file because of the memory constraints.

#define RATE 16000
#define PARTITIONS 2
#define SAMPLE_COUNT (4096 / PARTITIONS) //original sample = 4096 (1 sec)
#define ARRAY_LEN 256
#define START_BAND 300
#define END_BAND 3000
#define SPEECH_ENERGY_THRESHOLD 0.6

static const uint32_t input_0[] = SAMPLE_INPUT_0;
static const uint32_t input_4[] = SAMPLE_INPUT_4;
static const uint32_t input_8[] = SAMPLE_INPUT_8;
static const uint32_t input_12[] = SAMPLE_INPUT_12;
static const uint32_t input_16[] = SAMPLE_INPUT_16;
static const uint32_t input_20[] = SAMPLE_INPUT_20;
static const uint32_t input_24[] = SAMPLE_INPUT_24;
static const uint32_t input_28[] = SAMPLE_INPUT_28;
static const uint32_t input_32[] = SAMPLE_INPUT_32;
static const uint32_t input_36[] = SAMPLE_INPUT_36;
static const uint32_t input_40[] = SAMPLE_INPUT_40;
static const uint32_t input_44[] = SAMPLE_INPUT_44;
static const uint32_t input_48[] = SAMPLE_INPUT_48;
static const uint32_t input_52[] = SAMPLE_INPUT_52;
static const uint32_t input_56[] = SAMPLE_INPUT_56;
static const uint32_t input_60[] = SAMPLE_INPUT_60;

__shared(   uint32_t input_data[SAMPLE_COUNT];
            uint8_t partition_num;
            uint32_t count;)

TASK(task_init);
TASK(task_detranspose_partition);
TASK(task_vad_partition);

// called at the very first boot
void tier2_init()
{
    // this is just for debugging
     __sram_vars.count = 0;

    // create a 2nd level tier
    __CREATE_TIER(2, task_init);
}

TASK(task_init) {
    APP_LOG_INFO("task_init");
    __SET(partition_num, 0);
    NEXT_TASK(task_detranspose_partition);
}

TASK(task_detranspose_partition)
{
    uint8_t curr_partition = __GET(partition_num);
    uint32_t *input = __GET(input_data);
    
    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*0) + i;
        input[ind] = input_0[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*1) + i;
        input[ind] = input_4[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*2) + i;
        input[ind] = input_8[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*3) + i;
        input[ind] = input_12[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*4) + i;
        input[ind] = input_16[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*5) + i;
        input[ind] = input_20[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*6) + i;
        input[ind] = input_24[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*7) + i;
        input[ind] = input_28[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*8) + i;
        input[ind] = input_32[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*9) + i;
        input[ind] = input_36[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*10) + i;
        input[ind] = input_40[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*11) + i;
        input[ind] = input_44[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*12) + i;
        input[ind] = input_48[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*13) + i;
        input[ind] = input_52[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*14) + i;
        input[ind] = input_56[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    for(int i = 0; i < (ARRAY_LEN/PARTITIONS); i++) {
        int ind = ((ARRAY_LEN/PARTITIONS)*15) + i;
        input[ind] = input_60[((ARRAY_LEN/PARTITIONS) * curr_partition) + i];
    }

    __SET(partition_num, __GET(partition_num) + 1);
    
    NEXT_TASK(task_vad_partition);
}



TASK(task_vad_partition)
{
    uint32_t *input = __GET(input_data);
    float complex fft_out[SAMPLE_COUNT];

    for(int i = 0; i < SAMPLE_COUNT; i++) {
        fft_out[i] = (float complex) input[i];
    }

    float data_energy[SAMPLE_COUNT];
    fft(fft_out, SAMPLE_COUNT);
    for(int i = 0; i < SAMPLE_COUNT; i++) {
        data_energy[i] = abs(fft_out[i]) * abs(fft_out[i]);
    }

    // fftfreq
    float val = 3.90625; // 1.0 / ((SAMPLE_COUNT*2) * (1/RATE));
    int data_freq [SAMPLE_COUNT];
    int N = 1024; //(n-1)/2 + 1
    for(int i = 0; i < N; i++) {
        data_freq[i] = val*i;
    }
    
    for(int i = N; i< SAMPLE_COUNT; i++) {
        data_freq[i] = val*(i-SAMPLE_COUNT);
    }
  
    // connect energy with frequency
    bool flag [4000] = {false};
    float energy_freq [4000];
    for(int i = 0; i < SAMPLE_COUNT; i++) {
        if (flag[abs(data_freq[i])] == false) {
            energy_freq[abs(data_freq[i])] = data_energy[i] *2;
            flag[abs(data_freq[i])] = true;
        }
    }

    float sum_voice_energy = 0.0;
    float sum_full_energy = 0.0;
    for(int i = 0; i < 4000; i++) {
        sum_full_energy += energy_freq[i];
        if(i > START_BAND && i < END_BAND) {
            sum_voice_energy += energy_freq[i];
        }
    }

    float speech_ratio = sum_voice_energy/sum_full_energy;
    if (speech_ratio > SPEECH_ENERGY_THRESHOLD) {
        printf("SPEECH\n");
    }
    else {
        printf("NOT SPEECH\n");
    }

    if (__GET(partition_num) < PARTITIONS) {
        NEXT_TASK(task_detranspose_partition);
    }

    __SET(count, __GET(count) + 1);
    printf("tier 2 count: %u\n", __GET(count));

    NEXT_TASK(task_init);
}


