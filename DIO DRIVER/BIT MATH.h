/*
 * BIT_MATH.h
 *
 * Created: 3/24/2023 9:35:34 PM
 *  Author: El-Wattaneya
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_
# define sitpin(reg,pin)  (reg|=(1<<pin))
# define clearpin(reg,pin)  (reg&=~(1<<pin))
# define togglepin(reg,pin)  (reg^=(1<<pin))
# define gitpin(reg,pin)  ((reg>>pin)&1)







#endif /* BIT MATH_H_ */