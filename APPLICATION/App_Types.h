
#ifndef APP_APP_TYPES_H_
#define APP_APP_TYPES_H_

typedef enum
{
	NORMAL_MODE,
	PEDESTRIANS_MODE
}run_state;

typedef enum
{
	GREEN,
	YELLOW,
	RED
}led_state;

typedef enum
 {
 	APP_NOT_OK,
	APP_OK
 }appState;

 typedef enum
  {
  	MODE_NOT_OK,
 	MODE_OK
  }modeErrorState;

#endif /* APP_APP_TYPES_H_ */
