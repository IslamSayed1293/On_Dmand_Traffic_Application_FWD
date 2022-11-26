
#ifndef APP_APP_H_
#define APP_APP_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include "Timer1_Interface.h"

#include "GPIO_Interface.h"
#include "GlobalINT_Interface.h"
#include "External_Interrupt_Interface.h"
#include "Led_Interface.h"

#include "App_Types.h"



modeErrorState Normal_Mode(void);
modeErrorState Pedestrian_Mode(void);
appState App_Start(void);
appState App_Running(void);



#endif /* APP_APP_H_ */
