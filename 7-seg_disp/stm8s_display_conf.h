// Copyright (c) 2016 bagXi. Contacts: <imcodelike@gmail.com>
// License: https://www.gnu.org/licenses/gpl-2.0


// Define of pins for 4-digit 7-segment display

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
