/*
Project:
Version: 1.0
Author: Ivan Seleznov
Comments: This file contains the description and declaration of locks structure
*/

#include "drv_lock.h"
#include "drv_command.h"

//#ifndef DRV_LOCK_H
//#define DRV_LOCK_H

//struct locks
//{
//	int id;													//lock id
//	int pins[2];										//lock pins to controll the movement
//	drv_command_str_t commands[4];	//commands for each lock
////	uint16_t history_cmd[5];
//}lock_str[12];

//#endif
//lock_str_t locks_array[12];

//locks_array[0].id = 4;

//struct locks locks_array[12];
void locksInit ()
{
	for(int i=0; i<12; i++)
	{
		locks_array[i].id = i;
		
	}
}