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


#ifndef DS18B20_H
#define DS18B20_H


#include "linux_kernel_types.h"

// ROM function commands
#define READ_ROM          (u8) 0x33
#define MATCH_ROM         (u8) 0x55
#define SKIP_ROM          (u8) 0xCC
#define SEARCH_ROM        (u8) 0xF0
#define ALARM_SEARCH      (u8) 0xEC

// Memory command functions
#define WRITE_SCRATCHPAD  (u8) 0x4E
#define READ_SCRATCHPAD   (u8) 0xBE
#define COPY_SCRATCHPAD   (u8) 0X48
#define CONVERT_T         (u8) 0x44
#define RECALL_E2         (u8) 0XB8
#define READ_POWER_SUPPLY (u8) 0XB4


#endif // DS18B20_H
