// Copyright (c) 2016 bagXi. Contacts: <imcodelike@gmail.com>
// License: https://www.gnu.org/licenses/gpl-2.0


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


// Read one byte from device
u8 read_byte(void)
{
    u8 result = 0;

    for(u8 i = 0; i < 8; ++i)
    {
        OW_DDR = 1;
        OW_ODR = 0;

        asm("nop");

        OW_DDR = 0;
        DELAY_US(DELAY_10US);
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");

        if (OW_IDR)
            result |= 1 << i;

        asm("nop");
        asm("nop");
    }

    return (result);
}

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

// Read DS18B20's temperature
u16 read_t(void)
{
    u16 temperature = 0;

    u8 byte[2];
    if (reset_pulse())
    {
        // DS18B20 begin temperature conversion
        write_byte(SKIP_ROM);
        write_byte(CONVERT_T);
        // TODO: make as 'Delay(750us)'
        DELAY_US(DELAY_480US);
        DELAY_US(DELAY_70US);
        DELAY_US(DELAY_100US);
        DELAY_US(DELAY_100US);

        // Receive temperature data from device
        reset_pulse();
        write_byte(SKIP_ROM);
        write_byte(READ_SCRATCHPAD);
        byte[0] = read_byte();
        byte[1] = read_byte();
        temperature = byte[1];
        temperature = temperature << 8;
        temperature |= byte[0];
    }

    return temperature;
}

// Initialization of DS18B20
// Verify that at least one device is present
u8 reset_pulse(void)
{
    OW_DDR = 1;
    OW_ODR = 0;

    DELAY_US(DELAY_480US);
    OW_DDR = 0;
    DELAY_US(DELAY_15US);
    u8 i;
    if(OW_IDR)
        i = 0;
    else
        i = 1;
    DELAY_US(DELAY_465US);

    return i;
}

// Write one-byte command to device
void write_byte(u8 byte)
{
    for(u8 i = 0; i < 8; ++i)
    {
        OW_DDR = 1;
        OW_ODR = 0;

        asm ("nop");
        if(data & 0x01)
            OW_DDR = 0;
        DELAY_US(DELAY_60US);
        OW_DDR = 0;
        byte >>= 1;

        asm ("nop");
    }
}
