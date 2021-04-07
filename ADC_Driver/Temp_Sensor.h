/*
 * Temp_Sensor.h
 *
 * Created: 03/04/2021 1:36:03 PM
 *  Author: Mark Fayez
 */ 


#ifndef TEMP_SENSOR_H_
#define TEMP_SENSOR_H_

#include "ADC.h"

void TempSensor_Init (void);
void TempSensor_Read(uint16* val);


#endif /* TEMP_SENSOR_H_ */