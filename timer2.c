/*
 * timer2.c
 *
 *  Created on: Oct 4, 2022
 *      Author: phamv
 */
#include "timer2.h"

int timer2_flag = 0;
int timer2_counter = 0;
int timer2_cycle = 10;

void setTimer2(int duration2){
	timer2_flag = 0;
	timer2_counter = duration2/timer2_cycle;
}

void timer_run2(){
	if(timer2_counter >= 0){
		timer2_counter--;
		if(timer2_counter == 0) timer2_flag = 1;
	}
}
