/*
Project:
Version: 1.0
Author: Ivan Seleznov
Comments: This file contains the description and declaration of locks structure
*/

#include "drv_command.h"
#include "stm32f101xe.h"
//#include "stm32f1xx_hal_gpio.h"

#ifndef DRV_LOC_H
#define DRV_LOCK_H
#define LOCKS_NUM						12 				//Number of locks on each PCB


struct locks
{
	uint8_t id;													//lock id
	GPIO_TypeDef* port[2];
	uint16_t pin[2];										//lock pins to controll the movement
	uint8_t status;
//	drv_command_str_t commands[4];			//commands for each lock
//	uint16_t history_cmd[5];

}; 


void locksInit(struct locks locks_arr[LOCKS_NUM]); 										// function for locks initialization



#endif

