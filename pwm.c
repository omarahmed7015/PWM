/*
 * pwm.c
 *
 *  Created on: Aug 8, 2022
 *      Author: lenove
 */
#include"pwm.h"
#include"gpio.h"
#include<avr/io.h>

void SWPWM_init( uint8_t dutyCycle)
{

/*
 * This function is to start PWM generation.
 */

	TCNT0 = 0; // Set Timer Initial Value to 0

		OCR0  = dutyCycle; // Set Compare Value

		DDRA  = DDRA | (1<<PA0); // Configure PB3/OC0 as output pin --> pin where the PWM signal is generated from MC

		/* Configure timer control register
		 * 1. Fast PWM mode FOC0=0
		 * 2. Fast PWM Mode WGM01=1 & WGM00=1
		 * 3. Clear OC0 when match occurs (non inverted mode) COM00=0 & COM01=1
		 * 4. clock = F_CPU/8 CS00=0 CS01=1 CS02=0
		 */
		TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS01);

}
 void SWPWM_start(void)


/*
 * newDutyCycle: is an input argument that describes the new duty cycle needed for the PWM.
 */
 void SWPWM_changeDutyCycle(uint8_t newDutyCycle)
 {

 /*
 * This function is to stop PWM generation.
 */
	 SWPWM_init(newDutyCycle);


 }
 void SWPWM_stop(stop)
 {
	 TCCR0=0;



 }
