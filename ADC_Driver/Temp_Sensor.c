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
	
	/*uint32 Vin = 0;
	
	ADC_Read(&Digital_Out);
	
	Vin = (Digital_Out * ADC_VREF_AVCC) / 1024;
	
	*val = Vin/10;*/
	
	ADC_Read(&Digital_Out);
	
	*val = (Digital_Out * 500) / 1024;
}
