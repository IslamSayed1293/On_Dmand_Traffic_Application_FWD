

#ifndef TIMER1_H_
#define TIMER1_H_

#include "Bit_Math.h"
#include "Timer1_Cfg.h"
#include "Timer1_Private.h"

/*	TIMER1 Operation Modes	*/
#define TIMER1_INTERVAL_MODE_WGM10			((uint8_t)0<<0)
#define TIMER1_INTERVAL_MODE_WGM11			((uint8_t)0<<1)
#define TIMER1_INTERVAL_MODE_WGM12			((uint8_t)0<<3)
#define TIMER1_INTERVAL_MODE_WGM13			((uint8_t)0<<4)


/*	TIMER1 Clock Select Prescaler	*/
#define TIMER1_CS_1024_PRESCALER	    	((uint8_t)5<<0)



/*	Timer1 Interrupt Enable	Bits */
#define TIMER1_INT_ENABLE_BIT		(2)


#define TIMER1_TOP 			(65535u)

void TIMER1_Init(void);
void TIMER1_Start(uint8_t prescaler);
void TIMER1_Stop(void);
void TIMER1_SetPreload(uint16_t preLoadValue);
void TIMER1_EnableInterrupt(void);
void TIMER1_DisableInterrupt(void);

#endif  /* TIMER1_H_ */
