/*
 * button.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Acer
 */
#include"button.h"

int press3 = 0;
int press_count3 = 0;
int release_count3 = 0;

int press2 = 0;
int press_count2 = 0;
int release_count2 = 0;

int press1 = 0;
int press_count1 = 0;
int release_count1 = 0;

int button_flag1 = 0;
int button_flag2 = 0;
int button_flag3 = 0;


void getKeyInput1(){
	 if(HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin) ==0)
		   {
			   press_count1++;
			   if(press_count1>40)
			   {
				   if(press1 == 0)
				   {
					   press1 = 1;
					   button_flag1= 1;
				   }
				   press_count1 = 0;
			   }
		   }
		   else
		   {
			   release_count1++;
			   if(release_count1>40)
			   {
				   press1 = 0;
				   release_count1 = 0;
			   }
		   }
}

void getKeyInput2(){
	 if(HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin) ==0)
		   {
			   press_count2++;
			   if(press_count2>40)
			   {
				   if(press2 == 0)
				   {
					   press2 = 1;
					   button_flag2= 1;
				   }
				   press_count2 = 0;
			   }
		   }
		   else
		   {
			   release_count2++;
			   if(release_count2>40)
			   {
				   press2 = 0;
				   release_count2 = 0;
			   }
		   }
}

void getKeyInput3(){
	 if(HAL_GPIO_ReadPin(BUTTON3_GPIO_Port, BUTTON3_Pin) ==0)
		   {
			   press_count3++;
			   if(press_count3>40)
			   {
				   if(press3 == 0)
				   {
					   press3 = 1;
					   button_flag3= 1;
				   }
				   press_count3 = 0;
			   }
		   }
		   else
		   {
			   release_count3++;
			   if(release_count3>40)
			   {
				   press3 = 0;
				   release_count3 = 0;
			   }
		   }
}
