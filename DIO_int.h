/****************************************/
/* Description : Interface file for DIO */
/* Author      : Omar                   */
/* Date        : 20 Aug 2022            */
/* Version     : 0.1V                   */ 
/****************************************/

#ifndef  DIO_INT_H
#define  DIO_INT_H


void DIO_voidInit(void);

tenuErrorStatus DIO_enuWritePin(uint8  u8PinNumCpy ,uint8 u8PinValueCpy);

tenuErrorStatus DIO_enuReadPin(uint8 u8PinNumCpy , uint8 * pu8PinValueCpy);


tenuErrorStatus DIO_enuActivatePullUp(uint8 u8PinNumCpy, uint8 u8PinStateCpy);



#endif 



















