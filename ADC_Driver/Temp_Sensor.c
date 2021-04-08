/*
 * Temp_Sensor.c
 *
 * Created: 03/04/2021 1:36:20 PM
 *  Author: Mark Fayez
 */ 

#include "Temp_Sensor.h"


void TempSensor_Init (void)
{
	ADC_Init();
}

void TempSensor_Read(uint16* val)
{
	uint16 Digital_Out = 0;
	
	#if ADC_INTERRUPT_STATUS == ADC_INTERRUPT_DISABLE
		ADC_Read(&Digital_Out);
	#elif ADC_INTERRUPT_STATUS == ADC_INTERRUPT_ENABLE
		ADC_INT_Read(&Digital_Out);
	#endif
	
	*val = (Digital_Out * 500) / 1024;
}

