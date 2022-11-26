

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_
#include "Led_types.h"
#include "GPIO_Interface.h"
#include "Led_Cfg.h"

ledErrorState Led_Initialize(void);
ledErrorState Led_ON(Led_ID led);
ledErrorState Led_OFF(Led_ID led);
ledErrorState Toggle_Led(Led_ID led);

#endif 
