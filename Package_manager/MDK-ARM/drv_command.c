/*
Project:
Version: 1.0
Author: Ivan Seleznov
Comments: This file contains the description and declaration of structures and mathods related to commands parsing and completing
*/
#include "main.h"
#include "drv_command.h"

#define UART_BUF_SIZE				12 // Main receive buffer size 

extern volatile bool is_Receiving;


void decode_Received_Cmd()
{
	
	
}

/*
Fucntion for parsing the received command via UART
*/
//void cmd_Parser(uint8_t *str, uint8_t *start_byte_pos, uint8_t *stop_byte_pos, struct received_command cmd)
void cmd_Parser(uint8_t *str, struct received_command cmd)
{		
	while(*str == 0) *str++;	
	cmd.cmd = *str++;
	cmd.len = *str++;
	uint8_t j=0;
	while((j < (int)(cmd.len - '0')))
	{
		cmd.payload[j]=*str++;
		j++;
	}
	
	if(*str++ != 0)
	{
				//place error cmd here
	}
}

//cmd.cmd = str[upp++];
//		cmd.len = str[upp];
//		uint8_t j=0;
//		while((j < cmd.len)&&(j<*stop_byte_pos))
//		{
//			cmd.payload[j]=str[2+j];
//			j++;
//		}
//		*start_byte_pos = *stop_byte_pos;


//struct drv_command_str_t
//{
//	
//	
//	
//	
//};