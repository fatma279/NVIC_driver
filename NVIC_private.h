/*  Autour  : fatma                          */
/*  Date    : 19 April 2021                   */														
/*  version : V1                             */

#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H


/*                 NVIC Register               */
#define NVIC_ISER0     *((u32*)0xE000E100)                  /*  Enable external Interrupt from interrupt 0 to 31*/
#define NVIC_ISER1     *((u32*)0xE000E104)                  /*  Enable external Interrupt from interrupt 32 to 63*/

#define NVIC_ICER0     *((u32*)0xE000E180)                  /*  Clear external Interrupt from interrupt 0 to 31*/
#define NVIC_ICER1     *((u32*)0xE000E184)                  /*  Clear external Interrupt from interrupt 32 to 63*/

#define NVIC_ISPR0     *((u32*)0xE000E200)                  /*  Set pending flag for external Interrupt from interrupt 0 to 31*/
#define NVIC_ISPR1     *((u32*)0xE000E204)                  /*  Set pending flag for external Interrupt from interrupt 32 to 63*/

#define NVIC_ICPR0     *((u32*)0xE000E280)                  /*  Clear pending flag for external Interrupt from interrupt 0 to 31*/
#define NVIC_ICPR1     *((u32*)0xE000E284)                  /*  Clear pending flag for external Interrupt from interrupt 32 to 63*/

#define NVIC_IABR0     *((volatile u32*)0xE000E300)         /*  Get Active flag for external Interrupt from interrupt 0 to 31*/
#define NVIC_IABR1     *((volatile u32*)0xE000E304)         /*  Get Active flag for external Interrupt from interrupt 32to 63*/

#define NVIC_IPR      ((volatile u8 *)0xE000E400)           /*Set interrupt Group & SubGroup priority from INT 0 TO 15 */




#define NVIC_STIR      *((u32*)0xE000EF00)

#define SCB_AIRCR      *((u32*)0xE000ED0c)                  /*provides priority grouping control */







#endif