// Copyright (c) 2016 bagXi. All rights reserved.
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


#include "stm8s_display_conf.h"

void init_display(void)
{
    // pin 1
    PA_DDR_bit.DDR3 = 1;
    PA_CR1_bit.C13 = 1;
    PA_CR2_bit.C23 = 0;

    // pin 2
    PA_DDR_bit.DDR4 = 1;
    PA_CR1_bit.C14 = 1;
    PA_CR2_bit.C24 = 0;

    // pin 3
    PA_DDR_bit.DDR5 = 1;
    PA_CR1_bit.C15 = 1;
    PA_CR2_bit.C25 = 0;

    // pin 4
    PA_DDR_bit.DDR6 = 1;
    PA_CR1_bit.C16 = 1;
    PA_CR2_bit.C26 = 0;

    // pin 5
    PB_DDR_bit.DDR7 = 1;
    PB_CR1_bit.C17 = 1;
    PB_CR2_bit.C27 = 0;

    // pin 6
    PB_DDR_bit.DDR6 = 1;
    PB_CR1_bit.C16 = 1;
    PB_CR2_bit.C26 = 0;

    // pin 7
    PB_DDR_bit.DDR5 = 1;
    PB_CR1_bit.C15 = 1;
    PB_CR2_bit.C25 = 0;

    // pin 8
    PB_DDR_bit.DDR4 = 1;
    PB_CR1_bit.C14 = 1;
    PB_CR2_bit.C24 = 0;

    // pin 9
    PB_DDR_bit.DDR3 = 1;
    PB_CR1_bit.C13 = 1;
    PB_CR2_bit.C23 = 0;

    // pin 10
    PB_DDR_bit.DDR2 = 1;
    PB_CR1_bit.C12 = 1;
    PB_CR2_bit.C22 = 0;

    // pin 11
    PB_DDR_bit.DDR1 = 1;
    PB_CR1_bit.C11 = 1;
    PB_CR2_bit.C21 = 0;

    // pin 12
    PB_DDR_bit.DDR0 = 1;
    PB_CR1_bit.C10 = 1;
    PB_CR2_bit.C20 = 0;
}
