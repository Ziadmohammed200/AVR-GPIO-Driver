/*
 * GPIO.c
 *
 *  Created on: Jul 28, 2025
 *      Author: DELL
 */
#include "GPIO.h"

u16 gpio_address[4] = {
		BASE_ADDRESS_A,
		BASE_ADDRESS_B,
		BASE_ADDRESS_C,
		BASE_ADDRESS_D
};



void Gpio_init(u8 portName,u8 pinNumber,u8 pinDirection,u8 pinStatus)
{
	Gpio_type* gpio = (Gpio_type*) (gpio_address[portName]);
	if(pinDirection == OUTPUT){
		gpio->DDR |=(0x01<<pinNumber);
	}
	else{
		gpio->DDR &= ~(0x01<<pinNumber);
		if(pinStatus == PULL_UP){
			gpio->PORT |=(0x01<<pinNumber);

		}
		if(pinStatus == PULL_DOWN){
			gpio->PORT &= ~(0x01<<pinNumber);
		}
	}
}

void Gpio_Write(u8 portName,u8 pinNumber,u8 value){
	Gpio_type* gpio = (Gpio_type*) (gpio_address[portName]);
	if (value == HIGH)
	    gpio->PORT |= (1 << pinNumber);
	else
	    gpio->PORT &= ~(1 << pinNumber);

}

u8 Gpio_Read(u8 portName,u8 pinNumber){
	Gpio_type* gpio = (Gpio_type*) (gpio_address[portName]);
	return ((gpio->PIN >> pinNumber)&0x01);
}

