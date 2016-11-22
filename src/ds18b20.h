// Copyright (c) 2016 bagXi. Contacts: <bagelwithraisins@gmail.com>
// License: https://www.gnu.org/licenses/gpl-2.0


// TODO: add doc to this file

#ifndef DS18B20_H
#define DS18B20_H


// TODO: {
//   DS18B20 + STM8S
//  #include "stm8s_conf.h"

/*  Should be defined:
 *  ONE_WIRE_PIN
 */
// }

#include "delay.h"

// ROM function commands
#define READ_ROM          (u8)0x33
#define MATCH_ROM         (u8)0x55
#define SKIP_ROM          (u8)0xCC
#define SEARCH_ROM        (u8)0xF0
#define ALARM_SEARCH      (u8)0xEC

// Memory command functions
#define WRITE_SCRATCHPAD  (u8)0x4E
#define READ_SCRATCHPAD   (u8)0xBE
#define COPY_SCRATCHPAD   (u8)0X48
#define CONVERT_T         (u8)0x44
#define RECALL_E2         (u8)0XB8
#define READ_POWER_SUPPLY (u8)0XB4

u8 READ_BYTE(void);       // TODO: doc
//u8 READ_ID(u8 *ROM_ID);   // TODO: doc
u8 RESET_PULSE(void);     // TODO: doc
void WRITE_BYTE(u8 data); // TODO: doc

// Device resolution
// TODO: change 'names'
//#define TEMP_9_BIT  0x1F //  9 bit
//#define TEMP_10_BIT 0x3F // 10 bit
//#define TEMP_11_BIT 0x5F // 11 bit
//#define TEMP_12_BIT 0x7F // 12 bit


#endif // DS18B20_H
