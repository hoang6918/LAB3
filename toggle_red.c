/*
 * toggle_red.c
 *
 *  Created on: Oct 9, 2022
 *      Author: Acer
 */
#include "toggle_red.h"

int counter = 0;
void toggle1(int k)
{
if(k == 1)
{
	switch(counter)
		{
		case 0:
			HAL_GPIO_WritePin(GPIOA, LED_RED_1_Pin|LED_RED_2_Pin, 0);
			counter = 1;
			setTimer2(250);
			break;
		case 1:
			if(timer2_flag==1)
			{
			HAL_GPIO_WritePin(GPIOA, LED_RED_1_Pin|LED_RED_2_Pin, 1);
			counter = 2;
			setTimer2(250);
			}
			break;
		case 2:
			if(timer2_flag==1)
			{
			HAL_GPIO_WritePin(GPIOA, LED_RED_1_Pin|LED_RED_2_Pin, 0);
			counter = 1;
			setTimer2(250);
			}
			break;
		default:
			break;
		}
}
if(k == 2)
{
	switch(counter)
		{
		case 0:
			HAL_GPIO_WritePin(GPIOA, LED_YELLOW_1_Pin|LED_YELLOW_2_Pin, 0);
			counter = 1;
			setTimer2(250);
			break;
		case 1:
			if(timer2_flag==1)
			{
			HAL_GPIO_WritePin(GPIOA, LED_YELLOW_1_Pin|LED_YELLOW_2_Pin, 1);
			counter = 2;
			setTimer2(250);
			}
			break;
		case 2:
			if(timer2_flag==1)
			{
			HAL_GPIO_WritePin(GPIOA, LED_YELLOW_1_Pin|LED_YELLOW_2_Pin, 0);
			counter = 1;
			setTimer2(250);
			}
			break;
		default:
			break;
		}
}
if(k == 3)
{
	switch(counter)
		{
		case 0:
			HAL_GPIO_WritePin(GPIOA, LED_GREEN_1_Pin|LED_GREEN_2_Pin, 0);
			counter = 1;
			setTimer2(250);
			break;
		case 1:
			if(timer2_flag==1)
			{
			HAL_GPIO_WritePin(GPIOA, LED_GREEN_1_Pin|LED_GREEN_2_Pin, 1);
			counter = 2;
			setTimer2(250);
			}
			break;
		case 2:
			if(timer2_flag==1)
			{
			HAL_GPIO_WritePin(GPIOA, LED_GREEN_1_Pin|LED_GREEN_2_Pin, 0);
			counter = 1;
			setTimer2(250);
			}
			break;
		default:
			break;
		}
}
}

