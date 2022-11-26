

#ifndef LED_TYPES_H_
#define LED_TYPES_H_

typedef enum {
	CAR_GREEN_LED,
	CAR_YELLOW_LED,
	CAR_RED_LED,
	PEDESTRIANS_GREEN_LED,
	PEDESTRIANS_YELLOW_LED,
	PEDESTRIANS_RED_LED,
}Led_ID;

typedef enum
 {
 	LED_NOT_OK,
	LED_OK
 }ledErrorState;

#endif
