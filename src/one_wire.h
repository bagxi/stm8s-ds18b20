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


#ifndef ONE_WIRE_H
#define ONE_WIRE_H


#include "delay.h"
#include "ds18b20.h"
#include "linux_kernel_types.h"
#include "stm8s_thermometer_conf.h"

u8 read_byte(void);
u8 w1_readbyte();// TODO:
//u8 read_id(u8 *rom_id);// TODO: implement this method in next versions
float read_t(void);
u8 reset_pulse(void);
void write_byte(u8 byte);

void init(void);// TODO: move to another file
//float read_temperature(void);// TODO: move to another file


#endif // ONE_WIRE_H
