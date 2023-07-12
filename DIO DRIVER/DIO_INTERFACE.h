/*
 * DIO_INTERFACE.h
 *
 * Created: 7/11/2023 12:28:42 AM
 *  Author: El-Wattaneya
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
#include "STD.h"

void pinmode(u8 PORT_NAME,u8 PIN_NUM,u8 VALUE);

void pinwrite(u8 PORT_NAME,u8 PIN_NUM,u8 VALUE);

void pinread(u8 PORT_NAME,u8 PIN_NUM,u8 *VAR);

void portmode(u8 PORT_NAME,u8 VALUE);

void portwrite(u8 PORT_NAME,u8 VALUE);




#endif /* DIO_INTERFACE_H_ */