

#include <Timer1_Interface.h>




timer1ErrorState TIMER1_Init(void)
{
		TIMER1_TCCR1A_REG|= TIMER1_INTERVAL_MODE_WGM10 | TIMER1_INTERVAL_MODE_WGM11;
		TIMER1_TCCR1B_REG|= TIMER1_INTERVAL_MODE_WGM12 | TIMER1_INTERVAL_MODE_WGM13;
		return TIMER1_OK;
}

timer1ErrorState TIMER1_Start(uint8_t prescaler)
{
	TIMER1_TCCR1B_REG|=prescaler;
	return TIMER1_OK;
}

timer1ErrorState TIMER1_Stop(void)
{
	TIMER1_TCCR1B_REG &=~(0x07);
	return TIMER1_OK;
}


timer1ErrorState TIMER1_SetPreload(uint16_t preLoadValue)
{
	TIMER1_TCNT1_REG = preLoadValue;
	return TIMER1_OK;
}

timer1ErrorState TIMER1_EnableInterrupt(void)
{
	#if (TIMER1_MODE == TIMER1_MODE_INTERVAL)
	SET_BIT(TIMER1_TIMSK_REG,TIMER1_INT_ENABLE_BIT);
	#endif
	return TIMER1_OK;
}


timer1ErrorState TIMER1_DisableInterrupt(void)
{
	#if (TIMER1_MODE == TIMER1_MODE_INTERVAL)
	CLEAR_BIT(TIMER1_TIMSK_REG,TIMER1_INT_ENABLE_BIT);
	#endif
	return TIMER1_OK;
}


