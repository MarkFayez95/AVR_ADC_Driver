/*
 * ADC_Driver.c
 *
 * Created: 03/04/2021 12:38:24 PM
 * Author : Mark Fayez
 */ 

#include "Temp_Sensor.h"
#include "LCD.h"
#include "EXT_INT.h"
#include <avr/interrupt.h>

uint16 Temp = 0;

int main(void)
{
	TempSensor_Init();
	ExternalINT0_Init();
	LCD_Init();
	
	LCD_GoToLocation(0,3);
	LCD_WriteString("WELCOME!");
	_delay_ms(750);
	
	LCD_GoToLocation(0,0);
	LCD_WriteString("Press Button 2");
	_delay_ms(750);
	
    /* Replace with your application code */
    while (1) 
    {
		// Do nothing, wait for Interrupt.
    }
}

ISR(ADC_vect)
{
	//TempSensor_Read(&Temp);
	ADC_INT_Read(&Temp);
	LCD_Clear();
	LCD_WriteInteger(Temp);
	_delay_ms(750);
}
