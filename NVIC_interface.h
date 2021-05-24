/*  Autour  : fatma                          */
/*  Date    : 19 April 2021                   */														
/*  version : V1                             */

#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H


             

void NVIC_voidEnableInterrupt  (u8 Copy_u8IntNumber);
void NVIC_voidDisableInterrupt (u8 Copy_u8IntNumber);
void NVIC_voidSetPendingFlag   (u8 Copy_u8IntNumber);
void NVIC_voidClearPendingFlag (u8 Copy_u8IntNumber);
u8 NVIC_u8GetActiveFlag        (u8 Copy_u8IntNumber);
void NVIC_voidSetPriority(s8 Copy_s8IntID , u8 Copy_u8GroupPriority ,u8 Copy_u8SubPriority );




#endif
