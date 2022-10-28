/***************************************************/
/* Description : Standard LIB for Bit manipulation */
/* Author      : OMAR Aboelnour                    */
/* Date        : 6-8-2022                          */
/* Version     :  0.1 V                            */
/***************************************************/

#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(Reg , BitNo) ((Reg) |=   (1<<(BitNo)))
#define CLR_BIT(Reg , BitNo) ((Reg) &=  ~(1<<(BitNo)))
#define TGL_BIT(Reg , BitNo) ((Reg) ^=   (1<<(BitNo)))
#define GET_BIT(Reg , BitNo) (((Reg)>>(BitNo)) & 0x01)

#endif