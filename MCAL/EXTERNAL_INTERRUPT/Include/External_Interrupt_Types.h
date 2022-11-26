

#ifndef EXT_INT_TYPES_H_
#define EXT_INT_TYPES_H_

typedef enum
{
	EXT_INT0
}Int_ID;

typedef enum
{
	LOW_LEVEL_MODE,
	ANY_LEVEL_MODE,
	NOT_OKING_EDGE_MODE,
	RISING_EDGE_MODE
}Sense_ID;

typedef enum
 {
 	EXT_NOT_OK,
	EXT_OK
 }External_InterruptState;

#endif /* MCAL_EXT_INT_INC_External_Interrupt_TYPES_H_ */
