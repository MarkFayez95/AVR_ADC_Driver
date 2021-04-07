/*
 * ADC.h
 *
 * Created: 03/04/2021 12:46:19 PM
 *  Author: Mark Fayez
 */ 


#ifndef ADC_H_
#define ADC_H_

#include "MCU.h"
#include "Bit_math.h"

#include "ADC_CFG.h"

typedef enum {CH_0,CH_1,CH_2,CH_3,CH_4,CH_5,CH_6,CH_7} ADC_CHANNEL_NUM;

#define ADC_VREF_AVCC		5000
#define ADC_RIGHT_ADJUST	1

#define ADC_CHANNEL_0		0
#define ADC_CHANNEL_1		1
#define ADC_CHANNEL_2		2
#define ADC_CHANNEL_3		3
#define ADC_CHANNEL_4		4
#define ADC_CHANNEL_5		5
#define ADC_CHANNEL_6		6
#define ADC_CHANNEL_7		7

#define ADC_AUTO_TRIGGER	1
#define ADC_PRESC_128		0x05
#define ADC_INTERRUPT_DISABLE 0

void ADC_Init(void);
void ADC_Read(uint16* value);

#endif /* ADC_H_ */