
#ifndef GPIO_TYPES_H_
#define GPIO_TYPES_H_

 typedef enum{
 GPIO_PORTA,
 GPIO_PORTB,
 GPIO_PORTC,
 GPIO_PORTD
 }GPIO_Port;

 typedef enum{
 GPIO_CHANNEL0,
 GPIO_CHANNEL1,
 GPIO_CHANNEL2,
 GPIO_CHANNEL3,
 GPIO_CHANNEL4,
 GPIO_CHANNEL5,
 GPIO_CHANNEL6,
 GPIO_CHANNEL7
 }GPIO_Channel;

 typedef enum{
 INPUT,
 OUTPUT
 }GPIO_Direction;

 typedef enum{
 STD_LOW,
 STD_HIGH
 }GPIO_Level;

 typedef enum
 {
 	GPIO_NOT_OK,
 	GPIO_OK
 }GPIOErrorState;


#endif 
