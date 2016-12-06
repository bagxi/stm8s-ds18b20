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


#ifndef STM8S_DISPLAY_CONF_H
#define STM8S_DISPLAY_CONF_H


#include "iostm8s105s6.h"

#define PIN_1  PA_ODR_bit.ODR3
#define PIN_2  PA_ODR_bit.ODR4
#define PIN_3  PA_ODR_bit.ODR5
#define PIN_4  PA_ODR_bit.ODR6
#define PIN_5  PB_ODR_bit.ODR7
#define PIN_6  PB_ODR_bit.ODR6
#define PIN_7  PB_ODR_bit.ODR5
#define PIN_8  PB_ODR_bit.ODR4
#define PIN_9  PB_ODR_bit.ODR3
#define PIN_10 PB_ODR_bit.ODR2
#define PIN_11 PB_ODR_bit.ODR1
#define PIN_12 PB_ODR_bit.ODR0

void init_display(void);


#endif // STM8S_DISPLAY_CONF_H
