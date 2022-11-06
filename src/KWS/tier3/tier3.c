#include "chameleon.h"
#include "sampledata_tier3.h"
#include "app_debug_logger.h"


#define INPUT_LENGTH 256
#define WINDOW_LENGTH 8
#define SOUND_SEGMENTS 512
#define SPEECH_THRESHOLD 0.6


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

static uint32_t* input[16] = { (uint32_t*)&input_0, (uint32_t*)&input_4,(uint32_t*)&input_8,(uint32_t*)&input_12,(uint32_t*)&input_16,(uint32_t*)&input_20,(uint32_t*)&input_24,(uint32_t*)&input_28,(uint32_t*)&input_32,(uint32_t*)&input_36,(uint32_t*)&input_40,(uint32_t*)&input_44,(uint32_t*)&input_48,(uint32_t*)&input_52,(uint32_t*)&input_56,(uint32_t*)&input_60};


__shared( int segment_num;
          int isSound [SOUND_SEGMENTS];
          uint32_t count;)

TASK(task_init);
TASK(task_is_window_sound);
TASK(task_avg);

// called at the very first boot
void tier3_init()
{
  // this is just for debugging
  __sram_vars.count = 0;

  // create a 3rd level tier
  __CREATE_TIER(3, task_init);
}


TASK(task_init) {
  APP_LOG_INFO("task_init");
  __SET(segment_num, 0);
  NEXT_TASK(task_is_window_sound);
}

TASK(task_is_window_sound)
{  
  int start_ind = __GET(segment_num) * (INPUT_LENGTH/WINDOW_LENGTH);
  uint32_t *in = (uint32_t *)input[__GET(segment_num)];
  
  int ind = 0;
  int sum = 0;
  for(int i=0; i < INPUT_LENGTH ; i=i+WINDOW_LENGTH)
  {
    sum = 0;
    
    for(uint j=0; j< WINDOW_LENGTH; j++){
      sum = sum + abs(in[i+j]);
    }
    
    sum = sum / WINDOW_LENGTH;
    
    if (sum > 1000)
    {
      ind = start_ind + i/8;
      __SET(isSound[ind], 1);
    }
  }

  if(__GET(segment_num) < 15){
    __SET(segment_num, __GET(segment_num) + 1);
    NEXT_TASK(task_is_window_sound);
  }
  else {
    NEXT_TASK(task_avg);
  }
}

TASK(task_avg)
{
  float sum = 0;
  for (uint i=0; i < SOUND_SEGMENTS ; i++) {
    sum = sum + __GET(isSound[i]);
  }

  if ((sum / (float)SOUND_SEGMENTS) > SPEECH_THRESHOLD) {
    printf("SPEECH\n");
  }
  else {
    printf("NOT SPEECH\n");
  }

  __SET(count, __GET(count) + 1);
  printf("tier 3 count: %u\n", __GET(count));

  NEXT_TASK(task_init);
}


