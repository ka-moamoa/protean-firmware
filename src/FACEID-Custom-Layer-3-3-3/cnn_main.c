//Header files go here
#include "chameleon.h"
#include "cnn.h"
#include "cnn_helper.h"
#include "app_debug_logger.h"

volatile uint32_t cnn_time; // Stopwatch

static const uint32_t layer_0_input_0[] = SAMPLE_INPUT_0;

void fail(void)
{
  printf("\n*** FAIL ***\n\n");
  while (1);
}

//Global variables go here
__shared( uint32_t buffer_output_0[1200];
          uint32_t buffer_output_4[1200];
          uint32_t buffer_output_8[1200];
          uint32_t buffer_output_12[1200];
          uint32_t buffer_output_16[1200];
          uint32_t buffer_output_20[1200];
          uint32_t buffer_output_24[1200];
          uint32_t buffer_output_28[1200];
          uint32_t buffer_output_32[70];
          uint32_t buffer_output_36[70];
          uint32_t buffer_output_40[70];
          uint32_t buffer_output_44[70];
          uint32_t buffer_output_48[70];
          uint32_t buffer_output_52[70];
          uint32_t buffer_output_56[70];
          uint32_t buffer_output_60[70]; 
          
          int32_t ml_data[CNN_NUM_OUTPUTS];
          q15_t ml_softmax[CNN_NUM_OUTPUTS];
          uint32_t count;)


/***** Definitions *****/
TASK(task_init);
TASK(task_process_layer_0);
TASK(task_process_layer_1);
TASK(task_process_layer_2);
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

TASK(task_init)
{
  APP_LOG_INFO("task_init");
  NEXT_TASK(task_process_layer_0);
}



TASK (task_process_layer_0)
{
 
  // Enable peripheral, enable CNN interrupt, turn on CNN clock
  // CNN clock: 50 MHz div 1
  cnn_enable(MXC_S_GCR_PCLKDIV_CNNCLKSEL_PCLK, MXC_S_GCR_PCLKDIV_CNNCLKDIV_DIV1);

  //printf("\n*** task_process_layer_0 ***\n");

  cnn_init_0(); // Bring state machine into consistent state
  cnn_load_weights_0(); // Load kernels
  cnn_load_bias_0(); // Not used in this network
  cnn_configure_0(); // Configure state machine
  cnn_start(); // Start CNN processing

  load_input_0(layer_0_input_0); // Load data input via FIFO

  SCB->SCR &= ~SCB_SCR_SLEEPDEEP_Msk; // SLEEPDEEP=0
  while (cnn_time == 0)
    __WFI(); // Wait for CNN
  copy_output_0 ( __GET(buffer_output_0),__GET(buffer_output_4),__GET(buffer_output_8),__GET(buffer_output_12),__GET(buffer_output_16),__GET(buffer_output_20),__GET(buffer_output_24),__GET(buffer_output_28) );

 
  //printf("\n*** PASS ***\n\n");

#ifdef CNN_INFERENCE_TIMER
  //printf("Approximate data loading and inference time: %u us\n\n", cnn_time);
#endif

  cnn_disable(); // Shut down CNN clock, disable peripheral


  return task_process_layer_1;
}
TASK (task_process_layer_1)
{
 
  // Enable peripheral, enable CNN interrupt, turn on CNN clock
  // CNN clock: 50 MHz div 1
  cnn_enable(MXC_S_GCR_PCLKDIV_CNNCLKSEL_PCLK, MXC_S_GCR_PCLKDIV_CNNCLKDIV_DIV1);

  //printf("\n*** task_process_layer_1 ***\n");

  cnn_init_1(); // Bring state machine into consistent state
  cnn_load_weights_1(); // Load kernels
  cnn_load_bias_1(); // Not used in this network
  cnn_configure_1(); // Configure state machine
  load_input_1 ( __GET(buffer_output_0),__GET(buffer_output_4),__GET(buffer_output_8),__GET(buffer_output_12),__GET(buffer_output_16),__GET(buffer_output_20),__GET(buffer_output_24),__GET(buffer_output_28) );
 // Load data input
  cnn_start(); // Start CNN processing


  SCB->SCR &= ~SCB_SCR_SLEEPDEEP_Msk; // SLEEPDEEP=0
  while (cnn_time == 0)
    __WFI(); // Wait for CNN
  copy_output_1 ( __GET(buffer_output_0),__GET(buffer_output_4),__GET(buffer_output_8),__GET(buffer_output_12),__GET(buffer_output_16),__GET(buffer_output_20),__GET(buffer_output_24),__GET(buffer_output_28),__GET(buffer_output_32),__GET(buffer_output_36),__GET(buffer_output_40),__GET(buffer_output_44),__GET(buffer_output_48),__GET(buffer_output_52),__GET(buffer_output_56),__GET(buffer_output_60) );

 
  //printf("\n*** PASS ***\n\n");

#ifdef CNN_INFERENCE_TIMER
  //printf("Approximate inference time: %u us\n\n", cnn_time);
#endif

  cnn_disable(); // Shut down CNN clock, disable peripheral


  return task_process_layer_2;
}
TASK (task_process_layer_2)
{

 
  // Enable peripheral, enable CNN interrupt, turn on CNN clock
  // CNN clock: 50 MHz div 1
  cnn_enable(MXC_S_GCR_PCLKDIV_CNNCLKSEL_PCLK, MXC_S_GCR_PCLKDIV_CNNCLKDIV_DIV1);

  //printf("\n*** task_process_layer_2 ***\n");

  cnn_init_2(); // Bring state machine into consistent state
  cnn_load_weights_2(); // Load kernels
  cnn_load_bias_2(); // Not used in this network
  cnn_configure_2(); // Configure state machine
  load_input_2 ( __GET(buffer_output_0),__GET(buffer_output_4),__GET(buffer_output_8),__GET(buffer_output_12),__GET(buffer_output_16),__GET(buffer_output_20),__GET(buffer_output_24),__GET(buffer_output_28),__GET(buffer_output_32),__GET(buffer_output_36),__GET(buffer_output_40),__GET(buffer_output_44),__GET(buffer_output_48),__GET(buffer_output_52),__GET(buffer_output_56),__GET(buffer_output_60) );
 // Load data input
  cnn_start(); // Start CNN processing


  
  SCB->SCR &= ~SCB_SCR_SLEEPDEEP_Msk; // SLEEPDEEP=0
  while (cnn_time == 0)
    __WFI(); // Wait for CNN

  if (check_output() != CNN_OK) fail();
  cnn_unload((uint32_t *) __GET(ml_data));
  
  cnn_disable(); // Shut down CNN clock, disable peripheral

  softmax_q17p14_q15((const q31_t *)__GET(ml_data), CNN_NUM_OUTPUTS, __GET(ml_softmax));

#ifdef CNN_INFERENCE_TIMER
  //printf("Approximate inference time: %u us\n\n", cnn_time);
#endif


  NEXT_TASK(task_show_classification_results);
}

TASK(task_show_classification_results)
{
  int i;
  int digs, tens;
  printf("Classification results:\n");
  // for (i = 0; i < CNN_NUM_OUTPUTS; i++) {
  for (i = 50; i < 70; i++) {
    digs = (1000 * __GET(ml_softmax[i]) + 0x4000) >> 15;
    tens = digs % 10;
    digs = digs / 10;
    printf("[%7d] -> Class %d: %d.%d%%\n", __GET(ml_data[i]), i, digs, tens);
  }

  __SET(count, __GET(count) + 1);
  printf("tier 1 count: %u\n", __GET(count));
  NEXT_TASK(task_init);
} 

