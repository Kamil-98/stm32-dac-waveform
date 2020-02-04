# stm32-dac-waveform
### Waveform generator on STM32F767ZI with internal DAC. 
##### Fully hardware version with use of DMA and TIMER. 
###### In this example, values of waveform are calculated in MS Excel for sine wave.

0. Generate project with STM32CubeIDE
1. Change in main.c
     - In "Private includes" section include library
        - #include "myDAC.h"
     - In "User code begin 2" section initialize and run DAC
        - myDacInit();
        - myDacRun();
2. Add to project
   - In Core\Src
     - myDAC.c file
   - In Core\Inc
     - myDAC.h file
     
###### Working on other model of uC require changes in configuration, according to the Reference Manual.
