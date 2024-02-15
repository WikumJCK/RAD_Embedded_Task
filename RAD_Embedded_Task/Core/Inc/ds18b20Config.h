#ifndef	_DS18B20CONFIG_H
#define	_DS18B20CONFIG_H


//	Init timer on cube    1us per tick				example 72 MHz cpu >>> Prescaler=(72-1)      counter period=Max
//###################################################################################
#define	_DS18B20_USE_FREERTOS		    				1
#define _DS18B20_MAX_SENSORS		    				1
#define	_DS18B20_GPIO												Temp_Sensor_GPIO_Port
#define	_DS18B20_PIN												Temp_Sensor_Pin

#define	_DS18B20_CONVERT_TIMEOUT_MS					500
#if (_DS18B20_USE_FREERTOS==1)
#define	_DS18B20_UPDATE_INTERVAL_MS					100					//  (((	if==0  >> Ds18b20_ManualConvert()  )))    ((( if>0  >>>> Auto refresh )))
#endif



#define	_DS18B20_TIMER htim3
//###################################################################################

#endif

