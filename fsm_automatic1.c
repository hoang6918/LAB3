/*
 * fsm_automatic.c
 *
 *  Created on: Oct 4, 2022
 *      Author: acer
 */
#include "fsm_automatic1.h"

void fsm_automatic_run1(int green, int red, int yellow){
	switch(status){
		case INIT:
				status = AUTO_GREEN;
				HAL_GPIO_WritePin(GPIOA, LED_GREEN_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOA, LED_RED_1_Pin|LED_YELLOW_1_Pin, 1);
				setTimer1(green*1000);
			break;
		case AUTO_GREEN:
			if(timer1_flag == 1){
				status = AUTO_YELLOW;
				HAL_GPIO_WritePin(GPIOA, LED_YELLOW_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOA, LED_RED_1_Pin|LED_GREEN_1_Pin, 1);
				setTimer1(yellow*1000);
			}
			break;
		case AUTO_YELLOW:
			if(timer1_flag == 1){
				status = AUTO_RED;
				HAL_GPIO_WritePin(GPIOA, LED_RED_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOA, LED_YELLOW_1_Pin|LED_GREEN_1_Pin, 1);
				setTimer1(red * 1000);
			}
			break;
		case AUTO_RED:
			if(timer1_flag == 1){
				status = AUTO_GREEN;
				HAL_GPIO_WritePin(GPIOA, LED_GREEN_1_Pin, 0);
				HAL_GPIO_WritePin(GPIOA, LED_RED_1_Pin|LED_YELLOW_1_Pin, 1);
				setTimer1(green * 1000);
			}
			break;
		default:
			break;
		}
}
