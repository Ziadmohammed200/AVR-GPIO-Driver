/*
 * GPIO.h
 *
 *  Created on: Jul 28, 2025
 *      Author: Ziad_Mohmed
 */

#ifndef GPIO_GPIO_H_
#define GPIO_GPIO_H_
#include "../include/std.h"

#define BASE_ADDRESS_A 0x39
#define BASE_ADDRESS_B 0x36
#define BASE_ADDRESS_C 0x33
#define BASE_ADDRESS_D 0x30

#define PORT_A 0
#define PORT_B 1
#define PORT_C 2
#define PORT_D 3

#define LOW  0
#define HIGH 1

#define PULL_DOWN 0
#define PULL_UP   1
#define NO_PULL_UP_PULL_DOWN 2

#define INPUT  0
#define OUTPUT 1



typedef struct {
    volatile u8 PIN;
    volatile u8 DDR;
    volatile u8 PORT;
} Gpio_type;

void Gpio_init(u8 portName,u8 pinNumber,u8 pinDirection,u8 pinStatus);

void Gpio_Write(u8 portName,u8 pinNumber,u8 value);

u8 Gpio_Read(u8 portName,u8 pinNumber);

#endif /* GPIO_GPIO_H_ */
