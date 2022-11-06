#include <math.h>
#include "chameleon.h"
#include "sampledata_tier3.h"
#include "app_debug_logger.h"


#define LENGTH 1024

static const uint32_t input_0[] = SAMPLE_INPUT_0;

//Global variables go here
__shared( uint32_t count;)

TASK(task_init);
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
  NEXT_TASK(task_isEmpty_STD);
}

TASK(task_isEmpty_STD)
{
  double sum = 0.0;
  double SD = 0.0;
  int i;
  for (i = 0; i < LENGTH; ++i) {
    sum += input_0[i];
  }
  double mean = sum/LENGTH;

  for (i = 0; i < LENGTH; ++i) {
    SD += pow(input_0[i] - mean, 2);
  }
  double std = sqrt(SD / LENGTH);

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

