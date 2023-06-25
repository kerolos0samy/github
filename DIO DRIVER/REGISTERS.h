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
# define DDR_A (*(volatile u8 *)(0x3A))
# define PIN_A (*(volatile u8 *)(0x39))

# define PORT_B (*(volatile u8 *)(0x38))
# define DDR_B (*(volatile u8 *)(0x37))
# define PIN_B (*(volatile u8 *)(0x36))

# define PORT_C (*(volatile u8 *)(0x35))
# define DDR_C (*(volatile u8 *)(0x34))
# define PIN_C (*(volatile u8 *)(0x33))

# define PORT_D (*(volatile u8 *)(0x32))
# define DDR_D (*(volatile u8 *)(0x31))
# define PIN_D (*(volatile u8 *)(0x30))


#endif /* REGISTERS_H_ */