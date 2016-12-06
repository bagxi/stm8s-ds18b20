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


#include "four_digit_seven_segment_display.h"
#include "one_wire.h"
#include "stm8s_display_conf.h"
#include "stm8s_thermometer_conf.h"

int main(void)
{
    init_display();
    init();

    while(1)
    {
        float temp = read_t();
        print_number(temp);
    }

    return 0;
}
