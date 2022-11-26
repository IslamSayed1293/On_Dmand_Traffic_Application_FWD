

#include "GlobalINT_Interface.h"


GlobalINTState EnAllInt()
{
	SET_BIT(AVR_SREG_REG,I_BIT);

	return GLOBAL_INT_OK;
}


GlobalINTState DisAllInt()
{
	CLEAR_BIT(AVR_SREG_REG,I_BIT);

	return GLOBAL_INT_OK;
}
