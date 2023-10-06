/*
 * software_timer.h
 *
 *  Created on: Oct 6, 2023
 *      Author: DELL F89F
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define MAX_Num_Timer 5

extern int timer_flag[MAX_Num_Timer];

void setTimer(int duration, int idx);
void timerRun(int idx);

#endif /* INC_SOFTWARE_TIMER_H_ */
