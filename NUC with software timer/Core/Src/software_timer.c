/*
 * software_timer.c
 *
 *  Created on: Oct 6, 2023
 *      Author: DELL F89F
 */

#include "software_timer.h"

int timer_counter[MAX_Num_Timer] = {0};
int timer_flag[MAX_Num_Timer] = {0};

void setTimer(int duration, int idx){
	timer_counter[idx] = duration;
	timer_flag[idx] = 0;
}

void timerRun(int idx){
	if (timer_counter[idx] > 0){
		timer_counter[idx]--;
		if (timer_counter[idx] <= 0){
			timer_flag[idx] = 1;
		}
	}
}
