/******************************************************************/
// Auther  : Mazen Adeeb                                          //
// Date    : 19/1/2022                                            //
// version : 0.0.1                                                //
// Driver  : TIMER_driver                                         //
/******************************************************************/


#ifndef TIMER_PRIVATE_H
#define TIMER_PRIVATE_H 

# define SREG                 *((volatile u8 *)0x5F)
# define TIMER_TCNT0          *((volatile u8 *)0x52)
# define TIMER_OCR0            *((volatile u8 *)0x5C)
# define TIMER_TIMSK          *((volatile u8 *)0x59)
# define TIMER_TCCR0          *((volatile u8 *)0x53)
# define TIMER_TCCR1A         *((volatile u8 *)0x4F)
# define TIMER_TCCR1B          *((volatile u8 *)0x4E)
# define TIMER_OCR1A          *((volatile u16 *)0x4A)
# define TIMER_ICR1          *((volatile u16 *)0x46)



#endif
