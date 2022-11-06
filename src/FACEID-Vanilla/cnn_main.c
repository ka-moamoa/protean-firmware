#include "chameleon.h"
#include "cnn.h"
#include "cnn_helper.h"
#include "app_debug_logger.h"


volatile uint32_t cnn_time; // Stopwatch

static const uint32_t layer_0_input_0[] = SAMPLE_INPUT_0;

//Global variables go here
__shared( uint32_t count;)

void fail(void)
{
  printf("\n*** FAIL ***\n\n");
  while (1);
}

/***** Definitions *****/
TASK(task_init);
TASK(task_process_layer_0);


// called at the very first boot
void tier1_init()
{
  // this is just for debugging
  __sram_vars.count = 0;

  // create a 1st level tier
  __CREATE_TIER(1, task_init);
}

void __app_init(){
    tier1_init();
}

void __app_reboot()
{
    __asm volatile ("nop");
}

TASK(task_init) {
    APP_LOG_DEBUG("task_init");
    NEXT_TASK(task_process_layer_0);
}



TASK (task_process_layer_0)
{
  int i;
  int digs, tens;
  static int32_t ml_data[CNN_NUM_OUTPUTS];
  static q15_t ml_softmax[CNN_NUM_OUTPUTS];

  // Enable peripheral, enable CNN interrupt, turn on CNN clock
  // CNN clock: 50 MHz div 1
  cnn_enable(MXC_S_GCR_PCLKDIV_CNNCLKSEL_PCLK, MXC_S_GCR_PCLKDIV_CNNCLKDIV_DIV1);

  //printf("\n*** task_process_layer_0 ***\n");

  cnn_init(); // Bring state machine into consistent state
  cnn_load_weights(); // Load kernels
  cnn_load_bias(); // Not used in this network
  cnn_configure(); // Configure state machine
  cnn_start(); // Start CNN processing

  load_input_0(layer_0_input_0); // Load data input via FIFO

  SCB->SCR &= ~SCB_SCR_SLEEPDEEP_Msk; // SLEEPDEEP=0
  while (cnn_time == 0)
    __WFI(); // Wait for CNN

  if (check_output() != CNN_OK) fail();
  cnn_unload((uint32_t *) ml_data);

  cnn_disable(); // Shut down CNN clock, disable peripheral

  softmax_q17p14_q15((const q31_t *) ml_data, CNN_NUM_OUTPUTS, ml_softmax);

#ifdef CNN_INFERENCE_TIMER
  // printf("Approximate data loading and inference time: %u us\n\n", cnn_time);
#endif


  printf("Classification results:\n");
  for (i = 50; i < 70; i++) {
    digs = (1000 * ml_softmax[i] + 0x4000) >> 15;
    tens = digs % 10;
    digs = digs / 10;
    printf("[%7d] -> Class %d: %d.%d%%\n", ml_data[i], i, digs, tens);
  }

  __SET(count, __GET(count) + 1);
  printf("tier 1 count: %u\n", __GET(count));
  NEXT_TASK(task_init);
} 

