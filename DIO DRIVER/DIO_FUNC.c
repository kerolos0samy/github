/*
 * DIO_FUNC.c
 *
 * Created: 7/11/2023 12:44:34 AM
 *  Author: El-Wattaneya
 */ 
#include "DIO_DRIVER.h"
#include "BIT MATH.h"

void pinmode(u8 PORT_NAME,u8 PIN_NUM,u8 VALUE)
{
	switch(PORT_NAME)
	{
		case 0:
		if(VALUE==output)
		 sitpin(DDRA,PIN_NUM);
		 		 else
		  clearpin(DDRA,PIN_NUM);
		  		break;
		
		case 1:
		if(VALUE==output)
           sitpin(DDRB,PIN_NUM);
           else
           clearpin(DDRB,PIN_NUM);


		break;
		
		case 2:
		if(VALUE==output)
		 sitpin(DDRC,PIN_NUM);
		 else
		 clearpin(DDRC,PIN_NUM);
		break;
		
		case 3:
		if(VALUE==output)
		  sitpin(DDRD,PIN_NUM);
		  else
		  clearpin(DDRD,PIN_NUM);
		break;
		
		default:break;
	}
	
}

void pinwrite(u8 PORT_NAME,u8 PIN_NUM,u8 VALUE)
{
	switch(PORT_NAME)
	{
		case 0:
		if(VALUE==high)
		 sitpin(PORT_A,PIN_NUM);
		 else 
		 clearpin(PORT_A,PIN_NUM);
		break;
		
		case 1:
		if(VALUE==high)
		 sitpin(PORT_B,PIN_NUM);
		 else
		 clearpin(PORT_B,PIN_NUM);
		break;
		
		case 2:
		if(VALUE==high) 
		sitpin(PORT_C,PIN_NUM);
		else
		clearpin(PORT_C,PIN_NUM);
		break;
		
		case 3:
		if(VALUE==high)
		 sitpin(PORT_D,PIN_NUM);
		 else
		 clearpin(PORT_D,PIN_NUM);
		 		break;
		
		default:break;
	}
	
}

void pinread(u8 PORT_NAME,u8 PIN_NUM,u8 *VAR)
{
	switch(PORT_NAME)
	{
		case 0:
		*VAR=gitpin(PINA,PIN_NUM);
		break;
		
		case 1:
		*VAR=gitpin(PINB,PIN_NUM);
		break;
		
		case 2:
		*VAR=gitpin(PINC,PIN_NUM);
				break;
		
		case 3:
		*VAR=gitpin(PIND,PIN_NUM);
		break;
		
		default:break;
	}
}

void portmode(u8 PORT_NAME,u8 VALUE)
{
	switch(PORT_NAME)
	{
		
		case 0:
		if(VALUE==output)
		DDRA=0xff;
		else if(VALUE==input)
		DDRA=0x00;
		else
		DDRA=VALUE;
		break;
		
		case 1:
		if(VALUE==output)
		DDRB=0xff;
		else if(VALUE==input)
		DDRB=0x00;
		else
		DDRB=VALUE;
		break;
		
		case 2:
		if(VALUE==output)
		DDRC=0xff;
		else if(VALUE==input)
		DDRC=0x00;
		else
		DDRC=VALUE;
		break;
		
		case 3:
		if(VALUE==output)
		DDRD=0xff;
		else if(VALUE==input)
		DDRD=0x00;
		else
		DDRD=VALUE;
		break;
		
		default:break;
	}
}

void portwrite(u8 PORT_NAME,u8 VALUE)
{
	switch(PORT_NAME)
	{
		
	case 0:
	if(VALUE==high) 
	 PORT_A=0xff;
	 else if(VALUE==low) 
	PORT_A=0x00;
	else
	PORT_A=VALUE;
	break;
	
	case 1:
	if(VALUE==high)
	PORT_B=0xff;
	else if(VALUE==low)
	PORT_B=0x00;
	else
	PORT_B=VALUE;
	break;
	
	case 2:
	if(VALUE==high)
	PORT_C=0xff;
	else if(VALUE==low)
	PORT_C=0x00;
	else
	PORT_C=VALUE;
	break;
	
	case 3:
	if(VALUE==high)
	PORT_D=0xff;
	else if(VALUE==low)
	PORT_D=0x00;
	else
	PORT_D=VALUE;
	break;
	
	default:break;
	}
}

