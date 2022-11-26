
#include <avr/io.h>
#include <util/delay.h>
#include "Led_Interface.h"

#define TIME_DELAY 500

//int main(void)
//{
//	Led_Initialize();
//
//	Led_OFF(CAR_GREEN_LED);
//	Led_OFF(CAR_YELLOW_LED);
//	Led_OFF(CAR_RED_LED);
//
//	Led_OFF(PEDESTRIANS_GREEN_LED);
//	Led_OFF(PEDESTRIANS_YELLOW_LED);
//	Led_OFF(PEDESTRIANS_RED_LED);
//
//
//	while(1)
//	{
//		Toggle_Led(CAR_GREEN_LED);
//		_delay_ms(TIME_DELAY);
//		Toggle_Led(CAR_YELLOW_LED);
//		_delay_ms(TIME_DELAY);
//		Toggle_Led(CAR_RED_LED);
//		_delay_ms(TIME_DELAY);
//		Toggle_Led(PEDESTRIANS_GREEN_LED);
//		_delay_ms(TIME_DELAY);
//		Toggle_Led(PEDESTRIANS_YELLOW_LED);
//		_delay_ms(TIME_DELAY);
//		Toggle_Led(PEDESTRIANS_RED_LED);
//		_delay_ms(TIME_DELAY);
//	}
//
//}
