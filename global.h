/*
 * global.h
 *
 *  Created on: Oct 4, 2022
 *      Author: phamv
 */
#include"timer.h"
#include"timer2.h"
#include"timer3.h"
#include"main.h"

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define INIT		1
#define AUTO_RED	2
#define AUTO_GREEN	3
#define AUTO_YELLOW	4

extern int status1;
extern int status;

extern int count11;
extern int count22;

extern int x;
extern int y;

extern int global_red;
extern int global_green;
extern int global_yellow;

extern int global_red1;
extern int global_green1;
extern int global_yellow1;
#endif /* INC_GLOBAL_H_ */
