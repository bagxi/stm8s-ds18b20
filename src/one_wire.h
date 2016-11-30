// Copyright (c) 2016 bagXi. Contacts: <imcodelike@gmail.com>
// License: https://www.gnu.org/licenses/gpl-2.0


// TODO: add doc to this file

#ifndef ONE_WIRE_H
#define ONE_WIRE_H


#include "delay.h"
#include "ds18b20.h"
#include "linux_kernel_types.h"
#include "stm8s_ds18b20_conf.h"

u8 read_byte(void);
//u8 read_id(u8 *rom_id);// TODO: implement this method in next versions
u16 read_t(void);
u8 reset_pulse(void);
void write_byte(u8 byte);

void init(void);// TODO: move to another file
float read_temperature(void);// TODO: move to another file


#endif // ONE_WIRE_H
