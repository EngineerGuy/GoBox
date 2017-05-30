/*
Project:
Version: 1.0
Author: Ivan Seleznov
Comments: This file contains the description and declaration of locks structure
*/

#include "drv_command.h"

#ifndef DRV_LOC_H
#define DRV_LOCK_H
#define LOCKS_NUM			12 					//Number of locks on each PCB


struct locks
{
	int id;													//lock id
	int pins[2];										//lock pins to controll the movement
	drv_command_str_t commands[4];	//commands for each lock
//	uint16_t history_cmd[5];

}locks_array[LOCKS_NUM]; 



#endif

