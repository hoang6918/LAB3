/*
 * updateled.c
 *
 *  Created on: Oct 8, 2022
 *      Author: Acer
 */
#include "updateled.h"
int counter1 = 3;


void updateled()
{
	switch(counter1)
	{
	case 3:
				if(timer2_flag == 1 && count11!= 0)
				{
			counter1 = 2;
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
			display7SEG1(count11%10);
			display7SEG2(count11/10);
			count11--;
			setTimer2(500);
				}
			if(count11 == 0 && x== 0)
				{
			count11 = global_yellow1;
			x = 1;
				}
			if(count11 ==0 && x==1)
				{
			count11 = global_red1;
			x =2;
				}
			if(count11 ==0 && x==2)
				{
			count11 = global_green1;
			x =0;
				}
			    break;
	case 2:
			if(timer2_flag == 1 && count22!= 0)
			{
		counter1 = 3;
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
		display7SEG1(count22%10);
		display7SEG2(count22/10);
		count22--;
		setTimer2(500);
			}
		if(count22 ==0 && y==0)
			{
		count22 = global_green1;
		y =1;
			}
		if(count22 ==0 && y==1)
			{
		count22 = global_yellow1;
		y =2;
			}
		if(count22 ==0 && y==2)
			{
		count22 = global_red1;
		y =0;
			}
		    break;
	default:
		break;
	}
}

