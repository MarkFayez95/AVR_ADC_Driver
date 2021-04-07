/*
 * ADC_Driver.c
 *
 * Created: 03/04/2021 12:38:24 PM
 * Author : Mark Fayez
 */ 

#include "Temp_Sensor.h"
#include "LCD.h"

int main(void)
{
	
	uint16 Temp = 0;
	//TempSensor_Init();
	ADC_Init();
	LCD_Init();
	
    /* Replace with your application code */
    while (1) 
    {
		//TempSensor_Read(&Temp);
		ADC_Read(&Temp);
		
		LCD_Clear();
		LCD_WriteInteger(Temp);
		
		_delay_ms(200);
    }
}

