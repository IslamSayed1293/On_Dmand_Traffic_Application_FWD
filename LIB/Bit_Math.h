

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT_NO)  		 (REG|=(1<<BIT_NO))
#define CLEAR_BIT(REG,BIT_NO) 		 (REG&=~(1<<BIT_NO))
#define TOGGLE_BIT(REG,BIT_NO) 		 (REG^=(1<<BIT_NO))
#define CHECK_BIT(REG,BIT_NO)		 ((REG >> BIT_NO)&0x01)

#endif 