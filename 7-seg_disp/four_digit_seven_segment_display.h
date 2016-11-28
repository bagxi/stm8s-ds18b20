// Copyright (c) 2016 bagXi. Contacts: <imcodelike@gmail.com>
// License: https://www.gnu.org/licenses/gpl-2.0


// TODO: place for doc

#ifndef FOUR_DIGIT_SEVEN_SEGMENT_DISPLAY_H
#define FOUR_DIGIT_SEVEN_SEGMENT_DISPLAY_H


#include "kernel_like_types.h"

void print_number(float number);// TODO:

// commands for 'printing' digit for each segment
void first_digit(u8 digit, u8 floatingPoint);
void second_digit(u8 digit, u8 floatingPoint);
void third_digit(u8 digit, u8 floatingPoint);
void fourth_digit(u8 digit, u8 floatingPoint);

// commands for 'printing' digit on one segment
void print_digit(u8 digit, u8 floatingPoint);
void one();
void two();
void three();
void four();
void five();
void six();
void seven();
void eight();
void nine();
void zero();
void nil();


#endif // FOUR_DIGIT_SEVEN_SEGMENT_DISPLAY_H
