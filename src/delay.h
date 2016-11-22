// Copyright (c) 2016 bagXi. Contacts: <bagelwithraisins@gmail.com>
// License: https://www.gnu.org/licenses/gpl-2.0


// TODO: add doc to this file

#ifndef DELAY_H
#define DELAY_H


#define DELAY_2US   (u8)10
#define DELAY_6US   (u8)32
#define DELAY_9US   (u8)48
#define DELAY_10US  (u8)53
#define DELAY_15US  (u8)80
#define DELAY_55US  (u16)293
#define DELAY_60US  (u16)320
#define DELAY_64US  (u16)341
#define DELAY_70US  (u16)373
#define DELAY_80US  (u16)426
#define DELAY_100US (u16)534 // or maybe 533
#define DELAY_410US (u16)2187
#define DELAY_480US (u16)2560

void delay_ms(u16);
#define delay_ms(loops) _asm("$N: \n decw X \n jrne $L \n nop", (u16)loops);


#endif // DELAY_H
