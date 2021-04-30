/**
 * @file Activity4.c
 * @author Chaitanya Kanagala
 * @brief Functions to print the Temperature in Oscilloscope 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity4.h"

void initialise_usart()
{
    UBRR0H = (uint8_t)(UBRR_VALUE>>8);
    UBRR0L = (uint8_t)UBRR_VALUE;
    UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);
    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

int read_usart()
{
    while(!(UCSR0A &(1<<RXC0)))
    {
    }
    return UDR0;
}

void activity4(uint16_t temp)
{
    unsigned char var1[]="Temp = 20 degree Celsius\n";
    unsigned char var2[]="Temp = 25 degree Celsius\n";
    unsigned char var3[]="Temp = 29 degree Celsius\n";
    unsigned char var4[]="Temp = 33 degree Celsius\n";
    unsigned char var5[]="Temp = 0 degree Celsius\n";
    int j=0;
        if(temp>=0 && temp<=200){
            j=0;
            while(var1[j]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  
            UDR0 = var1[j];       
            j++;
            }
            _delay_ms(2000);
        }
        else if(temp>=210 && temp<=500){
            j=0;
            while(var2[j]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  
            UDR0 = var2[j];       
            j++;
            }
            _delay_ms(2000);
        }
        else if(temp>=510 && temp<=700){        
            j=0;
            while(var3[j]!=0){
            while (!( UCSR0A & (1<<UDRE0))); 
            UDR0 = var3[j];        
            j++;
            }
            _delay_ms(2000);
        }
        else if(temp>=710 && temp<=1024){         
            j=0;
            while(var4[j]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  
            UDR0 = var4[j];        
            j++;
            }
            _delay_ms(2000);
        }
        else{      
            j=0;
            while(var5[j]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  
            UDR0 = var5[j];       
            j++;
            }
            _delay_ms(2000);
            
        }
}
