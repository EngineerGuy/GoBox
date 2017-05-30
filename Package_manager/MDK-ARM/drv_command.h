/*
Project:
Version: 1.0
Author: Ivan Seleznov
Comments: This file contains the description and declaration of commands structure
*/
#include "stdint.h"
#include "stdbool.h"

#ifndef DRV_COMMAND_H
#define DRV_COMMAND_H


/*
This structure describes the commands possible for the locks
id - omamnd ID
status - command status (0 - idle(default), 1 - in process, 2 - completed successfully, 3 - completed with error)
error_code - the error_code if the command failed (0 - default(everything is OK), ... - depends on the command)
*/

typedef struct command 
{
	int id; 						
	int status;					
	int error_code;
	
	
}drv_command_str_t;


/*
This structure describes the received command
cmd - command id
len - length of the payload bytes
payload - the payload bytes
*/

typedef struct received_command
{
	uint8_t cmd;
	uint8_t len;
	uint8_t payload[2];
	
}rec_cmd;


//void cmd_Parser(uint8_t *str, uint8_t *start_byte_pos, uint8_t *stop_byte_pos, struct received_command cmd); // Command parser function 
void cmd_Parser(uint8_t *str, struct received_command cmd);


#endif