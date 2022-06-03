/*
 * counter.h
 *
 *  Created on: May 12, 2022
 *      Author: admin
 */

#ifndef INC_COUNTER_H_
#define INC_COUNTER_H_

#define COUNTER_WORK 1
#define COUNTER_STOP 0

int count_number;
int counter_flag;

void init_counter();
void reinit_counter();

void increase_counter();

void set_flag(int flag);
void change_flag();
int get_flag();

int get_counter();

#endif /* INC_COUNTER_H_ */
