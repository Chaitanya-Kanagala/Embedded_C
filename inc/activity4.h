/**
 * @Activity4.h
 * @author Chaitanya Kanagala
 * @Activity 4 header file
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACTIVITY_4_H__
#define __ACTIVITY_4_H__

#define F_CPU 16000000UL 

/* Baud Rate for communication */
#define USART_BAUDRATE 9600 

/* Formula to calculate UBRR value */
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1) 
 
/* Including header files*/

#include <util/delay.h>
#include <avr/io.h>


/* Initialising the usart communication*/
void initialise_usart();


int read_usart();

void activity4(uint16_t temp);

#endif 
