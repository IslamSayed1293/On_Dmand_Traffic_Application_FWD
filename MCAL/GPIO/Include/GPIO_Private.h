

#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_

#include "Std_Types.h"


#define GPIO_PORTA_REG  (*((volatile uint8_t*)0x3B))
#define GPIO_DDRA_REG   (*((volatile uint8_t*)0x3A))
#define GPIO_PINA_REG   (*((volatile uint8_t*)0x39))


#define GPIO_PORTB_REG   (*((volatile uint8_t*)0x38))
#define GPIO_DDRB_REG    (*((volatile uint8_t*)0x37))
#define GPIO_PINB_REG    (*((volatile uint8_t*)0x36))


#define GPIO_PORTC_REG   (*((volatile uint8_t*)0x35))
#define GPIO_DDRC_REG   	(*((volatile uint8_t*)0x34))
#define GPIO_PINC_REG    (*((volatile uint8_t*)0x33))


#define GPIO_PORTD_REG   (*((volatile uint8_t*)0x32))
#define GPIO_DDRD_REG    (*((volatile uint8_t*)0x31))
#define GPIO_PIND_REG    (*((volatile uint8_t*)0x30))

#endif 
