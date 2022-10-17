/*
 * fsm_automatic2.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Acer
 */

#include "fsm_automatic2.h"

void fsm_automatic_run2(int green, int red, int yellow){
	switch(status1){
			case INIT:
					status1 = AUTO_RED;
					HAL_GPIO_WritePin(GPIOA, LED_RED_2_Pin, 0);
					HAL_GPIO_WritePin(GPIOA, LED_GREEN_2_Pin|LED_YELLOW_2_Pin, 1);
					setTimer3(red*1000);

				break;
			case AUTO_RED:
				if(timer3_flag == 1){
					status1 = AUTO_GREEN;
					HAL_GPIO_WritePin(GPIOA, LED_GREEN_2_Pin, 0);
					HAL_GPIO_WritePin(GPIOA, LED_RED_2_Pin|LED_YELLOW_2_Pin, 1);
					setTimer3(green*1000);
				}
				break;
			case AUTO_GREEN:
				if(timer3_flag == 1){
					status1 = AUTO_YELLOW;
					HAL_GPIO_WritePin(GPIOA, LED_YELLOW_2_Pin, 0);
					HAL_GPIO_WritePin(GPIOA, LED_RED_2_Pin|LED_GREEN_2_Pin, 1);
					setTimer3(yellow * 1000);
				}
				break;
			case AUTO_YELLOW:
				if(timer3_flag == 1){
					status1 = AUTO_RED;
					HAL_GPIO_WritePin(GPIOA, LED_RED_2_Pin, 0);
					HAL_GPIO_WritePin(GPIOA, LED_GREEN_2_Pin|LED_YELLOW_2_Pin, 1);
					setTimer3(red * 1000);
				}
				break;
			default:
				break;
			}
}

