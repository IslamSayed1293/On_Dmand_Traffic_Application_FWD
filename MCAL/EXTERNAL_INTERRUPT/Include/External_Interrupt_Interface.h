

#ifndef EXT_INT_INTERFACE_H_
#define EXT_INT_INTERFACE_H_

#include "External_Interrupt_Private.h"
#include "External_Interrupt_Types.h"
#include "Std_Types.h"
#include "Bit_Math.h"

External_InterruptState External_Interrupt_Enable(Int_ID);
External_InterruptState External_Interrupt_Disable(Int_ID);
External_InterruptState External_Interrupt_Sense_Set(Int_ID,Sense_ID);

#endif 
