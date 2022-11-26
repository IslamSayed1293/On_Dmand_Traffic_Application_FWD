

#include "External_Interrupt_Interface.h"


External_InterruptState External_Interrupt_Enable(Int_ID External_InterruptID)
{
		SET_BIT(External_Interrupt_GICR_REG,EXT_INT0_EN_BIT);
		return EXT_OK;
}


External_InterruptState External_Interrupt_Disable(Int_ID External_InterruptID)
{
		CLEAR_BIT(External_Interrupt_GICR_REG,EXT_INT0_EN_BIT);
		return EXT_OK;
}


External_InterruptState External_Interrupt_Sense_Set(Int_ID External_InterruptID,Sense_ID intSense)
{
		External_Interrupt_MCUCR_REG|=intSense<<EXT_INT0_SENSE_BIT;
		return EXT_OK;
}
