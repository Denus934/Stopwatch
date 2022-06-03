#include "counter.h"

void init_counter() {
	count_number = 0;
	counter_flag = COUNTER_WORK;
}

void reinit_counter() {
	count_number = 0;
}

void increase_counter() {
	count_number++;
}

void set_flag(int flag) {
	if (flag != COUNTER_WORK && flag != COUNTER_STOP) {
		return;
	}
	counter_flag = flag;
}

void change_flag() {
	if (counter_flag == COUNTER_STOP) {
		counter_flag = COUNTER_WORK;
	} else {
		counter_flag = COUNTER_STOP;
	}
}

int get_flag() {
	return counter_flag;
}

int get_counter() {
	return count_number;
}
