
#include <avr/io.h>
#include <util/delay.h>
#include "GPIO_Interface.h"

#define TIME_DELAY 1000
//
//int main(void)
//{
//	/*Test api GPIO_ConfigChannel*/
//	GPIO_ConfigChannel(GPIO_PORTA,GPIO_CHANNEL3,OUTPUT);
//	GPIO_ConfigChannel(GPIO_PORTA,GPIO_CHANNEL4,OUTPUT);
//	GPIO_ConfigChannel(GPIO_PORTA,GPIO_CHANNEL5,OUTPUT);
//
//
//	GPIO_ConfigChannel(GPIO_PORTC,GPIO_CHANNEL1,OUTPUT);
//	GPIO_ConfigChannel(GPIO_PORTC,GPIO_CHANNEL2,OUTPUT);
//	GPIO_ConfigChannel(GPIO_PORTC,GPIO_CHANNEL3,OUTPUT);
//
//
//	while(1)
//	{
//		GPIO_WriteChannel(GPIO_PORTA,GPIO_CHANNEL3,STD_HIGH);
//		GPIO_WriteChannel(GPIO_PORTA,GPIO_CHANNEL4,STD_HIGH);
//		GPIO_WriteChannel(GPIO_PORTA,GPIO_CHANNEL5,STD_HIGH);
//
//		_delay_ms(TIME_DELAY);
//
//		GPIO_WriteChannel(GPIO_PORTA,GPIO_CHANNEL3,STD_LOW);
//		GPIO_WriteChannel(GPIO_PORTA,GPIO_CHANNEL4,STD_LOW);
//		GPIO_WriteChannel(GPIO_PORTA,GPIO_CHANNEL5,STD_LOW);
//
//		_delay_ms(TIME_DELAY);
//
//		GPIO_FlipChannel(GPIO_PORTC,GPIO_CHANNEL1);
//		GPIO_FlipChannel(GPIO_PORTC,GPIO_CHANNEL2);
//		GPIO_FlipChannel(GPIO_PORTC,GPIO_CHANNEL3);
//
//
//		_delay_ms(TIME_DELAY);
//
//	}
//
//}
