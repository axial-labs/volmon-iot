#ifndef __DATACONVERTER_H_
#define __DATACONVERTER_H_

#include <stdint.h>

/***
             ★ DataConverter Union Map ★
  ┌─────────────────────────────────────────────────┐
  │	                    u32_d                       │
  ├───────────────────────┼─────────────────────────┤
  │       u16_d[1]        │         u16_d[0]        │
  ├──────────┬────────────┼────────────┬────────────┤
  │	u8_d[3]  |   u8_d[2]  │   u8_d[1]  |   u8_d[0]  │
  └──────────┴────────────┴────────────┴────────────┘

 ***/
typedef union
{
    uint32_t u32_d;
    int32_t i32_d;
    int16_t i16_d[2];
    uint16_t u16_d[2];
    uint8_t u8_d[4];
    float flt;
} dataConverterUnion;

#endif
