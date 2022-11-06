#include "chameleon.h"
#include "ebnn.h"
#include "model.h"
#include "sampledata_tier2.h"
#include "app_debug_logger.h"

static const uint32_t input[] = SAMPLE_INPUT_0;


//Global variables go here
__shared( uint8_t rgb_input[1024];
          uint8_t temp1[128];
          uint8_t temp2[128];
          uint32_t count;)

/***** Definitions *****/
TASK(task_init);
TASK(task_convert_rgb);
TASK(task_layer_0);
// TASK(task_layer_1);
TASK(task_convert_rgb);
TASK(task_classify);


// called at the very first boot
void tier2_init()
{
  // this is just for debugging
  __sram_vars.count = 0;

  // create a 2nd level tier
  __CREATE_TIER(2, task_init);
}

TASK(task_init)
{
  APP_LOG_INFO("task_init");
  NEXT_TASK(task_convert_rgb);
}


TASK(task_convert_rgb) 
{
  int i;
  for (i = 0; i < 1024; i++) {
    uint8_t r = ((input[i] & 0x000000ff) >> 0);
    uint8_t g = ((input[i] & 0x0000ff00) >> 8);
    uint8_t b = ((input[i] & 0x00ff0000) >> 16);

    uint8_t rgb = (r + g + b) / 3;

    __SET(rgb_input[i], rgb);
  }

  NEXT_TASK(task_layer_0);
}

TASK(task_layer_0) {
  l_b_linear_bn_bst0(__GET(rgb_input), __GET(temp1));
  NEXT_TASK(task_classify);
}

TASK(task_classify) 
{
  uint8_t inferred_class;
  l_b_linear_bn_softmax1(__GET(temp2), &inferred_class);
  printf("inferred class: %d\n", inferred_class);

  __SET(count, __GET(count) + 1);
  printf("tier 2 count: %u\n", __GET(count));
  NEXT_TASK(task_init);
}