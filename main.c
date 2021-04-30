/**
 * @main.c
 * @author Chaitanya kanagala
 * @code for maintaining the temperature of the seat
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

int main(void)
{
    uint16_t temp;
    
    while(1)
    {
	 
        if(activity1()==1) 
        {
            /* Toggling Led activity 1*/ 
            led_on();
		
	    /* Activity_2 related to ADC value*/
            temp=activity2();
		
	    /* Activity 3 Pulse Width Modulation according to its ADC value*/
            activity3(temp); 
	    /* Communication using USART protocol */
            activity4(temp);
	   
            

        }
        else  
        {
            led_off();
		    _delay_ms(2000);
        }

    }
    return 0;
}
