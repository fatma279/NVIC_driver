/*  Autour  : fatma                          */
/*  Date    : 19 April 2021                   */														
/*  version : V1                             */

#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H


                 /*GroupPriority*/
				 
#define GROUP4          0x05fa0300          /* 4 bits for Group & 0 bits for Sub Groub */
#define GROUP3          0x05fa0400          /* 3 bits for Group & 1 bits for Sub Groub */
#define GROUP2          0x05fa0500          /* 2 bits for Group & 2 bits for Sub Groub */
#define GROUP1          0x05fa0600          /* 1 bits for Group & 3 bits for Sub Groub */
#define GROUP0          0x05fa0700          /* 0 bits for Group & 4 bits for Sub Groub */

void NVIC_voidEnableInterrupt  (u8 Copy_u8IntNumber);
void NVIC_voidDisableInterrupt (u8 Copy_u8IntNumber);
void NVIC_voidSetPendingFlag   (u8 Copy_u8IntNumber);
void NVIC_voidClearPendingFlag (u8 Copy_u8IntNumber);
u8 NVIC_u8GetActiveFlag        (u8 Copy_u8IntNumber);
void NVIC_voidSetPriority(s8 Copy_s8IntID , u8 Copy_u8GroupPriority ,u8 Copy_u8SubPriority );




#endif