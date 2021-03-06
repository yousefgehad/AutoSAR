#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#include "STD_Types.h"
#include "dio_types.h"
#define PINNUM   32 // Pins Number In MCU
typedef struct
{
	
	Dio_DirType pinDirection;// To Determine Pin Output Or Input
	STD_levelType pinState;  // To Determine Pin High Or Low
	
}Dio_pin_configType;

extern const Dio_pin_configType Dio_pin_config [];


void Dio_init(void);

#endif /* DIO_CFG_H_ */