/*
 * quetled.c
 *
 *  Created on: Oct 9, 2022
 *      Author: Acer
 */
#include"quetled.h"
int count = 0;

void scanled( int counter, int mod)
{
	switch(count)
			{
			case 0:
				HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
				HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
				HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
				HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
				display7SEG1(counter%10);
				display7SEG2(counter/10);
				setTimer1(250);
				count = 1;
				break;
			case 1:
				if(timer1_flag==1)
				{
				HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
				HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
				HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
				HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
			    display7SEG1(mod);
			    display7SEG2(0);
				setTimer1(250);
			    count = 2;
				}
				break;
			case 2:
				if(timer1_flag==1)
				{
				HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
				HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
				HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
				HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
				display7SEG1(counter%10);
				display7SEG2(counter/10);
				setTimer1(250);
				count = 1;
				}
				break;

			default:
				break;
			}
}

