// Copyright (c) 2016 bagXi. Contacts: <imcodelike@gmail.com>
// License: https://www.gnu.org/licenses/gpl-2.0


#include "four_digit_seven_segment_display.h"

// TODO: add 'floatingPoint()'
void print_number(float number)
{
    // divide number into digits
    u8 digit[4];
    u16 num = number * 100;
    for (u8 i = 0; i < 4; ++i)
    {
        digit[3 - i] = num % 10;
        num /= 10;
    }

    // print digits
    first_segment_on();
    print_digit((u8) );
    first_segment_off();

    second_segment_on();
    print_digit((u8) );
    second_segment_off();

    third_segment_on();
    print_digit((u8) );
    third_segment_off();

    fourth_segment_on();
    print_digit((u8) );
    fourth_segment_off();
}


void first_segment_on(void)
{
    PIN_12 = 1;
}

void first_segment_off(void)
{
    PIN_12 = 0;
}

void second_segment_on(void)
{
    PIN_9 = 1;
}

void second_segment_off(void)
{
    PIN_9 = 0;
}

void third_segment_on(void)
{
    PIN_8 = 1;
}

void third_segment_off(void)
{
    PIN_8 = 0;
}

void fourth_segment_on(void)
{
    PIN_6 = 1;
}

void fourth_segment_off(void)
{
    PIN_6 = 0;
}

void print_digit(u8 digit)
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
            none();
            break;
    }
}

// TODO:
/*void floating_point(u8 point)
{
    PIN_3  = point;
}*/

void one(void)
{
    // 'off' segments
    PIN_1  = 1;
    PIN_2  = 1;
    PIN_5  = 1;
    PIN_10 = 1;
    PIN_11 = 1;

    // 'on' segments
    PIN_4  = 0;
    PIN_7  = 0;
}

void two(void)
{
    // 'off' segments
    PIN_4  = 1;
    PIN_10 = 1;

    // 'on' segments
    PIN_1  = 0;
    PIN_2  = 0;
    PIN_5  = 0;
    PIN_7  = 0;
    PIN_11 = 0;
}

void three(void)
{
    // 'off' segments
    PIN_1  = 1;
    PIN_10 = 1;

    // 'on' segments
    PIN_2  = 0;
    PIN_4  = 0;
    PIN_5  = 0;
    PIN_7  = 0;
    PIN_11 = 0;
}

void four(void)
{
    // 'off' segments
    PIN_1  = 1;
    PIN_2  = 1;
    PIN_11 = 1;

    // 'on' segments
    PIN_4  = 0;
    PIN_5  = 0;
    PIN_7  = 0;
    PIN_10 = 0;
}

void five(void)
{
    // 'off' segments
    PIN_1  = 1;
    PIN_7  = 1;

    // 'on' segments
    PIN_2  = 0;
    PIN_4  = 0;
    PIN_5  = 0;
    PIN_10 = 0;
    PIN_11 = 0;
}

void six(void)
{
    // 'off' segments
    PIN_7  = 1;

    // 'on' segments
    PIN_1  = 0;
    PIN_2  = 0;
    PIN_4  = 0;
    PIN_5  = 0;
    PIN_10 = 0;
    PIN_11 = 0;
}

void seven(void)
{
    // 'off' segments
    PIN_1  = 1;
    PIN_2  = 1;
    PIN_5  = 1;
    PIN_10 = 1;

    // 'on' segments
    PIN_4  = 0;
    PIN_7  = 0;
    PIN_11 = 0;
}

void eight(void)
{
    // 'on' all segments
    PIN_1  = 0;
    PIN_2  = 0;
    PIN_4  = 0;
    PIN_5  = 0;
    PIN_7  = 0;
    PIN_10 = 0;
    PIN_11 = 0;
}

void nine(void)
{
    // 'off' segments
    PIN_1  = 1;

    // 'on' segments
    PIN_2  = 0;
    PIN_4  = 0;
    PIN_5  = 0;
    PIN_7  = 0;
    PIN_10 = 0;
    PIN_11 = 0;
}

void zero(void)
{
    // 'off' segments
    PIN_5  = 1;

    // 'on' segments
    PIN_1  = 0;
    PIN_2  = 0;
    PIN_4  = 0;
    PIN_7  = 0;
    PIN_10 = 0;
    PIN_11 = 0;
}

void none(void)
{
    // 'off' all segments
    PIN_1  = 1;
    PIN_2  = 1;
    PIN_4  = 1;
    PIN_5  = 1;
    PIN_7  = 1;
    PIN_10 = 1;
    PIN_11 = 1;
}
