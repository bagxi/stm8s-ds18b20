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


// Defines of ports and pins of STM8S which well be used by DS18B20

#ifndef STM8S_CONF_H
#define STM8S_CONF_H


#include "iostm8s105s6.h"

#define OW_DDR PD_DDR_bit.DDR2
#define OW_ODR PD_ODR_bit.ODR2
#define OW_CR1 PD_CR1_bit.C12
#define OW_IDR PD_IDR_bit.IDR2

#define OW_MASK 0x01


#endif // STM8S_CONF_H
