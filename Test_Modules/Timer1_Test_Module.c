
// #include <avr/io.h>
// #include <avr/interrupt.h>
// #include <util/delay.h>

// #include "GPIO_Interface.h"
// #include "Timer1_Interface.h"
// #include "External_Interrupt_Interface.h"
// #include "GlblInterrupt_Interface.h"



// #define TIMER1_500ms_PRELOAD       TIMER1_TOP-7813
// volatile uint8_t counter=0;



// ISR(INT0_vect)
// {
// 	TIMER1_SetPreload(TIMER1_500ms_PRELOAD);
// 	TIMER1_Start(TIMER1_CS_1024_PRESCALER);
// 	TIMER1_EnableInterrupt();

// 	GPIO_WriteChannel(GPIO_PORTA,GPIO_CHANNEL1,STD_HIGH);
// 	counter=0;
// }


// ISR(TIMER1_OVF_vect)
// {
// 	counter++;
// 	GPIO_FlipChannel(GPIO_PORTA,GPIO_CHANNEL0);
// 	if(counter==10)
// 	{
// 		TIMER1_Stop();
// 		GPIO_WriteChannel(GPIO_PORTA,GPIO_CHANNEL0,STD_LOW);
// 		GPIO_WriteChannel(GPIO_PORTA,GPIO_CHANNEL1,STD_LOW);
// 		TIMER1_DisableInterrupt();
// 	}
// 	TIMER1_SetPreload(TIMER1_500ms_PRELOAD);
// }


// int main(void)
// {
// 	GPIO_ConfigChannel(GPIO_PORTA,GPIO_CHANNEL0,OUTPUT);
// 	GPIO_ConfigChannel(GPIO_PORTA,GPIO_CHANNEL1,OUTPUT);



// 	TIMER1_Init();

// 	TIMER1_SetPreload(TIMER1_500ms_PRELOAD);
// 	TIMER1_Start(TIMER1_CS_1024_PRESCALER);

// 	TIMER1_EnableInterrupt();

// 	External_Interrupt_Sense_Set(EXT_INT0,NOT_OKING_EDGE_MODE);
// 	External_Interrupt_Enable(EXT_INT0);

// 	EnAllInt();
// 	GPIO_WriteChannel(GPIO_PORTA,GPIO_CHANNEL1,STD_HIGH);


// 	while(1)
// 	{

// 	}
// }
