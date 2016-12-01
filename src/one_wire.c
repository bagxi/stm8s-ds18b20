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


#include "one_wire.h"

// TODO: move to another file
void init(void)
{
    OW_CR1 = 1;

    if(reset_pulse())
    {
        write_byte(SKIP_ROM);
        write_byte(WRITE_SCRATCHPAD);
        write_byte(0x32); // ???
        write_byte(0);    // ???
        write_byte(0x1f); // ???
    }
}

// TODO: move to another file
float read_temperature(void)
{
    return read_t() * 0.0625;
}


// Read one byte command
u8 read_byte(void)
{
    u8 byte = 0;

    for(u8 i = 0; i < 8; ++i)
    {
        OW_DDR = 1;
        OW_ODR = 0;

        asm("nop");
        OW_DDR = 0;
        delay_us(1);
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");

        if (OW_IDR)
            byte |= 1 << i;

        asm("nop");
        asm("nop");
    }

    return byte;
}

// TODO:
// Read id of connected device
/*u8 read_id(u8 *rom_id)
{
    if(!reset_pulse())
        return 0;
    write_byte(READ_ROM);
    for(u8 i = 0; i < 8; ++i)
        rom_id[i] = read_byte();

    return 1;
}*/

// Read temperature from DS18B20
u16 read_t(void)
{
    u16 temperature = 0;
    if (reset_pulse())
    {
        // DS18B20 begin temperature conversion
        write_byte(SKIP_ROM);
        write_byte(CONVERT_T);
        delay_us(75);

        // Receive temperature data from device
        reset_pulse();
        write_byte(SKIP_ROM);
        write_byte(READ_SCRATCHPAD);
        u8 byte[2];
        byte[0] = read_byte();
        byte[1] = read_byte();
        temperature = byte[1];
        temperature = temperature << 8;
        temperature |= byte[0];
    }

    return temperature;
}

// Verify that at least one device is present
u8 reset_pulse(void)
{
    OW_DDR = 1;
    OW_ODR = 0;
    delay_us(48);

    OW_DDR = 0;
    delay_us(6);
    u8 present;
    if(OW_IDR)
        present = 0;
    else
        present = 1;
    delay_us(41);

    return present;
}

// Write one-byte command
void write_byte(u8 byte)
{
    for(u8 i = 0; i < 8; ++i)
    {
        OW_DDR = 1;
        OW_ODR = 0;
        asm ("nop");
        if(data & 0x01)
            OW_DDR = 0;
        delay_us(6);

        OW_DDR = 0;
        byte >>= 1;

        asm ("nop");
    }
}
