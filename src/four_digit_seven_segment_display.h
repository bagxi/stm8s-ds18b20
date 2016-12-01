// Copyright (c) 2016 bagxi. All rights reserved.
//
// Licensed under the GNU General Public License, Version 2.0
//
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the Free
// Software Foundation; version 2 of the License.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, see <https://www.gnu.org/licenses/gpl-2.0>


#ifndef FOUR_DIGIT_SEVEN_SEGMENT_DISPLAY_H
#define FOUR_DIGIT_SEVEN_SEGMENT_DISPLAY_H


#include "kernel_like_types.h"
#include "stm8s_display_conf.h"

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
