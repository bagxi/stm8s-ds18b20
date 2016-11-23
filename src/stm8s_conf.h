// Copyright (c) 2016 bagXi. Contacts: <imcodelike@gmail.com>
// License: https://www.gnu.org/licenses/gpl-2.0


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
