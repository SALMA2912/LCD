/*
 * main.c
 *
 *  Created on: 2 Sep 2022
 *      Author: HP
 */

#include "STD_Types.h"
#include "BIT_Math.h"
#include <avr/delay.h>

#include "DIO_int.h"
#include "LCD_int.h"

void main (void)
{
	uint8 i = 0 ;
	DIO_voidInit();
	LCD_voidInit();

	while (1)
	{
		LCD_enuWriteCmd(0 , 0x80+i);//AWEL MKAN
		LCD_enuWriteData(0 , 'A');
		LCD_enuWriteData(0 , 'H');
		LCD_enuWriteData(0 , 'M');
		LCD_enuWriteData(0 , 'E');
		LCD_enuWriteData(0 , 'D');
		_delay_ms(10000);

		LCD_enuWriteCmd(0 , 0x01);//MASA7
		i++ ;
		if(i == 16)
		{
			i = 0 ;
		}

	}
}


