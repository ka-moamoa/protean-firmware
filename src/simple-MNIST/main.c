/***** Includes *****/
#include <math.h>
#include "ink.h"
#include "mnist.h"
#include "input.h"
#include "app_debug_logger.h"

/***** Definitions *****/

/***** Globals *****/

// Tasks.
ENTRY_TASK(task_init);
TASK(task_neural_network_hypothesis);
TASK(task_neural_network_softmax_max);
TASK(task_neural_network_softmax_sum);
TASK(task_neural_network_softmax);
TASK(task_classify);
TASK(task_done);

__shared(   int neuronNum;
            int rowNum;
            int prediction; 
            float activations[MNIST_LABELS];
            float max_activation; 
            float softmaxMax; 
            float softmaxSum;
            int softmaxSumItr;
            uint32_t appCount;)

// called at the very first boot
void thread1_init()
{
    // create a thread with priority 15 and entry task t_init
    __CREATE(15, task_init);
    __SIGNAL(15);
}

void __app_init(){
    thread1_init();
}

void __app_reboot()
{
    __sram_vars.appCount = 0;
    __asm volatile ("nop");
}

ENTRY_TASK(task_init) {

    __SET(neuronNum, 0);
    __SET(rowNum, 0);
    __SET(prediction, 0);
    __SET(max_activation, 0);
    __SET(softmaxMax, 0);
    __SET(softmaxSum, 0);
    __SET(softmaxSumItr, 0);
    __SET(activations[0], b[0]);
    
    APP_LOG_DEBUG("task_init");

    return task_neural_network_hypothesis;
}

TASK(task_neural_network_hypothesis) {
    int i = __GET(neuronNum);
    int j = __GET(rowNum);
    int k = 0;
    float tempActivations = __GET(activations[i]);

    for (; k < MNIST_IMAGE_WIDTH; k++)
    {

        tempActivations += W[i][j][k] * PIXEL_SCALE(number_pixels[j][k]);
    }

    __SET(activations[i], tempActivations);

    if (j < MNIST_IMAGE_HEIGHT - 1)
    {
        __SET(rowNum, ++j);
        return task_neural_network_hypothesis;
    }
    if (i < MNIST_LABELS - 1)
    {
        __SET(neuronNum, ++i);
        __SET(rowNum, 0);
        __SET(activations[i], b[i]);
        
        APP_LOG_DEBUG("task_neural_network_hypothesis");
        return task_neural_network_hypothesis;
    }
    else {
        APP_LOG_DEBUG("task_neural_network_hypothesis");
        return task_neural_network_softmax_max;
    }
}

TASK(task_neural_network_softmax_max) {

    int i;
    float max;

    for (i = 1, max = __GET(activations[0]); i < MNIST_LABELS; i++) {
        if (__GET(activations[i])> max) {
            max = __GET(activations[i]);
        }
    }

    __SET(softmaxMax, max);
    APP_LOG_DEBUG("task_neural_network_softmax_max");
    return task_neural_network_softmax_sum;
}

TASK(task_neural_network_softmax_sum) {
    int i = __GET(softmaxSumItr);
    float max = __GET(softmaxMax);
    float sum = __GET(softmaxSum);

    __SET(activations[i], exp(__GET(activations[i]) - max));
    sum += __GET(activations[i]);

    __SET(softmaxSum, sum);

    if (i < MNIST_LABELS - 1) {
        __SET(softmaxSumItr, ++i);
        return task_neural_network_softmax_sum;
    }
    else {
        APP_LOG_DEBUG("task_neural_network_softmax_sum");
        return task_neural_network_softmax;
    }
}

TASK(task_neural_network_softmax) {
    int i;
    float sum = __GET(softmaxSum);

    for (i = 0; i < MNIST_LABELS; i++) {
        __SET(activations[i], __GET(activations[i]) / sum);
    }

    APP_LOG_DEBUG("task_neural_network_softmax");
    return task_classify;
}

TASK(task_classify) {
    int predict = 0;
    int i = 0;

    __SET(max_activation, __GET(activations[0]));

    for (i = 0; i < MNIST_LABELS; i++)
    {
        if (__GET(max_activation) < __GET(activations[i]))
        {
            __SET(max_activation, __GET(activations[i]));
            predict = i;
        }
    }

    __SET(prediction, predict);
    __SET(appCount, __GET(appCount) + 1); 

    APP_LOG_DEBUG("task_classify");
    return task_done;
}

TASK(task_done) {
    APP_LOG_DEBUG("task_done");
    APP_LOG_INFO("Prediction: %d", __GET(prediction));
    APP_LOG_INFO("Total Classifactions: %u", __GET(appCount));
    LED_Toggle(LED1);
    // MXC_Delay(1000000);
    return task_init;
}