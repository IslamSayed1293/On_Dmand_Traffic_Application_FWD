
#ifndef TIMER1__INTEFACE_H_
#define TIMER1__INTEFACE_H_

#include "Bit_Math.h"
#include "Timer1_Cfg.h"
#include "Timer1_Private.h"


#define TIMER1_INTERVAL_MODE_WGM10			((uint8_t)0<<0)
#define TIMER1_INTERVAL_MODE_WGM11			((uint8_t)0<<1)
#define TIMER1_INTERVAL_MODE_WGM12			((uint8_t)0<<3)
#define TIMER1_INTERVAL_MODE_WGM13			((uint8_t)0<<4)



#define TIMER1_CS_1024_PRESCALER	    	((uint8_t)5<<0)



/*	Timer1 Interrupt Enable	Bits */
#define TIMER1_INT_ENABLE_BIT		(2)


#define TIMER1_TOP 			(65535u)

timer1ErrorState TIMER1_Init(void);
timer1ErrorState TIMER1_Start(uint8_t prescaler);
timer1ErrorState TIMER1_Stop(void);
timer1ErrorState TIMER1_SetPreload(uint16_t preLoadValue);
timer1ErrorState TIMER1_EnableInterrupt(void);
timer1ErrorState TIMER1_DisableInterrupt(void);

#endif 
