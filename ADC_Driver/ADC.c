/*
 * ADC.c
 *
 * Created: 03/04/2021 12:46:31 PM
 *  Author: Mark Fayez
 */ 

#include "ADC.h"

void ADC_Init(void)
{
	#if ADC_VOLTAGE_REFERENCE == ADC_VREF_AVCC
		SetBit(ADMUX,6);
		ClearBit(ADMUX,7);
	#endif
	
	#if ADC_ADJUST == ADC_RIGHT_ADJUST
		ClearBit(ADMUX,5);
	#endif
	
	#if ADC_CHANNEL == ADC_CHANNEL_1
		SetBit(ADMUX,0);
	#endif
	
	#if ADC_CONVERSION_TRIGGER == ADC_AUTO_TRIGGER
		SetBit(ADCSRA,5);
	#endif
	
	#if ADC_PRESCALAR == ADC_PRESC_128
		SetBit(ADCSRA,0);
		SetBit(ADCSRA,1);
		SetBit(ADCSRA,2);
	#endif
	
	#if ADC_INTERRUPT_STATUS == ADC_INTERRUPT_DISABLE
		ClearBit(ADCSRA,3);
	#endif
	
	/*** Enable ADC ***/
	SetBit(ADCSRA,7);
	
}
void ADC_Read(uint16* value)
{

	SetBit(ADCSRA,6); // start conversion //
	
	while (GetBit(ADCSRA,4) == 0); // wait till end of conversion //
	
	*value = ADC_VAL;
	
}