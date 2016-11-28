// Copyright (c) 2016 bagXi. Contacts: <imcodelike@gmail.com>
// License: https://www.gnu.org/licenses/gpl-2.0


// TODO: place for doc

#include "four_digit_seven_segment_display.h"

void print_number(float number)
{
}


void first_digit(u8 digit, u8 floatingPoint)
{
    PIN_12 = 1;
    print_digit(digit, floatingPoint);
}

void second_digit(u8 digit, u8 floatingPoint)
{
    PIN_9 = 1;
    print_digit(digit, floatingPoint);
}

void third_digit(u8 digit, u8 floatingPoint)
{
    PIN_8 = 1;
    print_digit(digit, floatingPoint);
}

void fourth_digit(u8 digit, u8 floatingPoint)
{
    PIN_6 = 1;
    print_digit(digit, floatingPoint);
}

void print_digit(u8 digit, u8 floatingPoint)
{
    switch (digit)
    {
        case 1:
            one();
            break;
        case 2:
            two();
            break;
        case 3:
            three();
            break;
        case 4:
            four();
            break;
        case 5:
            five();
            break;
        case 6:
            six();
            break;
        case 7:
            seven();
            break;
        case 8:
            eight();
            break;
        case 9:
            nine();
            break;
        case 0:
            zero();
            break;
        default:
            nil();
            break;
    }

    if (floatingPoint == 0)
        PIN_4  = 1;
}

void one()
{
    PIN_1  = 1;
    PIN_2  = 1;
    PIN_5  = 1;
    PIN_10 = 1;
    PIN_11 = 1;
}

void two()
{
    PIN_3  = 1;
    PIN_10 = 1;
}

void three()
{
    PIN_1  = 1;
    PIN_10 = 1;
}

void four()
{
    PIN_1  = 1;
    PIN_2  = 1;
    PIN_11 = 1;
}

void five()
{
    PIN_1  = 1;
    PIN_7  = 1;
}

void six()
{
    PIN_7  = 1;
}

void seven()
{
    PIN_1  = 1;
    PIN_2  = 1;
    PIN_10 = 1;
}

void eight()
{
}

void nine()
{
    PIN_1  = 1;
}

void zero()
{
    PIN_5  = 1;
}

void nil()
{
    PIN_1  = 1;
    PIN_2  = 1;
    PIN_3  = 1;
    PIN_5  = 1;
    PIN_7  = 1;
    PIN_10 = 1;
    PIN_11 = 1;
}
