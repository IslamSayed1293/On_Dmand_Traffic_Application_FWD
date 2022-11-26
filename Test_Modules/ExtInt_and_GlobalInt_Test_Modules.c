
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#include "GPIO_Interface.h"
#include "External_Interrupt_Interface.h"
#include "GlobalINT_Interface.h"



#define TIME_DISABLE    5000
//
//
//ISR(INT0_vect)
//{
//	GPIO_FlipChannel(GPIO_PORTA,GPIO_CHANNEL0);
//}
//
//int main(void)
//{
//	GPIO_ConfigChannel(GPIO_PORTA,GPIO_CHANNEL0,OUTPUT);
//
//
//
//	External_Interrupt_Sense_Set(EXT_INT0,NOT_OKING_EDGE_MODE);
////	External_Interrupt_Sense_Set(EXT_INT0,RISING_EDGE_MODE);
//	External_Interrupt_Enable(EXT_INT0);
//	EnAllInt();
//
//
//	while(1)
//	{
//		_delay_ms(TIME_DISABLE);
//		DisAllInt();
//	}
//}
//
//
