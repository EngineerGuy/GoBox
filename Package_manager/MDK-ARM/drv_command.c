/*
Project:
Version: 1.0
Author: Ivan Seleznov
Comments: This file contains the description and declaration of structures and mathods related to commands parsing and completing
*/
#include "main.h"
#include "drv_command.h"

extern volatile bool is_Receiving;


void decode_Received_Cmd()
{
	
	
}

/*
Fucntion for parsing the received command via UART
*/
void cmd_Parser(uint8_t *str, uint8_t *start_byte_pos, uint8_t *stop_byte_pos, struct received_command cmd)
{
//		uint8_t str_array[6];
//		uint8_t upp = stop_byte_pos;
//		uint8_t p = start_byte_pos;
//		uint8_t i = 0;
//		while(p != stop_byte_pos)
//		{
//			str_array[i++] = str[p++]; 
//		}
		cmd.cmd = str[*start_byte_pos];
		cmd.len = str[*start_byte_pos+1];
		uint8_t j=0;
		while((j < cmd.len)&&(j<*stop_byte_pos))
		{
			cmd.payload[j]=str[2+j];
			*start_byte_pos = *stop_byte_pos;
			j++;
		}
			
}


//struct drv_command_str_t
//{
//	
//	
//	
//	
//};