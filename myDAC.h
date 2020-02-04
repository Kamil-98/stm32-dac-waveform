/*
 * myDAC.h
 *
 *  Created on: Jan 28, 2020
 *      Author: kamil
 */

#ifndef INC_MYDAC_H_
#define INC_MYDAC_H_
/*
 * Values saved in memory (it can be any waveform) are sent with DMA to DAC.
 * DMA is triggered by DAC request.
 * DAC is triggered by TIMER which determines frequency of waveform.
 * Once the myDacRun() is executed, waveform goes without CPU action.
 */
void myDacInit(void);
void myDacRun(void);
void myDacStop(void);
void myDacRccInit(void);
void myDacTimInit(void);
void myDacPinInit(void);
void myDacDmaInit(void);
void myDacSubInit(void);

const uint16_t mySineData[1000];

#endif /* INC_MYDAC_H_ */
