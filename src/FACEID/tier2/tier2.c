#include "chameleon.h"
#include "cnn.h"
#include "cnn_helper.h"
#include "sampledata_tier2.h"
#include "app_debug_logger.h"

#define ORIGINAL_IMAGE_SIZE 19200 // 120*160
#define SUBSAMPLED_IMAGE_SIZE 361 // 19*19

static const uint32_t input[] = SAMPLE_INPUT_0;

//Global variables go here
__shared( float bw_input[SUBSAMPLED_IMAGE_SIZE];
          uint32_t count;)


/***** Definitions *****/
TASK(task_init);
TASK(task_subsample);
TASK(task_predict);


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
  NEXT_TASK(task_subsample);
}

TASK (task_subsample)
{
    int i, j, k = 0;
    
    for (i = 52; i < ORIGINAL_IMAGE_SIZE-53; i= i+53) {
        float r = 0;
        float g = 0;
        float b = 0;
        float bw = 0;
        for(j = 0; j < 53; j++)
        {
            b = ((float)((input[i + j] & 0x000000ff) >> 0)) / 255.0;
            g = ((float)((input[i + j] & 0x0000ff00) >> 8)) / 255.0;
            r = ((float)((input[i + j] & 0x00ff0000) >> 16)) / 255.0;
            bw += (r + g + b)/3;

        }
        __SET(bw_input[k++], bw/53);
    }

  NEXT_TASK(task_predict);
} 

TASK (task_predict)
{
  uint8_t prediction = 0;
  if (__GET(bw_input[180]) <= 188.5) {
      if (__GET(bw_input[168]) <= 96.5) {
          if (__GET(bw_input[323]) <= 218.5) {
              if (__GET(bw_input[168]) <= 81.5) {
                  if (__GET(bw_input[58]) <= 247.5) {
                      if (__GET(bw_input[293]) <= 242.0) {
                          if (__GET(bw_input[186]) <= 74.5) {
                              if (__GET(bw_input[162]) <= 149.5) {
                                  if (__GET(bw_input[255]) <= 21.5) {
                                      if (__GET(bw_input[186]) <= 57.5) {
                                          prediction = 0;
                                      }

                                      else {
                                          if (__GET(bw_input[220]) <= 28.0) {
                                              prediction = 1;
                                          }

                                          else {
                                              prediction = 0;
                                          }
                                      }
                                  }

                                  else {
                                      prediction = 0;
                                  }
                              }

                              else {
                                  if (__GET(bw_input[182]) <= 66.0) {
                                      prediction = 1;
                                  }

                                  else {
                                      prediction = 0;
                                  }
                              }
                          }

                          else {
                              if (__GET(bw_input[279]) <= 45.5) {
                                  if (__GET(bw_input[150]) <= 55.0) {
                                      prediction = 0;
                                  }

                                  else {
                                      if (__GET(bw_input[92]) <= 57.0) {
                                          if (__GET(bw_input[137]) <= 41.0) {
                                              prediction = 0;
                                          }

                                          else {
                                              prediction = 1;
                                          }
                                      }

                                      else {
                                          prediction = 0;
                                      }
                                  }
                              }

                              else {
                                  if (__GET(bw_input[216]) <= 29.5) {
                                      if (__GET(bw_input[216]) <= 28.5) {
                                          prediction = 0;
                                      }

                                      else {
                                          prediction = 1;
                                      }
                                  }

                                  else {
                                      prediction = 0;
                                  }
                              }
                          }
                      }

                      else {
                          if (__GET(bw_input[291]) <= 191.0) {
                              prediction = 0;
                          }

                          else {
                              prediction = 1;
                          }
                      }
                  }

                  else {
                      prediction = 1;
                  }
              }

              else {
                  if (__GET(bw_input[278]) <= 69.5) {
                      if (__GET(bw_input[317]) <= 69.0) {
                          if (__GET(bw_input[69]) <= 35.0) {
                              if (__GET(bw_input[156]) <= 58.5) {
                                  prediction = 0;
                              }

                              else {
                                  if (__GET(bw_input[343]) <= 106.0) {
                                      prediction = 1;
                                  }

                                  else {
                                      prediction = 0;
                                  }
                              }
                          }

                          else {
                              if (__GET(bw_input[93]) <= 28.5) {
                                  if (__GET(bw_input[347]) <= 72.5) {
                                      prediction = 0;
                                  }

                                  else {
                                      prediction = 1;
                                  }
                              }

                              else {
                                  prediction = 0;
                              }
                          }
                      }

                      else {
                          if (__GET(bw_input[62]) <= 67.5) {
                              if (__GET(bw_input[333]) <= 110.0) {
                                  prediction = 1;
                              }

                              else {
                                  prediction = 0;
                              }
                          }

                          else {
                              prediction = 0;
                          }
                      }
                  }

                  else {
                      if (__GET(bw_input[216]) <= 48.5) {
                          if (__GET(bw_input[301]) <= 89.5) {
                              prediction = 0;
                          }

                          else {
                              if (__GET(bw_input[288]) <= 70.5) {
                                  prediction = 1;
                              }

                              else {
                                  prediction = 0;
                              }
                          }
                      }

                      else {
                          if (__GET(bw_input[221]) <= 32.5) {
                              prediction = 1;
                          }

                          else {
                              if (__GET(bw_input[277]) <= 59.0) {
                                  if (__GET(bw_input[269]) <= 81.0) {
                                      prediction = 0;
                                  }

                                  else {
                                      prediction = 1;
                                  }
                              }

                              else {
                                  prediction = 0;
                              }
                          }
                      }
                  }
              }
          }

          else {
              if (__GET(bw_input[267]) <= 115.5) {
                  if (__GET(bw_input[151]) <= 77.5) {
                      prediction = 1;
                  }

                  else {
                      prediction = 0;
                  }
              }

              else {
                  if (__GET(bw_input[286]) <= 131.5) {
                      prediction = 1;
                  }

                  else {
                      prediction = 0;
                  }
              }
          }
      }

      else {
          if (__GET(bw_input[90]) <= 86.5) {
              if (__GET(bw_input[104]) <= 88.5) {
                  if (__GET(bw_input[271]) <= 47.0) {
                      if (__GET(bw_input[104]) <= 73.0) {
                          if (__GET(bw_input[341]) <= 211.5) {
                              prediction = 0;
                          }

                          else {
                              prediction = 1;
                          }
                      }

                      else {
                          if (__GET(bw_input[253]) <= 18.5) {
                              prediction = 0;
                          }

                          else {
                              if (__GET(bw_input[122]) <= 85.5) {
                                  prediction = 1;
                              }

                              else {
                                  if (__GET(bw_input[229]) <= 68.0) {
                                      prediction = 0;
                                  }

                                  else {
                                      prediction = 1;
                                  }
                              }
                          }
                      }
                  }

                  else {
                      if (__GET(bw_input[304]) <= 241.5) {
                          if (__GET(bw_input[66]) <= 158.0) {
                              if (__GET(bw_input[90]) <= 35.5) {
                                  if (__GET(bw_input[86]) <= 71.5) {
                                      prediction = 0;
                                  }

                                  else {
                                      if (__GET(bw_input[131]) <= 75.0) {
                                          prediction = 0;
                                      }

                                      else {
                                          prediction = 1;
                                      }
                                  }
                              }

                              else {
                                  prediction = 0;
                              }
                          }

                          else {
                              if (__GET(bw_input[247]) <= 63.0) {
                                  prediction = 1;
                              }

                              else {
                                  prediction = 0;
                              }
                          }
                      }

                      else {
                          if (__GET(bw_input[29]) <= 61.5) {
                              prediction = 0;
                          }

                          else {
                              prediction = 1;
                          }
                      }
                  }
              }

              else {
                  if (__GET(bw_input[80]) <= 88.5) {
                      if (__GET(bw_input[134]) <= 65.5) {
                          if (__GET(bw_input[103]) <= 76.5) {
                              if (__GET(bw_input[281]) <= 107.5) {
                                  if (__GET(bw_input[125]) <= 56.5) {
                                      prediction = 0;
                                  }

                                  else {
                                      prediction = 1;
                                  }
                              }

                              else {
                                  prediction = 0;
                              }
                          }

                          else {
                              prediction = 0;
                          }
                      }

                      else {
                          if (__GET(bw_input[161]) <= 89.0) {
                              if (__GET(bw_input[41]) <= 21.5) {
                                  if (__GET(bw_input[199]) <= 38.5) {
                                      prediction = 0;
                                  }

                                  else {
                                      prediction = 1;
                                  }
                              }

                              else {
                                  prediction = 0;
                              }
                          }

                          else {
                              if (__GET(bw_input[28]) <= 85.5) {
                                  if (__GET(bw_input[345]) <= 100.5) {
                                      if (__GET(bw_input[327]) <= 33.5) {
                                          prediction = 0;
                                      }

                                      else {
                                          if (__GET(bw_input[24]) <= 71.0) {
                                              if (__GET(bw_input[127]) <= 54.5) {
                                                  prediction = 0;
                                              }

                                              else {
                                                  prediction = 1;
                                              }
                                          }

                                          else {
                                              prediction = 0;
                                          }
                                      }
                                  }

                                  else {
                                      prediction = 0;
                                  }
                              }

                              else {
                                  if (__GET(bw_input[297]) <= 153.0) {
                                      if (__GET(bw_input[320]) <= 24.0) {
                                          if (__GET(bw_input[183]) <= 60.5) {
                                              prediction = 1;
                                          }

                                          else {
                                              prediction = 0;
                                          }
                                      }

                                      else {
                                          if (__GET(bw_input[146]) <= 60.0) {
                                              prediction = 0;
                                          }

                                          else {
                                              if (__GET(bw_input[358]) <= 171.5) {
                                                  if (__GET(bw_input[201]) <= 189.0) {
                                                      if (__GET(bw_input[155]) <= 70.0) {
                                                          prediction = 0;
                                                      }

                                                      else {
                                                          if (__GET(bw_input[354]) <= 29.5) {
                                                              prediction = 0;
                                                          }

                                                          else {
                                                              if (__GET(bw_input[216]) <= 14.0) {
                                                                  prediction = 0;
                                                              }

                                                              else {
                                                                  if (__GET(bw_input[127]) <= 202.5) {
                                                                      if (__GET(bw_input[83]) <= 162.5) {
                                                                          if (__GET(bw_input[263]) <= 38.5) {
                                                                              if (__GET(bw_input[190]) <= 85.5) {
                                                                                  prediction = 1;
                                                                              }

                                                                              else {
                                                                                  prediction = 0;
                                                                              }
                                                                          }

                                                                          else {
                                                                              if (__GET(bw_input[130]) <= 177.5) {
                                                                                  if (__GET(bw_input[168]) <= 104.5) {
                                                                                      if (__GET(bw_input[278]) <= 92.5) {
                                                                                          prediction = 1;
                                                                                      }

                                                                                      else {
                                                                                          prediction = 0;
                                                                                      }
                                                                                  }

                                                                                  else {
                                                                                      if (__GET(bw_input[81]) <= 108.0) {
                                                                                          prediction = 1;
                                                                                      }

                                                                                      else {
                                                                                          if (__GET(bw_input[54]) <= 105.0) {
                                                                                              prediction = 1;
                                                                                          }

                                                                                          else {
                                                                                              prediction = 0;
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }

                                                                              else {
                                                                                  if (__GET(bw_input[148]) <= 177.0) {
                                                                                      prediction = 0;
                                                                                  }

                                                                                  else {
                                                                                      prediction = 1;
                                                                                  }
                                                                              }
                                                                          }
                                                                      }

                                                                      else {
                                                                          prediction = 0;
                                                                      }
                                                                  }

                                                                  else {
                                                                      prediction = 0;
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }

                                                  else {
                                                      if (__GET(bw_input[168]) <= 195.5) {
                                                          prediction = 0;
                                                      }

                                                      else {
                                                          prediction = 1;
                                                      }
                                                  }
                                              }

                                              else {
                                                  if (__GET(bw_input[204]) <= 172.5) {
                                                      prediction = 0;
                                                  }

                                                  else {
                                                      prediction = 1;
                                                  }
                                              }
                                          }
                                      }
                                  }

                                  else {
                                      if (__GET(bw_input[187]) <= 212.5) {
                                          prediction = 0;
                                      }

                                      else {
                                          prediction = 1;
                                      }
                                  }
                              }
                          }
                      }
                  }

                  else {
                      if (__GET(bw_input[180]) <= 135.5) {
                          if (__GET(bw_input[4]) <= 62.0) {
                              if (__GET(bw_input[159]) <= 88.5) {
                                  prediction = 1;
                              }

                              else {
                                  prediction = 0;
                              }
                          }

                          else {
                              prediction = 0;
                          }
                      }

                      else {
                          if (__GET(bw_input[202]) <= 122.5) {
                              if (__GET(bw_input[48]) <= 178.5) {
                                  if (__GET(bw_input[291]) <= 139.5) {
                                      prediction = 1;
                                  }

                                  else {
                                      if (__GET(bw_input[205]) <= 131.5) {
                                          prediction = 0;
                                      }

                                      else {
                                          prediction = 1;
                                      }
                                  }
                              }

                              else {
                                  prediction = 0;
                              }
                          }

                          else {
                              if (__GET(bw_input[304]) <= 221.0) {
                                  prediction = 0;
                              }

                              else {
                                  prediction = 1;
                              }
                          }
                      }
                  }
              }
          }

          else {
              if (__GET(bw_input[72]) <= 73.5) {
                  if (__GET(bw_input[47]) <= 109.5) {
                      if (__GET(bw_input[219]) <= 57.5) {
                          if (__GET(bw_input[142]) <= 108.0) {
                              prediction = 0;
                          }

                          else {
                              prediction = 1;
                          }
                      }

                      else {
                          if (__GET(bw_input[304]) <= 220.5) {
                              prediction = 0;
                          }

                          else {
                              if (__GET(bw_input[121]) <= 141.5) {
                                  prediction = 1;
                              }

                              else {
                                  prediction = 0;
                              }
                          }
                      }
                  }

                  else {
                      if (__GET(bw_input[161]) <= 102.5) {
                          prediction = 0;
                      }

                      else {
                          if (__GET(bw_input[68]) <= 148.5) {
                              if (__GET(bw_input[134]) <= 88.0) {
                                  prediction = 0;
                              }

                              else {
                                  if (__GET(bw_input[37]) <= 25.0) {
                                      prediction = 0;
                                  }

                                  else {
                                      if (__GET(bw_input[75]) <= 146.5) {
                                          if (__GET(bw_input[173]) <= 96.5) {
                                              prediction = 0;
                                          }

                                          else {
                                              prediction = 1;
                                          }
                                      }

                                      else {
                                          prediction = 0;
                                      }
                                  }
                              }
                          }

                          else {
                              if (__GET(bw_input[219]) <= 187.5) {
                                  prediction = 0;
                              }

                              else {
                                  prediction = 1;
                              }
                          }
                      }
                  }
              }

              else {
                  if (__GET(bw_input[91]) <= 68.5) {
                      if (__GET(bw_input[11]) <= 164.5) {
                          prediction = 0;
                      }

                      else {
                          if (__GET(bw_input[20]) <= 144.5) {
                              prediction = 1;
                          }

                          else {
                              prediction = 0;
                          }
                      }
                  }

                  else {
                      if (__GET(bw_input[175]) <= 157.5) {
                          if (__GET(bw_input[52]) <= 52.5) {
                              if (__GET(bw_input[156]) <= 101.0) {
                                  prediction = 0;
                              }

                              else {
                                  if (__GET(bw_input[50]) <= 125.0) {
                                      prediction = 1;
                                  }

                                  else {
                                      prediction = 0;
                                  }
                              }
                          }

                          else {
                              if (__GET(bw_input[112]) <= 50.5) {
                                  if (__GET(bw_input[33]) <= 54.5) {
                                      prediction = 1;
                                  }

                                  else {
                                      prediction = 0;
                                  }
                              }

                              else {
                                  if (__GET(bw_input[175]) <= 150.5) {
                                      prediction = 0;
                                  }

                                  else {
                                      if (__GET(bw_input[91]) <= 94.5) {
                                          if (__GET(bw_input[253]) <= 153.0) {
                                              prediction = 1;
                                          }

                                          else {
                                              prediction = 0;
                                          }
                                      }

                                      else {
                                          prediction = 0;
                                      }
                                  }
                              }
                          }
                      }

                      else {
                          if (__GET(bw_input[80]) <= 119.5) {
                              if (__GET(bw_input[7]) <= 155.5) {
                                  if (__GET(bw_input[216]) <= 95.0) {
                                      if (__GET(bw_input[280]) <= 88.5) {
                                          prediction = 0;
                                      }

                                      else {
                                          prediction = 1;
                                      }
                                  }

                                  else {
                                      prediction = 0;
                                  }
                              }

                              else {
                                  if (__GET(bw_input[304]) <= 162.5) {
                                      if (__GET(bw_input[355]) <= 67.5) {
                                          if (__GET(bw_input[143]) <= 109.5) {
                                              prediction = 1;
                                          }

                                          else {
                                              prediction = 0;
                                          }
                                      }

                                      else {
                                          if (__GET(bw_input[38]) <= 167.0) {
                                              prediction = 1;
                                          }

                                          else {
                                              prediction = 0;
                                          }
                                      }
                                  }

                                  else {
                                      prediction = 0;
                                  }
                              }
                          }

                          else {
                              if (__GET(bw_input[218]) <= 118.5) {
                                  if (__GET(bw_input[236]) <= 119.5) {
                                      prediction = 0;
                                  }

                                  else {
                                      if (__GET(bw_input[19]) <= 152.0) {
                                          prediction = 1;
                                      }

                                      else {
                                          if (__GET(bw_input[83]) <= 213.0) {
                                              prediction = 0;
                                          }

                                          else {
                                              prediction = 1;
                                          }
                                      }
                                  }
                              }

                              else {
                                  if (__GET(bw_input[53]) <= 79.5) {
                                      if (__GET(bw_input[66]) <= 150.5) {
                                          prediction = 0;
                                      }

                                      else {
                                          prediction = 1;
                                      }
                                  }

                                  else {
                                      if (__GET(bw_input[73]) <= 58.5) {
                                          prediction = 1;
                                      }

                                      else {
                                          if (__GET(bw_input[99]) <= 81.0) {
                                              prediction = 1;
                                          }

                                          else {
                                              prediction = 0;
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }

  else {
      if (__GET(bw_input[256]) <= 183.5) {
          if (__GET(bw_input[98]) <= 173.5) {
              if (__GET(bw_input[175]) <= 144.5) {
                  if (__GET(bw_input[87]) <= 89.0) {
                      if (__GET(bw_input[5]) <= 95.0) {
                          prediction = 0;
                      }

                      else {
                          if (__GET(bw_input[57]) <= 25.5) {
                              prediction = 0;
                          }

                          else {
                              prediction = 1;
                          }
                      }
                  }

                  else {
                      if (__GET(bw_input[156]) <= 149.5) {
                          prediction = 0;
                      }

                      else {
                          if (__GET(bw_input[234]) <= 113.5) {
                              prediction = 0;
                          }

                          else {
                              prediction = 1;
                          }
                      }
                  }
              }

              else {
                  if (__GET(bw_input[142]) <= 129.5) {
                      if (__GET(bw_input[256]) <= 167.0) {
                          prediction = 0;
                      }

                      else {
                          prediction = 1;
                      }
                  }

                  else {
                      if (__GET(bw_input[298]) <= 203.5) {
                          if (__GET(bw_input[83]) <= 221.5) {
                              if (__GET(bw_input[186]) <= 91.5) {
                                  if (__GET(bw_input[359]) <= 156.5) {
                                      prediction = 0;
                                  }

                                  else {
                                      prediction = 1;
                                  }
                              }

                              else {
                                  if (__GET(bw_input[47]) <= 75.0) {
                                      prediction = 0;
                                  }

                                  else {
                                      if (__GET(bw_input[0]) <= 241.0) {
                                          if (__GET(bw_input[173]) <= 106.5) {
                                              prediction = 0;
                                          }

                                          else {
                                              if (__GET(bw_input[325]) <= 222.5) {
                                                  if (__GET(bw_input[30]) <= 139.5) {
                                                      if (__GET(bw_input[139]) <= 110.0) {
                                                          prediction = 0;
                                                      }

                                                      else {
                                                          if (__GET(bw_input[0]) <= 152.0) {
                                                              if (__GET(bw_input[104]) <= 126.5) {
                                                                  if (__GET(bw_input[84]) <= 85.5) {
                                                                      prediction = 1;
                                                                  }

                                                                  else {
                                                                      prediction = 0;
                                                                  }
                                                              }

                                                              else {
                                                                  prediction = 1;
                                                              }
                                                          }

                                                          else {
                                                              if (__GET(bw_input[221]) <= 148.0) {
                                                                  prediction = 1;
                                                              }

                                                              else {
                                                                  prediction = 0;
                                                              }
                                                          }
                                                      }
                                                  }

                                                  else {
                                                      if (__GET(bw_input[38]) <= 235.5) {
                                                          if (__GET(bw_input[11]) <= 95.0) {
                                                              prediction = 0;
                                                          }

                                                          else {
                                                              if (__GET(bw_input[158]) <= 76.5) {
                                                                  if (__GET(bw_input[181]) <= 191.0) {
                                                                      prediction = 0;
                                                                  }

                                                                  else {
                                                                      prediction = 1;
                                                                  }
                                                              }

                                                              else {
                                                                  if (__GET(bw_input[22]) <= 31.0) {
                                                                      if (__GET(bw_input[237]) <= 170.0) {
                                                                          prediction = 0;
                                                                      }

                                                                      else {
                                                                          prediction = 1;
                                                                      }
                                                                  }

                                                                  else {
                                                                      if (__GET(bw_input[290]) <= 195.5) {
                                                                          if (__GET(bw_input[113]) <= 221.5) {
                                                                              prediction = 1;
                                                                          }

                                                                          else {
                                                                              if (__GET(bw_input[181]) <= 232.0) {
                                                                                  prediction = 0;
                                                                              }

                                                                              else {
                                                                                  prediction = 1;
                                                                              }
                                                                          }
                                                                      }

                                                                      else {
                                                                          if (__GET(bw_input[261]) <= 172.0) {
                                                                              prediction = 0;
                                                                          }

                                                                          else {
                                                                              prediction = 1;
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }

                                                      else {
                                                          prediction = 0;
                                                      }
                                                  }
                                              }

                                              else {
                                                  if (__GET(bw_input[360]) <= 120.0) {
                                                      prediction = 1;
                                                  }

                                                  else {
                                                      prediction = 0;
                                                  }
                                              }
                                          }
                                      }

                                      else {
                                          prediction = 0;
                                      }
                                  }
                              }
                          }

                          else {
                              prediction = 0;
                          }
                      }

                      else {
                          if (__GET(bw_input[42]) <= 89.0) {
                              prediction = 1;
                          }

                          else {
                              prediction = 0;
                          }
                      }
                  }
              }
          }

          else {
              if (__GET(bw_input[79]) <= 165.0) {
                  if (__GET(bw_input[9]) <= 178.0) {
                      prediction = 0;
                  }

                  else {
                      if (__GET(bw_input[229]) <= 124.0) {
                          prediction = 0;
                      }

                      else {
                          if (__GET(bw_input[246]) <= 218.5) {
                              prediction = 1;
                          }

                          else {
                              prediction = 0;
                          }
                      }
                  }
              }

              else {
                  if (__GET(bw_input[211]) <= 233.0) {
                      if (__GET(bw_input[60]) <= 101.0) {
                          prediction = 1;
                      }

                      else {
                          if (__GET(bw_input[218]) <= 222.5) {
                              prediction = 0;
                          }

                          else {
                              if (__GET(bw_input[110]) <= 138.0) {
                                  prediction = 1;
                              }

                              else {
                                  prediction = 0;
                              }
                          }
                      }
                  }

                  else {
                      if (__GET(bw_input[10]) <= 173.5) {
                          prediction = 0;
                      }

                      else {
                          prediction = 1;
                      }
                  }
              }
          }
      }

      else {
          if (__GET(bw_input[193]) <= 214.5) {
              if (__GET(bw_input[219]) <= 140.5) {
                  if (__GET(bw_input[193]) <= 162.5) {
                      prediction = 0;
                  }

                  else {
                      if (__GET(bw_input[351]) <= 210.5) {
                          prediction = 1;
                      }

                      else {
                          prediction = 0;
                      }
                  }
              }

              else {
                  if (__GET(bw_input[237]) <= 169.5) {
                      if (__GET(bw_input[165]) <= 200.5) {
                          prediction = 0;
                      }

                      else {
                          prediction = 1;
                      }
                  }

                  else {
                      if (__GET(bw_input[199]) <= 172.5) {
                          if (__GET(bw_input[77]) <= 181.5) {
                              prediction = 1;
                          }

                          else {
                              prediction = 0;
                          }
                      }

                      else {
                          prediction = 0;
                      }
                  }
              }
          }

          else {
              if (__GET(bw_input[247]) <= 211.5) {
                  if (__GET(bw_input[147]) <= 171.0) {
                      prediction = 0;
                  }

                  else {
                      if (__GET(bw_input[83]) <= 224.5) {
                          if (__GET(bw_input[97]) <= 93.5) {
                              if (__GET(bw_input[88]) <= 214.0) {
                                  prediction = 0;
                              }

                              else {
                                  prediction = 1;
                              }
                          }

                          else {
                              if (__GET(bw_input[285]) <= 220.0) {
                                  prediction = 1;
                              }

                              else {
                                  prediction = 0;
                              }
                          }
                      }

                      else {
                          prediction = 0;
                      }
                  }
              }

              else {
                  if (__GET(bw_input[10]) <= 81.5) {
                      if (__GET(bw_input[328]) <= 243.5) {
                          prediction = 1;
                      }

                      else {
                          prediction = 0;
                      }
                  }

                  else {
                      if (__GET(bw_input[15]) <= 251.5) {
                          if (__GET(bw_input[219]) <= 97.5) {
                              prediction = 1;
                          }

                          else {
                              if (__GET(bw_input[80]) <= 65.5) {
                                  if (__GET(bw_input[43]) <= 122.0) {
                                      prediction = 0;
                                  }

                                  else {
                                      prediction = 1;
                                  }
                              }

                              else {
                                  prediction = 0;
                              }
                          }
                      }

                      else {
                          prediction = 1;
                      }
                  }
              }
          }
      }
  }

  if (prediction) {
      printf("FACE\n");
  }
  else {
      printf("NO FACE\n");
  }

  __SET(count, __GET(count) + 1);
  printf("tier 2 count: %u\n", __GET(count));

  NEXT_TASK(task_init);
} 