
#ifndef TIMER1_PRIVATE_H_
#define TIMER1_PRIVATE_H_

#include "Std_Types.h"

#define TIMER1_TCCR1A_REG			(*(volatile uint8_t*)0x4F)
#define TIMER1_TCCR1B_REG			(*(volatile uint8_t*)0x4E)
#define TIMER1_TCNT1_REG			(*(volatile uint16_t*)0x4C)
#define TIMER1_TIMSK_REG			(*(volatile uint8_t*)0x59)


#define TIMER1_MODE_INTERVAL             	(1)

#endif 
