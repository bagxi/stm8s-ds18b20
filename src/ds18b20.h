// Copyright (c) 2016 bagXi. Contacts: <imcodelike@gmail.com>
// License: https://www.gnu.org/licenses/gpl-2.0


// Defines of ROM Function Command and Memory Function Command for DS18B20

#ifndef DS18B20_H
#define DS18B20_H


#include "kernelLikeTypes.h"

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


#endif // DS18B20_H
