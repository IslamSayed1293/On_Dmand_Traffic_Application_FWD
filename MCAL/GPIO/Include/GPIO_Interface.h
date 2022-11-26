

#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_

#include "Std_Types.h"
#include "GPIO_Types.h"
#include "GPIO_Private.h"
#include "Bit_Math.h"

GPIOErrorState GPIO_ConfigChannel(GPIO_Port port,GPIO_Channel channel,GPIO_Direction direction);
GPIOErrorState GPIO_WriteChannel(GPIO_Port port,GPIO_Channel channel,GPIO_Level level);
GPIOErrorState GPIO_FlipChannel(GPIO_Port port,GPIO_Channel channel);
#endif 
