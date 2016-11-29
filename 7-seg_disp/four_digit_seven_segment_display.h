// Copyright (c) 2016 bagXi. Contacts: <imcodelike@gmail.com>
// License: https://www.gnu.org/licenses/gpl-2.0


// Commands for 4-digit 7-segment display

#ifndef FOUR_DIGIT_SEVEN_SEGMENT_DISPLAY_H
#define FOUR_DIGIT_SEVEN_SEGMENT_DISPLAY_H


#include "kernel_like_types.h"

void print_number(float number);

void first_segment_on(void);
void first_segment_off(void);
void second_segment_on(void);
void second_segment_off(void);
void third_segment_on(void);
void third_segment_off(void);
void fourth_segment_on(void);
void fourth_segment_off(void);

void print_digit(u8 digit);

void one(void);
void two(void);
void three(void);
void four(void);
void five(void);
void six(void);
void seven(void);
void eight(void);
void nine(void);
void zero(void);
void none(void);


#endif // FOUR_DIGIT_SEVEN_SEGMENT_DISPLAY_H
