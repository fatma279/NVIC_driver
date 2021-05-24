/*  Autour  : fatma                          */
/*  Date    : 19 April 2021                  */														
/*  version : V1                             */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_interface.h"
#include "DIO_interface"
#include "AFIO_interface.h"
#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "NVIC_config.h"

void NVIC_voidEnableInterrupt  (u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber < 32)
	{
		SET_BIT(NVIC_ISER0,Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber < 64)
	{
		Copy_u8IntNumber -= 32;
		SET_BIT(NVIC_ISER1,Copy_u8IntNumber);
	}
	
}


void NVIC_voidDisableInterrupt (u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber < 32)
	{
		SET_BIT(NVIC_ICER0,Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber < 64)
	{
		Copy_u8IntNumber -= 32;
		SET_BIT(NVIC_ICER1,Copy_u8IntNumber);
	}
	
}


void NVIC_voidSetPendingFlag   (u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber < 32)
	{
		SET_BIT(NVIC_ISPR0,Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber < 64)
	{
		Copy_u8IntNumber -= 32;
		SET_BIT(NVIC_ISPR1,Copy_u8IntNumber);
	}
}


void NVIC_voidClearPendingFlag (u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber < 32)
	{
		SET_BIT(NVIC_ICPR0,Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber < 64)
	{
		Copy_u8IntNumber -= 32;
		SET_BIT(NVIC_ICPR1,Copy_u8IntNumber);
	}
}


u8 NVIC_u8GetActiveFlag(u8 Copy_u8IntNumber)
{
	u8 Local_u8Result = 0;

	if ( Copy_u8IntNumber <= 31)
	{
		Local_u8Result = GET_BIT(NVIC_IABR0,Copy_u8IntNumber);
	}

	else if (  Copy_u8IntNumber <= 59)
	{
		Copy_u8IntNumber -= 32;
		Local_u8Result = GET_BIT(NVIC_IABR1,Copy_u8IntNumber);
	}

	else
	{
		/* Return Error */
	}

	return Local_u8Result;

}

void NVIC_voidSetPriority(s8 Copy_s8IntID , u8 Copy_u8GroupPriority ,u8 Copy_u8SubPriority )
{
	u8 Local_u8Priority = (Copy_u8SubPriority | (Copy_u8GroupPriority << ((NO_OF_GROUPS_SUB - 0x05FA0300)/256)));
		/* core peripheral 			
	if(Copy_s8IntID < 0)
	{
		
	}
	*/
	
	/* external peripheral*/
	if(Copy_s8IntID >= 0)
	{
		// set the priority in the register shifted by for because first 4 bit are reserved
		NVIC_IPR[Copy_s8IntID] = Local_u8Priority << 4;
	}
		SCB_AIRCR = NO_OF_GROUPS_SUB ;
	
}
 