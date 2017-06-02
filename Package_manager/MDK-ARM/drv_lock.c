/*
Project:
Version: 1.0
Author: Ivan Seleznov
Comments: This file contains the description and declaration of locks structure
*/

#ifndef DRV_LOCK_H
#define DRV_LOCK_H


#include "drv_lock.h"
#include "drv_command.h"

extern struct locks locks_array[LOCKS_NUM];


#define LOCKS_NUM										12 				//Number of locks on each PCB


#define GPIO_PIN_0                 ((uint16_t)0x0001)  /* Pin 0 selected    */
#define GPIO_PIN_1                 ((uint16_t)0x0002)  /* Pin 1 selected    */
#define GPIO_PIN_2                 ((uint16_t)0x0004)  /* Pin 2 selected    */
#define GPIO_PIN_3                 ((uint16_t)0x0008)  /* Pin 3 selected    */
#define GPIO_PIN_4                 ((uint16_t)0x0010)  /* Pin 4 selected    */
#define GPIO_PIN_5                 ((uint16_t)0x0020)  /* Pin 5 selected    */
#define GPIO_PIN_6                 ((uint16_t)0x0040)  /* Pin 6 selected    */
#define GPIO_PIN_7                 ((uint16_t)0x0080)  /* Pin 7 selected    */
#define GPIO_PIN_8                 ((uint16_t)0x0100)  /* Pin 8 selected    */
#define GPIO_PIN_9                 ((uint16_t)0x0200)  /* Pin 9 selected    */
#define GPIO_PIN_10                ((uint16_t)0x0400)  /* Pin 10 selected   */
#define GPIO_PIN_11                ((uint16_t)0x0800)  /* Pin 11 selected   */
#define GPIO_PIN_12                ((uint16_t)0x1000)  /* Pin 12 selected   */
#define GPIO_PIN_13                ((uint16_t)0x2000)  /* Pin 13 selected   */
#define GPIO_PIN_14                ((uint16_t)0x4000)  /* Pin 14 selected   */
#define GPIO_PIN_15                ((uint16_t)0x8000)  /* Pin 15 selected   */
#define GPIO_PIN_All               ((uint16_t)0xFFFF)  /* All pins selected */

#define LOCK1_PORT1									GPIOC
#define LOCK1_PORT2									GPIOC
#define LOCK2_PORT1									GPIOF
#define LOCK2_PORT2									GPIOF
#define LOCK3_PORT1									GPIOE
#define LOCK3_PORT2									GPIOE
#define LOCK4_PORT1									GPIOE
#define LOCK4_PORT2									GPIOE
#define LOCK5_PORT1									GPIOG
#define LOCK5_PORT2									GPIOB
#define LOCK6_PORT1									GPIOB
#define LOCK6_PORT2									GPIOB
#define LOCK7_PORT1									GPIOD
#define LOCK7_PORT2									GPIOD
#define LOCK8_PORT1									GPIOD
#define LOCK8_PORT2									GPIOD
#define LOCK9_PORT1									GPIOA
#define LOCK9_PORT2									GPIOC
#define LOCK10_PORT1								GPIOC
#define LOCK10_PORT2								GPIOD
#define LOCK11_PORT1								GPIOD
#define LOCK11_PORT2								GPIOD
#define LOCK12_PORT1								GPIOD
#define LOCK12_PORT2								GPIOD

#define LOCK1_PIN1									GPIO_PIN_14
#define LOCK1_PIN2									GPIO_PIN_15
#define LOCK2_PIN1									GPIO_PIN_2
#define LOCK2_PIN2									GPIO_PIN_3
#define LOCK3_PIN1									GPIO_PIN_0
#define LOCK3_PIN2									GPIO_PIN_1
#define LOCK4_PIN1									GPIO_PIN_4
#define LOCK4_PIN2									GPIO_PIN_5
#define LOCK5_PIN1									GPIO_PIN_11
#define LOCK5_PIN2									GPIO_PIN_3
#define LOCK6_PIN1									GPIO_PIN_4
#define LOCK6_PIN2									GPIO_PIN_5
#define LOCK7_PIN1									GPIO_PIN_1
#define LOCK7_PIN2									GPIO_PIN_2
#define LOCK8_PIN1									GPIO_PIN_3
#define LOCK8_PIN2									GPIO_PIN_4
#define LOCK9_PIN1									GPIO_PIN_15
#define LOCK9_PIN2									GPIO_PIN_10
#define LOCK10_PIN1									GPIO_PIN_11
#define LOCK10_PIN2									GPIO_PIN_0
#define LOCK11_PIN1									GPIO_PIN_11
#define LOCK11_PIN2									GPIO_PIN_12
#define LOCK12_PIN1									GPIO_PIN_13
#define LOCK12_PIN2									GPIO_PIN_15




//GPIO_TypeDef * GPIO_Ports[2] = {GPIOC, GPIOC, GPIOF, GPIOF, GPIOE, GPIOE, GPIOE, GPIOE, GPIOG, GPIOB, GPIOB, GPIOB, GPIOD, GPIOD, GPIOD, GPIOD, GPIOA, GPIOC, GPIOC, GPIOD, GPIOD, GPIOD, GPIOD, GPIOD};
GPIO_TypeDef * GPIO_Ports[24] ={LOCK1_PORT1, LOCK1_PORT2, LOCK2_PORT1, LOCK2_PORT2, LOCK3_PORT1, LOCK3_PORT2, LOCK4_PORT1, LOCK4_PORT2, LOCK5_PORT1, LOCK5_PORT2, LOCK6_PORT1, LOCK6_PORT2, LOCK7_PORT1, LOCK7_PORT2, LOCK8_PORT1, LOCK8_PORT2, LOCK9_PORT1, LOCK9_PORT2, LOCK10_PORT1, LOCK10_PORT2, LOCK11_PORT1, LOCK11_PORT2, LOCK12_PORT1, LOCK12_PORT2};
//uint16_t GPIO_Pins[24] = {GPIO_PIN_14, GPIO_PIN_15, GPIO_PIN_2, GPIO_PIN_3, GPIO_PIN_0, GPIO_PIN_1, GPIO_PIN_4, GPIO_PIN_5, GPIO_PIN_11, GPIO_PIN_3, GPIO_PIN_4, GPIO_PIN_5, GPIO_PIN_1, GPIO_PIN_2, GPIO_PIN_3, GPIO_PIN_4, GPIO_PIN_15, GPIO_PIN_10, GPIO_PIN_11, GPIO_PIN_0, GPIO_PIN_11, GPIO_PIN_12, GPIO_PIN_13, GPIO_PIN_15};
uint16_t GPIO_Pins[24] = {LOCK1_PIN1, LOCK1_PIN2, LOCK2_PIN1, LOCK2_PIN2, LOCK3_PIN1, LOCK3_PIN2, LOCK4_PIN1, LOCK4_PIN2, LOCK5_PIN1, LOCK5_PIN2, LOCK6_PIN1, LOCK6_PIN2, LOCK7_PIN1, LOCK7_PIN2, LOCK8_PIN1, LOCK8_PIN2, LOCK9_PIN1, LOCK9_PIN2, LOCK10_PIN1, LOCK10_PIN2, LOCK11_PIN1, LOCK11_PIN2, LOCK12_PIN1, LOCK12_PIN2};


//struct locks
//{
//	int id;													//lock id
//	int pins[2];										//lock pins to controll the movement
//	drv_command_str_t commands[4];	//commands for each lock
////	uint16_t history_cmd[5];
//}lock_str[12];


void locksInit(struct locks locks_arr[LOCKS_NUM])
{
	uint8_t k = 0;
	for(uint8_t i=0; i<LOCKS_NUM; i++)
	{
		locks_arr[i].id = i;
		locks_arr[i].status = 0x01;
		for(uint8_t j=0; j<2; j++)
		{
			locks_arr[i].port[j] = GPIO_Ports[k++];
			locks_arr[i].pin[j] = GPIO_Pins[k++];
		}
	}
		
}

#endif
