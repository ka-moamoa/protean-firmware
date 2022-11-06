#ifndef _ENERGY_H
#define _ENERGY_H

#include "spi.h"

/* 
    found these values by measurement
    Digipot = 137  —> Von = 3.30V
    Digipot = 144  —> Von = 3.15V
    Digipot = 151  —> Von = 3.00V
    Digipot = 160  —> Von = 2.85V
    Digipot = 168  —> Von = 2.70V
*/

typedef enum {
    THRESH_3_30V = 137, 
    THRESH_3_15V = 144, 
    THRESH_3_00V = 151, 
    THRESH_2_85V = 160, 
    THRESH_2_70V = 168
    } voltage_threshold_t;

// harvester parameters
#define HARVESTER_RATING            10  // mA (maximum current measured)
                                        // using current (not energy) because harvester board will provide fixed voltage
                                        // it is the current that really matters 
#define HIGH_ENERGY_THRESHOLD       (0.80 * HARVESTER_RATING)
#define MED_ENERGY_THRESHOLD        (0.60 * HARVESTER_RATING)

#define IS_HIGH_ENERGY(e)           (e >= HIGH_ENERGY_THRESHOLD)
#define IS_MED_ENERGY(e)            (e >= MED_ENERGY_THRESHOLD) && (e < HIGH_ENERGY_THRESHOLD)

// energy managment parameters
#define DEFAULT_VOLTAGE_THRESHOLD   THRESH_3_15V
#define LOWER_VOLTAGE_THRESHOLD     1.9 // V (this is the calculated value, measured value could be different)
#define CAP_ENERGY_THRESHOLD        1 // mJ (selected by hit-and-trial) 
                                      // 1: All apps all tiers except
                                      // 18: FACEID-Tier1
#define WINDOW_SIZE                 2

// SPI parameters
#define ENERGY_SPI_SPEED            4000000 // Hz
#define ENERGY_SPI_CHARACTER_SIZE   8 // bits
#define ENERGY_SPI                  MXC_SPI0
#define ENERGY_SPI_SLAVE            2

// ADC channels for current and voltage measurements
#define CAPACITOR_VOLTAGE_ADC       MXC_ADC_CH_0 
#define SENSOR_CURRENT_ADC          MXC_ADC_CH_5
#define RESISTOR_CURRENT_ADC        MXC_ADC_CH_1
#define VREF                        1.22 // max voltage ADC can measure

#define CURRENT_SENSOR_ERROR        -3 // current is always off by 3mA

// resistor and capacitor values
#define CAPACITOR_ARRAY             47 //mF
#define CAPACITOR_R1                5.60 // Mohm, R9 in schematic
#define CAPACITOR_R2                0.976 // Mohm, R47 in schematic
#define CURRENT_R1                  3.00 // Mohm, R48 in schematic
#define CURRENT_R2                  1.00 // Mohm, R49 in schematic
#define CURRENT_SENSE_R             0.03 // Ohm, R7 in schematic
#define CURRENT_SENSOR_GAIN         200

// energy timer 
#define CONCAT_(A, B)               A ## _ ## B
#define CONCAT(A, B)                CONCAT_(A, B)
#define TIMER_NUM                   TMR4
#define ENERGY_TIMER                CONCAT(MXC, TIMER_NUM)
#define ENERGY_TIMER_IRQ            CONCAT(TIMER_NUM, IRQn)
#define ENERGY_TIMER_FREQ           4 // hz
#define ENERGY_TIMER_CLOCK_SOURCE   MXC_TMR_32K_CLK

// get voltage(V) of the capacitor
inline float getCapacitorVoltage();

// get current(mA) flowing into the capacitors
inline float getHarvestedCurrent();

// get current(mA) flowing through the resistors
inline float getWastedCurrent();

// set threshold voltage of the board
// MCU should turn on at this voltage
int setThresholdVoltage(voltage_threshold_t voltage);

// get energy(mJ) stored in the capacitor
inline float getStoredEnergy();

// check if storned energy is sufficient to execute next task
bool isSufficientEnergy();

// get energy that is going into the capacitor
float getHarvestedEnergy();

// get predicted energy using moving average
float getPredictedEnergy();

// initialize periodic energy measurements
int initEnergyMeasurements();

// initialize energy driver's global SRAM/FRAM variable here
void __init_energy_driver();

#endif /* _ENERGY_H */
