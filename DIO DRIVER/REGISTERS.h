/*
 * REGISTERS.h
 *
 * Created: 3/24/2023 9:25:39 PM
 *  Author: El-Wattaneya
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_
# include "STD.h"
# define PORT_A (*(volatile u8 *)(0x3B))
# define DDRA (*(volatile u8 *)(0x3A))
# define PINA (*(volatile u8 *)(0x39))

# define PORT_B (*(volatile u8 *)(0x38))
# define DDRB (*(volatile u8 *)(0x37))
# define PINB (*(volatile u8 *)(0x36))

# define PORT_C (*(volatile u8 *)(0x35))
# define DDRC (*(volatile u8 *)(0x34))
# define PINC (*(volatile u8 *)(0x33))

# define PORT_D (*(volatile u8 *)(0x32))
# define DDRD (*(volatile u8 *)(0x31))
# define PIND (*(volatile u8 *)(0x30))


#endif /* REGISTERS_H_ */