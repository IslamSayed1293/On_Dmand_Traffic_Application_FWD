

#ifndef EXT_INT_PRIVATE_H_
#define EXT_INT_PRIVATE_H_

#define External_Interrupt_GICR_REG			(*((volatile uint8_t*)0x5B))
#define External_Interrupt_MCUCR_REG		(*((volatile uint8_t*)0x55))
#define External_Interrupt_MCUCSR_REG		(*((volatile uint8_t*)0x54))

#define EXT_INT0_EN_BIT			(6)
#define EXT_INT1_EN_BIT			(7)
#define EXT_INT2_EN_BIT			(5)

#define EXT_INT0_SENSE_BIT		(0)
#define EXT_INT1_SENSE_BIT		(2)
#define EXT_INT2_SENSE_BIT		(6)

#endif 
