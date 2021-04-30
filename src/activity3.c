/**
 * @Activity3.c
 * @Chaitanya Kanagala 
 * @Acquiring ADC into PWM
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity2.h"
#include "activity3.h"

void initialisetimer()
{
    TCCR1A |= (1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B |= (1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB |=(1<<PB1);
}

void activity3(uint16_t temp)
{
    initialisetimer();
    if(temp>=0 && temp<=250){
            OCR1A = pwm_25;
            _delay_ms(2000);
        }
    
        else if(temp>=260 && temp<=500){
             OCR1A = pwm_50;
            _delay_ms(2000);
        }
    
        else if(temp>=510 && temp<=750){
             OCR1A = pwm_75;
            _delay_ms(2000);
        }
    
        else if(temp>=760 && temp<=1024){
             OCR1A = pwm_95;
            _delay_ms(2000);
        }
    
        else
        {
            
            OCR1A=0;
            _delay_ms(2000);
        }
}
