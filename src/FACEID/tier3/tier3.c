#include <math.h>
#include "chameleon.h"
#include "sampledata_tier3.h"
#include "app_debug_logger.h"


#define ORIGINAL_IMAGE_SIZE 19200 // 120*160
#define SUBSAMPLED_IMAGE_SIZE 361 // 19*19

static const uint32_t input_0[] = SAMPLE_INPUT_0;

//Global variables go here
__shared( float bw_input[SUBSAMPLED_IMAGE_SIZE];
          uint32_t count;)

TASK(task_init);
TASK (task_subsample);
TASK(task_isEmpty_STD);

// called at the very first boot
void tier3_init()
{
  // this is just for debugging
  __sram_vars.count = 0;

  // create a 3rd level tier
  __CREATE_TIER(3, task_init);
}

TASK(task_init)
{
  APP_LOG_INFO("task_init");
  NEXT_TASK(task_subsample);
}

TASK (task_subsample)
{
  int i, j = 0;
  for (i = 52; i < ORIGINAL_IMAGE_SIZE - 53; i = i + 53) {
    float b = ((float)((input_0[i] & 0x000000ff) >> 0)) / 255.0;
    float g = ((float)((input_0[i] & 0x0000ff00) >> 8)) / 255.0;
    float r = ((float)((input_0[i] & 0x00ff0000) >> 16)) / 255.0;

    __SET(bw_input[j++], (r + g + b) / 3);
  }

  NEXT_TASK(task_isEmpty_STD);
} 

TASK(task_isEmpty_STD)
{
  double sum = 0.0;
  double SD = 0.0;
  int i;
  for (i = 0; i < SUBSAMPLED_IMAGE_SIZE; ++i) {
    sum += input_0[i];
  }
  double mean = sum/SUBSAMPLED_IMAGE_SIZE;

  for (i = 0; i < SUBSAMPLED_IMAGE_SIZE; ++i) {
    SD += pow(input_0[i] - mean, 2);
  }
  double std = sqrt(SD / SUBSAMPLED_IMAGE_SIZE);

  if(std< 1)
  {
    printf("blank image\n");
  }
  else{
    printf("valid image\n");
  }
  
  __SET(count, __GET(count) + 1);
  printf("tier 3 count: %u\n", __GET(count));
  NEXT_TASK(task_init);
}

