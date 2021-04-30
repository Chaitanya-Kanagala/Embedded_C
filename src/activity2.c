/**
 * @file Activity2.c
 * @author Chaitanya Kanagala
 * @ADC values 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 */
#include "activity2.h"

void initialiseADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA= (1<<ADEN)|(7<<ADPS0);
}
uint16_t readadc(uint8_t ch)
{
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);
}

uint16_t activity2(void)
{
      initialiseADC();
      uint16_t temp;
      temp=readadc(0);
      return temp;
}
