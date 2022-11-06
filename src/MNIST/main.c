#include "chameleon.h"
#include "cnn.h"
#include "cnn_helper.h"
#include "app_debug_logger.h"

volatile uint32_t cnn_time; // Stopwatch
static const uint32_t input_0[] = SAMPLE_INPUT;

/***** Definitions *****/

/***** Globals *****/
__shared(uint32_t layer_0_output_4[784];
         uint32_t layer_0_output_8[784];
         uint32_t layer_1_output_4[256];
         uint32_t layer_1_output_8[256];
         uint32_t layer_2_output_4[16];
         uint32_t layer_2_output_8[16];
         int32_t ml_data[CNN_NUM_OUTPUTS_3];
         q15_t ml_softmax[CNN_NUM_OUTPUTS_3];
         uint32_t cnn_time;
         uint32_t count;)

void fail(void)
{
  printf("\n*** FAIL ***\n\n");
  while (1);
}

// Tasks.
TASK(task_init);
TASK(task_process_layer_0);
TASK(task_process_layer_1);
TASK(task_process_layer_2);
TASK(task_process_layer_3);
TASK(task_show_classification_results);

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

TASK(task_process_layer_0)
{
  //  printf("\n*** Layer 0 ***\n");
  // Enable peripheral, enable CNN interrupt, turn on CNN clock
  // CNN clock: 50 MHz div 1
  cnn_enable(MXC_S_GCR_PCLKDIV_CNNCLKSEL_PCLK, MXC_S_GCR_PCLKDIV_CNNCLKDIV_DIV1);
  cnn_init();           // Bring state machine into consistent state
  cnn_load_weights_0(); // Load kernels
  cnn_load_bias_0();
  cnn_configure_0();                          // Configure state machine
  load_input_0(input_0); // Load data input
  cnn_start();                                // Start CNN processing

  SCB->SCR &= ~SCB_SCR_SLEEPDEEP_Msk; // SLEEPDEEP=0
  while (cnn_time == 0)
    __WFI(); // Wait for CNN

  copy_output_0(__GET(layer_0_output_4), __GET(layer_0_output_8));
  
#ifdef CNN_INFERENCE_TIMER
  // printf("Approximate inference time: %u us\n", cnn_time);
#endif

  cnn_disable(); // Shut down CNN clock, disable peripheral*/
  NEXT_TASK(task_process_layer_1);
}

TASK(task_process_layer_1)
{
  // printf("\n*** Layer 1 ***\n");
  // Enable peripheral, enable CNN interrupt, turn on CNN clock
  // CNN clock: 50 MHz div 1
  cnn_enable(MXC_S_GCR_PCLKDIV_CNNCLKSEL_PCLK, MXC_S_GCR_PCLKDIV_CNNCLKDIV_DIV1);
  cnn_init();           // Bring state machine into consistent state
  cnn_load_weights_1(); // Load kernels
  cnn_load_bias_1();
  cnn_configure_1();                                                          // Configure state machine
  load_input_1(__GET(layer_0_output_4), __GET(layer_0_output_8)); // Load data input
  cnn_start();                                                                // Start CNN processing

  SCB->SCR &= ~SCB_SCR_SLEEPDEEP_Msk; // SLEEPDEEP=0
  while (cnn_time == 0)
    __WFI(); // Wait for CNN
  
  copy_output_1(__GET(layer_1_output_4), __GET(layer_1_output_8));
  
#ifdef CNN_INFERENCE_TIMER
  // printf("Approximate inference time: %u us\n", cnn_time);
#endif

  cnn_disable(); // Shut down CNN clock, disable peripheral
  NEXT_TASK(task_process_layer_2);
}

TASK(task_process_layer_2)
{
  // printf("\n*** Layer 2 ***\n");

  // Enable peripheral, enable CNN interrupt, turn on CNN clock
  // CNN clock: 50 MHz div 1
  cnn_enable(MXC_S_GCR_PCLKDIV_CNNCLKSEL_PCLK, MXC_S_GCR_PCLKDIV_CNNCLKDIV_DIV1);
  cnn_init();           // Bring state machine into consistent state
  cnn_load_weights_2(); // Load kernels
  cnn_load_bias_2();
  cnn_configure_2();                                                          // Configure state machine
  load_input_2(__GET(layer_1_output_4), __GET(layer_1_output_8)); // Load data input
  cnn_start();                                                                // Start CNN processing

  SCB->SCR &= ~SCB_SCR_SLEEPDEEP_Msk; // SLEEPDEEP=0
  while (cnn_time == 0)
    __WFI(); // Wait for CNN

  copy_output_2(__GET(layer_2_output_4), __GET(layer_2_output_8));

#ifdef CNN_INFERENCE_TIMER
  // printf("Approximate inference time: %u us\n", cnn_time);
#endif

  cnn_disable(); // Shut down CNN clock, disable peripheral
  NEXT_TASK(task_process_layer_3);
}

TASK(task_process_layer_3)
{
  // printf("\n*** Layer 3*** \n");

  // Enable peripheral, enable CNN interrupt, turn on CNN clock
  // CNN clock: 50 MHz div 1
  cnn_enable(MXC_S_GCR_PCLKDIV_CNNCLKSEL_PCLK, MXC_S_GCR_PCLKDIV_CNNCLKDIV_DIV1);
  cnn_init();           // Bring state machine into consistent state
  cnn_load_weights_3(); // Load kernels
  cnn_load_bias_3();
  cnn_configure_3();                                                          // Configure state machine
  load_input_3(__GET(layer_2_output_4), __GET(layer_2_output_8)); // Load data input
  cnn_start();                                                                // Start CNN processing

  SCB->SCR &= ~SCB_SCR_SLEEPDEEP_Msk; // SLEEPDEEP=0
  while (cnn_time == 0)
    __WFI(); // Wait for CNN

  if (check_output() != CNN_OK)
    fail();
  // printf("*** TEST PASSED!!! ***\n");

  // softmax_layer(); function inlined below
int32_t data[CNN_NUM_OUTPUTS_3];
q15_t softmax[CNN_NUM_OUTPUTS_3];

cnn_unload_3((uint32_t *) data);
softmax_q17p14_q15((const q31_t *)data, CNN_NUM_OUTPUTS_3, softmax);

int i=0;
for (i = 0; i < CNN_NUM_OUTPUTS_3; i++){
 __SET(ml_data[i],data[i]);
 __SET(ml_softmax[i],softmax[i]);
}
  
#ifdef CNN_INFERENCE_TIMER
  // printf("Approximate inference time: %u us\n", cnn_time);
#endif

  cnn_disable(); // Shut down CNN clock, disable peripheral
  NEXT_TASK(task_show_classification_results);
}

TASK(task_show_classification_results)
{
  int i;
  int digs, tens;
  q15_t tmp;
  printf("\nClassification results:\n");
  for (i = 0; i < CNN_NUM_OUTPUTS_3; i++)
  {
    tmp = __GET(ml_softmax[i]);
    digs = (1000 * tmp + 0x4000) >> 15;
    tens = digs % 10;
    digs = digs / 10;
    printf("[%7d] -> Class %d: %d.%d%%\n", tmp, i, digs, tens);
  }
  
  __SET(count, __GET(count) + 1);
  printf("tier 1 count: %u\n", __GET(count));
  NEXT_TASK(task_init);
}
