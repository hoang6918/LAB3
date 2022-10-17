/*
 * timer3.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Acer
 */

#include "timer3.h"

int timer3_flag = 0;
int timer3_counter = 0;
int timer3_cycle = 10;

void setTimer3(int duration){
	timer3_flag = 0;
	timer3_counter = duration / timer3_cycle;
}

void timer_run3(){
	if(timer3_counter >= 0){
		timer3_counter--;
		if(timer3_counter == 0) timer3_flag = 1;
	}
}
