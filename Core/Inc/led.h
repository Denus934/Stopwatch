/*
 * led.h
 *
 *  Created on: May 12, 2022
 *      Author: admin
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "main.h"

#define MAX_NUMBER 999
#define MIN_SEGMENT 0
#define MAX_SEGMENT 3
#define MIN_DIGIT -1
#define MAX_DIGIT 9

void clear_segment();
void set_segment(int);
void unset_segment(int);

void set_digit(int);
void set_digit_in_segment(int, int);

void set_dot();
void unset_dot();

void set_number(int);
void set_int(int);
void set_float(float);

void set_end();

#endif /* INC_LED_H_ */
