/*
 * pwm.h
 *
 *  Created on: Aug 8, 2022
 *      Author: lenove
 */

#ifndef PWM_H_
#define PWM_H_
#include"std_types.h"
void SWPWM_init(uint32_t frequency_kh, uint8_t dutyCycle);

/*
 * This function is to start PWM generation.
 */
 void SWPWM_start(void);

/*
 * newDutyCycle: is an input argument that describes the new duty cycle needed for the PWM.
 */
 void SWPWM_changeDutyCycle(uint8_t newDutyCycle);

 /*
 * This function is to stop PWM generation.
 */
 void SWPWM_stop(stop);

#endif /* PWM_H_ */
