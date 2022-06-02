#include "led.h"

void clear_segment() {
	HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
}

void set_segment(int segment) {
	switch (segment) {
	case 1:
		HAL_GPIO_WritePin(DIG1_GPIO_Port, DIG1_Pin, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(DIG2_GPIO_Port, DIG2_Pin, GPIO_PIN_SET);
		break;
	case 3:
		HAL_GPIO_WritePin(DIG3_GPIO_Port, DIG3_Pin, GPIO_PIN_SET);
		break;
	}
}

void unset_segment(int segment) {
	switch (segment) {
	case 1:
		HAL_GPIO_WritePin(DIG1_GPIO_Port, DIG1_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(DIG2_GPIO_Port, DIG2_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(DIG3_GPIO_Port, DIG3_Pin, GPIO_PIN_RESET);
		break;
	}
}

void set_digit(int digit) {
	switch (digit) {
	case -1:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(DP_GPIO_Port, DP_Pin, GPIO_PIN_RESET);
		break;
	case 0:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(DP_GPIO_Port, DP_Pin, GPIO_PIN_RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(DP_GPIO_Port, DP_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(DP_GPIO_Port, DP_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(DP_GPIO_Port, DP_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(DP_GPIO_Port, DP_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(DP_GPIO_Port, DP_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(DP_GPIO_Port, DP_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(DP_GPIO_Port, DP_Pin, GPIO_PIN_RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(DP_GPIO_Port, DP_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(DP_GPIO_Port, DP_Pin, GPIO_PIN_RESET);
		break;
	}
}

void set_E() {
	set_digit(-1);
}

void set_digit_in_segment(int segment, int digit) {
	if (segment < MIN_SEGMENT || segment > MAX_SEGMENT) {
		return;
	}
	if (digit < MIN_DIGIT || digit > MAX_DIGIT) {
		return;
	}

	set_segment(segment);
	set_digit(digit);
	HAL_Delay(1);
	unset_segment(segment);
}

void set_dot() {
	HAL_GPIO_WritePin(DP_GPIO_Port, DP_Pin, GPIO_PIN_SET);
}

void unset_dot() {
	HAL_GPIO_WritePin(DP_GPIO_Port, DP_Pin, GPIO_PIN_RESET);
}

void set_number(int number) {
	if (number > MAX_NUMBER) {
		set_int(-1);
	} else {
		set_int(number);
	}
}

void set_int(int int_number) {
	int right_digit, mid_digit, left_digit;
	if (int_number == -1) {
		right_digit = -1;
		mid_digit = -1;
		left_digit = -1;
	} else {
		right_digit = int_number % 10;
		int_number /= 10;
		mid_digit = int_number % 10;
		int_number /= 10;
		left_digit = int_number % 10;
	}

	set_digit_in_segment(1, left_digit);
	set_digit_in_segment(2, mid_digit);
	set_digit_in_segment(3, right_digit);
}

void set_float(float float_number) {

}

void set_end() {
	for (int i = 0; i < 3; ++i) {
		unset_segment(0);
		unset_segment(1);
		unset_segment(2);
		HAL_Delay(100);
		set_segment(0);
		set_segment(1);
		set_segment(2);
		HAL_Delay(100);
	}
}
