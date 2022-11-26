

#include "GPIO_Interface.h"

/****************************************************************************************
* \Syntax          : GPIOErrorState GPIO_ConfigChannel(void)
* \Description     : This function configure the pin of a port with input or output state
*****************************************************************************************/


GPIOErrorState GPIO_ConfigChannel(GPIO_Port port,GPIO_Channel channel, GPIO_Direction direction)
{
	GPIOErrorState retResult = GPIO_NOT_OK;

	switch (port)
	{
	case GPIO_PORTA:
		if (direction == INPUT)
		{
			CLEAR_BIT(GPIO_DDRA_REG,channel);
		}
		else
		{
			SET_BIT(GPIO_DDRA_REG,channel);
		}
		retResult = GPIO_OK;
		break;
	case GPIO_PORTB:
		if (direction == INPUT)
		{
			CLEAR_BIT(GPIO_DDRB_REG,channel);
		}
		else
		{
			SET_BIT(GPIO_DDRB_REG,channel);
		}
		retResult = GPIO_OK;
		break;
	case GPIO_PORTC:
		if (direction == INPUT)
		{
			CLEAR_BIT(GPIO_DDRC_REG,channel);
		}
		else
		{
			SET_BIT(GPIO_DDRC_REG,channel);
		}
		retResult = GPIO_OK;
		break;
	case GPIO_PORTD:
		if (direction == INPUT)
		{
			CLEAR_BIT(GPIO_DDRD_REG,channel);
		}
		else
		{
			SET_BIT(GPIO_DDRD_REG,channel);
		}
		retResult = GPIO_OK;
		break;
	}

	return retResult;
}

/****************************************************************************************
* \Syntax          : GPIOErrorState GPIO_WriteChannel(void)
* \Description     : This function write the pin with high or low level
*****************************************************************************************/

GPIOErrorState GPIO_WriteChannel(GPIO_Port port,GPIO_Channel channel, GPIO_Level level)
{
	GPIOErrorState retResult = GPIO_NOT_OK;

	switch (port)
	{
	case GPIO_PORTA:
		if (level == STD_LOW)
		{
			CLEAR_BIT(GPIO_PORTA_REG,channel);
		}
		else
		{
			SET_BIT(GPIO_PORTA_REG,channel);
		}
		retResult = GPIO_OK;
		break;
	case GPIO_PORTB:
		if (level == STD_LOW)
		{
			CLEAR_BIT(GPIO_PORTB_REG,channel);
		}
		else
		{
			SET_BIT(GPIO_PORTB_REG,channel);
		}
		retResult = GPIO_OK;
		break;
	case GPIO_PORTC:
		if (level == STD_LOW)
		{
			CLEAR_BIT(GPIO_PORTC_REG,channel);
		}
		else
		{
			SET_BIT(GPIO_PORTC_REG,channel);
		}
		retResult = GPIO_OK;
		break;
	case GPIO_PORTD:
		if (level == STD_LOW)
		{
			CLEAR_BIT(GPIO_PORTD_REG,channel);
		}
		else
		{
			SET_BIT(GPIO_PORTD_REG,channel);
		}
		retResult = GPIO_OK;
		break;
	}

	return retResult;
}
/*
GPIO_Level GPIO_ReadChannel(GPIO_Port port,GPIO_Channel channel)
{
	GPIO_Level ret_level;
	switch (port)
	{
	case GPIO_PORTA:
		ret_level = CHECK_BIT(GPIO_PINA_REG,channel);
		break;
	case GPIO_PORTB:
		ret_level = CHECK_BIT(GPIO_PINB_REG,channel);
		break;
	case GPIO_PORTC:
		ret_level = CHECK_BIT(GPIO_PINC_REG,channel);
		break;
	case GPIO_PORTD:
		ret_level = CHECK_BIT(GPIO_PIND_REG,channel);
		break;
	}
	return ret_level;
}
*/

/****************************************************************************************
* \Syntax          : GPIOErrorState GPIO_FlipChannel(void)
* \Description     : This function toggle the running pin state
*****************************************************************************************/

GPIOErrorState GPIO_FlipChannel(GPIO_Port port,GPIO_Channel channel)
{
	GPIOErrorState retResult = GPIO_NOT_OK;

	switch (port)
	{
	case GPIO_PORTA:
		TOGGLE_BIT(GPIO_PORTA_REG,channel);
		retResult = GPIO_OK;
		break;
	case GPIO_PORTB:
		TOGGLE_BIT(GPIO_PORTB_REG,channel);
		retResult = GPIO_OK;
		break;
	case GPIO_PORTC:
		TOGGLE_BIT(GPIO_PORTC_REG,channel);
		retResult = GPIO_OK;
		break;
	case GPIO_PORTD:
		TOGGLE_BIT(GPIO_PORTD_REG,channel);
		retResult = GPIO_OK;
		break;
	}

	return retResult;
}
