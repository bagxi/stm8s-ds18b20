// Copyright (c) 2016 bagXi. Contacts: <bagelwithraisins@gmail.com>
// License: https://www.gnu.org/licenses/gpl-2.0


// TODO: add doc to this file

#include "ds18b20.h"

// TODO:
u8 RESET_PULSE(void)
{
    unsigned int i;
    OW_LOW();
    DELAY_US(DELAY_480US);
    OW_HIGH();
    DELAY_US(DELAY_15US);
    if(OW_READ())
        i = 1;
    else
        i = 0;
    DELAY_US(DELAY_480US);
    if(OW_READ())
        i = 1;
    else
        i = 0;

    return i;
}

// TODO:
void WRITE_BYTE(u8 data)
{
    for(u8 i = 0; i < 8; ++i)
    {
        if(data & 0x01)
        {        /* write '1' */
            OW_LOW();             /* master - drive bus low */
            DELAY_US(DELAY_6US);  /* master - wait 6us (A-5,6,15) */
            OW_HIGH();            /* master - release bus */
            DELAY_US(DELAY_64US); /* master - wait 64us (B-59,64,N/A) */
        }
        else
        {                 /* write '0' */
            OW_LOW();             /* master - drive bus low */
            DELAY_US(DELAY_60US); /* master - wait 60us (C-60,60,120) */
            OW_HIGH();            /* master - release bus */
            DELAY_US(DELAY_10US); /* master - wait 10us (D-8,10,N/A) */
        }
        data >>= 1;
    }
}

// TODO:
u8 READ_BYTE(void)
{
  u8 result = 0;

  for(u8 i = 0; i < 8; ++i)
  {
      result >>= 1;
      OW_LOW();             /* master - drive bus low */
      DELAY_US(DELAY_6US);  /* master - wait 6us (A-5,6,15) */
      OW_HIGH();            /* master - release bus */
      DELAY_US(DELAY_9US);  /* master - wait 9us (E-5,9,12) */
      if(OW_READ())
          result |= 0x80;
      DELAY_US(DELAY_55US); /* master - wait 55us (F-50,55,N/A) */
  }

  return (result);
}

// TODO:
u8 READ_ID(u8 *ROM_ID)
{
    if(!RESET_PULSE())
        return 0;
    WRITE_BYTE(READ_ROM);
    for(u8 i = 0; i < 8; ++i)
        ROM_ID[i] = READ_BYTE();

    return 1;
}
