/**
 * @file Activity3.h
 * @author Chaitanya Kanagala
 * @Header file for activity3
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY_3_H__
#define __ACTIVITY_3_H__

/* pulse width modulation for 25%*/
#define pwm_25 (250)


/* pulse width modulation for 50%*/
#define pwm_50 (512) 


/* pulse width modulation for 75%*/
#define pwm_75 (750) 


/* pulse width modulation for 95%*/
#define pwm_95 (990) 


/**
 * @Including Header files
 * 
 */

#include <util/delay.h>
#include <avr/io.h>


/**
 * @initialising timer registers 
 * 
 */
void initialisetimer();

/* Duty cycle according to ADC input*/
void activity3(uint16_t temp);

#endif
