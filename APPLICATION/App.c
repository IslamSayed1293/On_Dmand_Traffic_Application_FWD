
#include "App.h"



#define TIMER1_500ms_PRELOAD       TIMER1_TOP-7813
#define NUM_OVERFLOW_5S  10

#define EXIT_PEDESTRIANS           0
#define ENTER_PEDESTRIANS          1



volatile run_state Running_Mode=NORMAL_MODE;
volatile led_state running_car_led_state =GREEN;
volatile led_state last_car_led_state =YELLOW;

volatile led_state running_pedestrians_led_state =RED;
volatile led_state last_pedestrians_led_state =YELLOW;
volatile led_state last_pedestrians_led_state2 =YELLOW;

volatile uint8_t Overflow_5s=1;
volatile uint8_t Button_Pressed =0;
volatile uint8_t Entry_State=EXIT_PEDESTRIANS;

ISR(TIMER1_OVF_vect)
{
	DisAllInt();
	GPIO_FlipChannel(GPIO_PORTC,GPIO_CHANNEL0);

	if(Running_Mode==NORMAL_MODE)
	{
		if(running_car_led_state==YELLOW)
		{
			Toggle_Led(CAR_YELLOW_LED);
		}

		if(Overflow_5s==NUM_OVERFLOW_5S)
		{
			if(running_car_led_state==GREEN && last_car_led_state==YELLOW)
			{
				last_car_led_state =GREEN;
				running_car_led_state=YELLOW;
			}
			else if(running_car_led_state==YELLOW)
			{
				if(last_car_led_state==RED)
				{
					running_car_led_state=GREEN;
				}
				else if(last_car_led_state==GREEN)
				{
					running_car_led_state=RED;
				}
				
				last_car_led_state =YELLOW;
			}
			else if(running_car_led_state==RED && last_car_led_state==YELLOW)
			{
				last_car_led_state=RED;
				running_car_led_state=YELLOW;
			}
			Overflow_5s=0;
		}
	}
	else if(Running_Mode==PEDESTRIANS_MODE)
	{
		if(running_pedestrians_led_state==YELLOW)
		{
			Toggle_Led(CAR_YELLOW_LED);
			Toggle_Led(PEDESTRIANS_YELLOW_LED);
		}
		if(Overflow_5s==NUM_OVERFLOW_5S)
		{
			if(running_pedestrians_led_state==YELLOW && last_car_led_state==RED && last_pedestrians_led_state==GREEN)
			{
				last_pedestrians_led_state=YELLOW;
				last_pedestrians_led_state2=GREEN;
				last_car_led_state=YELLOW;
				running_car_led_state=GREEN;
				running_pedestrians_led_state=RED;
			}
			else if(running_pedestrians_led_state==GREEN)
			{
				last_pedestrians_led_state=GREEN;
				last_car_led_state=RED;

				running_car_led_state=YELLOW;
				running_pedestrians_led_state=YELLOW;
			}

			else if(running_pedestrians_led_state==YELLOW)
			{
				running_pedestrians_led_state=GREEN;
			}
			else if(running_pedestrians_led_state==RED)
			{
				running_pedestrians_led_state=YELLOW;
			}

			Overflow_5s=0;
		}
	}

	Overflow_5s++;
	TIMER1_SetPreload(TIMER1_500ms_PRELOAD);
	EnAllInt();
}

ISR(INT0_vect)
{
	DisAllInt();
	if(running_car_led_state==RED && running_pedestrians_led_state!=GREEN && Button_Pressed==0)
	{

		running_pedestrians_led_state=GREEN;

		Running_Mode=PEDESTRIANS_MODE;
		Entry_State=ENTER_PEDESTRIANS;

		TIMER1_Stop();
		TIMER1_SetPreload(TIMER1_500ms_PRELOAD);
		TIMER1_Start(TIMER1_CS_1024_PRESCALER);
	}
	else if((running_car_led_state==YELLOW || running_car_led_state==GREEN) && Button_Pressed==0)
	{
		running_pedestrians_led_state=RED;
		Running_Mode=PEDESTRIANS_MODE;
		Entry_State=ENTER_PEDESTRIANS;
	}
		Button_Pressed=1;
	EnAllInt();
}

modeErrorState Normal_Mode(void)
{
	if(Running_Mode==NORMAL_MODE)
	{
		if(running_car_led_state==GREEN)
		{
			Led_OFF(CAR_YELLOW_LED);
			Led_ON(CAR_GREEN_LED);
		}
		else if(running_car_led_state==YELLOW)
		{
			Led_OFF(CAR_GREEN_LED);
			Led_OFF(CAR_RED_LED);
		}
		else if(running_car_led_state==RED)
		{
			Led_OFF(CAR_YELLOW_LED);
			Led_ON(CAR_RED_LED);
		}
	}
	return MODE_OK;
}

modeErrorState Pedestrian_Mode(void)
{
	if(Running_Mode==PEDESTRIANS_MODE)
	{
		if(last_pedestrians_led_state==YELLOW &&
				last_pedestrians_led_state2==GREEN &&
				last_car_led_state==YELLOW &&
				running_car_led_state==GREEN &&
				running_pedestrians_led_state==RED && Entry_State==ENTER_PEDESTRIANS)
		{
			Led_OFF(PEDESTRIANS_YELLOW_LED);
			Led_OFF(CAR_YELLOW_LED);
			Led_OFF(PEDESTRIANS_GREEN_LED);

			Led_ON(PEDESTRIANS_RED_LED);
			Led_ON(CAR_GREEN_LED);

			Button_Pressed=0;
		}
		else if(last_pedestrians_led_state==YELLOW &&
				last_pedestrians_led_state2==GREEN &&
				last_car_led_state==YELLOW &&
				running_car_led_state==GREEN &&
				running_pedestrians_led_state==RED&& Entry_State==EXIT_PEDESTRIANS)
		{
			Led_OFF(PEDESTRIANS_YELLOW_LED);
			Led_OFF(CAR_YELLOW_LED);
			Led_OFF(PEDESTRIANS_GREEN_LED);

			Led_ON(PEDESTRIANS_RED_LED);
			Led_ON(CAR_GREEN_LED);

			Running_Mode=NORMAL_MODE;
			Button_Pressed=0;
		}
		else if(running_pedestrians_led_state==GREEN )
		{
			Led_OFF(CAR_YELLOW_LED);
			Led_OFF(PEDESTRIANS_YELLOW_LED);
			Led_OFF(PEDESTRIANS_RED_LED);

			Led_ON(CAR_RED_LED);
			Led_ON(PEDESTRIANS_GREEN_LED);
		}
		else if(running_pedestrians_led_state==YELLOW)
		{
			Led_OFF(CAR_RED_LED);
			Led_OFF(CAR_GREEN_LED);

			Led_OFF(PEDESTRIANS_RED_LED);
			Entry_State=EXIT_PEDESTRIANS;
		}
		else if(running_pedestrians_led_state==RED)
		{
			Led_OFF(PEDESTRIANS_GREEN_LED);
			Led_OFF(PEDESTRIANS_YELLOW_LED);

			Led_ON(PEDESTRIANS_RED_LED);
		}
	}
	return MODE_OK;
}


appState App_Start(void)
{
	Led_Initialize();
	TIMER1_Init();

	GPIO_ConfigChannel(GPIO_PORTC,GPIO_CHANNEL0,OUTPUT);
	GPIO_ConfigChannel(GPIO_PORTC,GPIO_CHANNEL1,OUTPUT);
	GPIO_ConfigChannel(GPIO_PORTC,GPIO_CHANNEL2,OUTPUT);

	External_Interrupt_Sense_Set(EXT_INT0,RISING_EDGE_MODE);
	External_Interrupt_Enable(EXT_INT0);

	TIMER1_SetPreload(TIMER1_500ms_PRELOAD);
	TIMER1_EnableInterrupt();
	EnAllInt();

	/*Start the App*/
	TIMER1_Start(TIMER1_CS_1024_PRESCALER);

	return APP_OK;
}

appState App_Running(void)
{
	Normal_Mode();

	Pedestrian_Mode();

	return APP_OK;
}
