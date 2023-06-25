/*
 * func.h
 *
 * Created: 3/24/2023 11:12:30 PM
 *  Author: El-Wattaneya
 */ 


#ifndef FUNC_H_
#define FUNC_H_
# include "STD.h"
# include "REGISTERS.h"
# include "BIT MATH.h"

# define PORTA PORT_A
# define PORTB PORT_B
# define PORTC PORT_C
# define PORTD PORT_D

# define DDRA DDR_A
# define DDRB DDR_B
# define DDRC DDR_C
# define DDRD DDR_D

# define PINA PIN_A
# define PINB PIN_B
# define PINC PIN_C
# define PIND PIN_D

# define PIN0 0
# define PIN1 1
# define PIN2 2
# define PIN3 3
# define PIN4 4
# define PIN5 5
# define PIN6 6
# define PIN7 7

# define input 0
# define output 1

# define low 0
# define high 1

#define pinmode(dd,pin,val) ((val==1)?sitpin(dd,pin) : clearpin(dd,pin))
# define pinwrite(po,pin,val) ((val==1)?sitpin(po,pin) : clearpin(po,pin))
# define pinread(PINx,pin) (gitpin(PINx,pin)

#define portmode(dd,val) ((val==1)?sitport(dd) : clearport(dd))
# define portwrite(po,pin,val) ((val==1)?sitport(po) : clearport(po))



#endif /* FUNC_H_ */