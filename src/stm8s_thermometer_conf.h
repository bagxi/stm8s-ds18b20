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


#ifndef STM8S_THERMOMETER_CONF_H
#define STM8S_THERMOMETER_CONF_H


#include "iostm8s105s6.h"

#define OW_DDR PC_DDR_bit.DDR5
#define OW_ODR PC_ODR_bit.ODR5
#define OW_CR1 PC_CR1_bit.C15
#define OW_IDR PC_IDR_bit.IDR5

#define OW_MASK 0x01


#endif // STM8S_THERMOMETER_CONF_H
