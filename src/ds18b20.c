// Copyright (c) 2016 bagXi. Contacts: <bagelwithraisins@gmail.com>
// License: https://www.gnu.org/licenses/gpl-2.0


// TODO: add doc to this file

#include "ds18b20.h"
#include "stm8s_conf.h"

// TODO:
void INIT(){
    OW_CR1 = 1;
}

u8 RESET_PULSE(void)
{
    OW_DDR = 1;
    OW_ODR = 0;
    
    DELAY_US(DELAY_480US);
    OW_DDR = 0;
    DELAY_US(DELAY_15US);
    u8 i;
    if(OW_IDR)
        i = 0;
    else
        i = 1;
    DELAY_US(DELAY_465US);

    return i;
}

// TODO:
void WRITE_BYTE(u8 data)
{
    for(u8 i = 0; i < 8; ++i)
    {
      OW_DDR = 1;
      OW_ODR = 0;
        
      asm ("nop");
      if(data & 0x01)
      {        
         OW_DDR = 0;
      }
      DELAY_US(DELAY_60US);
      OW_DDR = 0;
      data >>= 1;
      
      asm ("nop");
    }
}

// TODO:
u8 READ_BYTE(void)
{
  u8 result = 0;

  for(u8 i = 0; i < 8; ++i)
  {
    OW_DDR = 1;
    OW_ODR = 0;
    
    asm("nop");
    
    OW_DDR = 0;
    DELAY_US(DELAY_10US);
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    
    if (OW_IDR){
      result |= 1 << i;
    }
    asm("nop");
    asm("nop");
      
  }

  return (result);
}

double READ_TEMPERATURE(){
    u8 data[2];
    int r = 0;
    if (RESET_PULSE()){
      WRITE_BYTE(SKIP_ROM);
      WRITE_BYTE(CONVERT_T);
      DELAY_US(DELAY_480US);
      DELAY_US(DELAY_70US);
      DELAY_US(DELAY_100US);
      DELAY_US(DELAY_100US);
      
      
      RESET_PULSE();
      WRITE_BYTE(SKIP_ROM);
      WRITE_BYTE(READ_SCRATCHPAD);
      data[0] = READ_BYTE();
      data[1] = READ_BYTE();
      r = data[1];
      r = r << 8;
      r |= data[0];
    }
    return r*0.0625;
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
