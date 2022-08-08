/*
 * gpio.h
 *
 *  Created on: Aug 2, 2022
 *      Author: lenove
 */

#ifndef GPIO_H_
#define GPIO_H
#include "std_types.h"

#define NUMBER_OF_PORTS   4
#define NUMBER_OF_PINS    8
/** PORTS**/
#define PORTA_ID         0
#define PORTB_ID         1
#define PORTC_ID         2
#define PORTD_ID         3

/**PINS**/
#define PIN0_ID          0
#define PIN1_ID          1
#define PIN2_ID          2
#define PIN3_ID          3
#define PIN4_ID          4
#define PIN5_ID          5
#define PIN6_ID          6
#define PIN7_ID          7

typedef enum
{
	PIN_INPUT,PIN_OUTPUT
}GPIO_PinDirectionType;
typedef enum
{
	PORT_INPUT,PORT_OUTPUT=0xFF
}GPIO_PortDirectionType;
/**FUNCTIONS PROTOTYPES**/

void GPIO_setupPinDirection(uint8 port_num, uint8 pin_num,GPIO_PinDirectionType direction);
void GPIO_writePin(uint8 port_num,uint8 pin_num,uint8 value);
uint8 GPIO_readPin(uint8 port_num,uint8 pin_num);
void GPIO_setupPortDirection(uint8 port_num,GPIO_PortDirectionType direction);
void GPIO_writePort(uint8 port_num,uint8 value);
uint8 GPIO_readPort(uint8 port_num);





#endif /* GPIO_H_ */
