
#include "STD_Types.h"
#include "BIT_Math.h"


#include "DIO_int.h"
#include "DIO_cfg.h"
#include "DIO_priv.h"

void DIO_voidInit(void)
{
	
	DDRA = CONC(DIO_u8DIR_PIN_7,DIO_u8DIR_PIN_6,DIO_u8DIR_PIN_5,DIO_u8DIR_PIN_4,DIO_u8DIR_PIN_3,DIO_u8DIR_PIN_2,DIO_u8DIR_PIN_1,DIO_u8DIR_PIN_0);
	DDRB = CONC(DIO_u8DIR_PIN_15,DIO_u8DIR_PIN_14,DIO_u8DIR_PIN_13,DIO_u8DIR_PIN_12,DIO_u8DIR_PIN_11,DIO_u8DIR_PIN_10,DIO_u8DIR_PIN_9,DIO_u8DIR_PIN_8);
	DDRC = CONC(DIO_u8DIR_PIN_23,DIO_u8DIR_PIN_22,DIO_u8DIR_PIN_21,DIO_u8DIR_PIN_20,DIO_u8DIR_PIN_19,DIO_u8DIR_PIN_18,DIO_u8DIR_PIN_17,DIO_u8DIR_PIN_16);
	DDRD = CONC(DIO_u8DIR_PIN_31,DIO_u8DIR_PIN_30,DIO_u8DIR_PIN_29,DIO_u8DIR_PIN_28,DIO_u8DIR_PIN_27,DIO_u8DIR_PIN_26,DIO_u8DIR_PIN_25,DIO_u8DIR_PIN_24);
}

tenuErrorStatus DIO_enuWritePin(uint8  u8PinNumCpy ,uint8 u8PinValueCpy)
{
  tenuErrorStatus  enuReturnStatusLoc = E_OK ;
  if(u8PinNumCpy >=0 && u8PinNumCpy <=7)
  {
	  switch(u8PinValueCpy)
	  {
		  case 0 :
		  CLR_BIT(ODRA , u8PinNumCpy);
		  break;
		  case 1 :
		  SET_BIT(ODRA , u8PinNumCpy);
		  break;
		  default:
		   enuReturnStatusLoc = E_NOK_PARAM_OUT_OF_RANGE;
		  break;
	  }
  }
  else if(u8PinNumCpy >=8 && u8PinNumCpy <=15)
  {
	  switch(u8PinValueCpy)
	  {
		  case 0 :
		  CLR_BIT(ODRB , u8PinNumCpy%8);
		  break;
		  case 1 :
		  SET_BIT(ODRB , u8PinNumCpy%8);
		  break;
		  default:
		   enuReturnStatusLoc = E_NOK_PARAM_OUT_OF_RANGE;
		  break;
	  }
  
  }
  else if(u8PinNumCpy >=16 && u8PinNumCpy <=23)
  {
	  switch(u8PinValueCpy)
	  {
		  case 0 :
		  CLR_BIT(ODRC , u8PinNumCpy%8);
		  break;
		  case 1 :
		  SET_BIT(ODRC , u8PinNumCpy%8);
		  break;
		  default:
		   enuReturnStatusLoc = E_NOK_PARAM_OUT_OF_RANGE;
		  break;
	  }
  }
  else if(u8PinNumCpy >=24 && u8PinNumCpy <=31)
  {
	  switch(u8PinValueCpy)
	  {
		  case 0 :
		  CLR_BIT(ODRD , u8PinNumCpy%8);
		  break;
		  case 1 :
		  SET_BIT(ODRD , u8PinNumCpy%8);
		  break;
		  default:
		   enuReturnStatusLoc = E_NOK_PARAM_OUT_OF_RANGE;
		  break;
	  }
  }
  else
  {
	  enuReturnStatusLoc = E_NOK_PARAM_OUT_OF_RANGE;
  }
	return enuReturnStatusLoc ;
}


tenuErrorStatus DIO_enuReadPin(uint8 u8PinNumCpy , uint8 * pu8PinValueCpy)
{
 tenuErrorStatus  enuReturnStatusLoc = E_OK ;	
 if (pu8PinValueCpy != NULL_PTR)
 {
	if (u8PinNumCpy >=0 && u8PinNumCpy<=7)
	{
		*pu8PinValueCpy = GET_BIT(IDRA , u8PinNumCpy);
	}
    else if (u8PinNumCpy >=8 && u8PinNumCpy<=15)
	{
		*pu8PinValueCpy = GET_BIT(IDRB , u8PinNumCpy%8);
	}
	else if (u8PinNumCpy >=16 && u8PinNumCpy<=23)
	{
		*pu8PinValueCpy = GET_BIT(IDRC , u8PinNumCpy%8);
	}	
	else if (u8PinNumCpy >=24 && u8PinNumCpy<=31)
	{
		*pu8PinValueCpy = GET_BIT(IDRD , u8PinNumCpy%8);
	}
	else
	{
		enuReturnStatusLoc = E_NOK_PARAM_OUT_OF_RANGE ;
	}
 }
 else
 {
 	enuReturnStatusLoc = E_NOK_PARAM_NULL_POINTER ;
 }
	
 return enuReturnStatusLoc ;	
}


tenuErrorStatus DIO_enuActivatePullUp(uint8 u8PinNumCpy, uint8 u8PinStateCpy)
{
	return DIO_enuWritePin(u8PinNumCpy,u8PinStateCpy) ;
}
