/******************************************************************/
// Auther  : Mazen Adeeb                                          //
// Date    : 19/1/2022                                            //
// version : 0.0.1                                                //
// Driver  : TIMER_driver                                         //
/******************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "TIMER_private.h"
#include "TIMER_interface.h"
#include "TIMER_config.h"

void TIMER_vInit(){
    //enable globle interrupt
    //SET_BIT(SREG,7);
    // //TIMER0_normal MODE
    // CLEAR_BIT(TIMER_TCCRO,3);
    // CLEAR_BIT(TIMER_TCCRO,6);

    // timer0_ctc
    // SET_BIT(TIMER_TCCRO,3);
    //CLEAR_BIT(TIMER_TCCRO,6);

    // preload value
    //TIMER_TCNT0 = 224;
      TIMER_OCR0 = 100; 

    //enable overflow interrupt
    //SET_BIT(TIMER_TIMSK,1);


    //prescale 8
    CLEAR_BIT(TIMER_TCCR0,0);
    SET_BIT(TIMER_TCCR0,1);
    CLEAR_BIT(TIMER_TCCR0,2);
    //FAST PWM NON INVERTING
    /*SET_BIT(TIMER_TCCR0,3);
    SET_BIT(TIMER_TCCR0,6);
    SET_BIT(TIMER_TCCR0,5);
    CLEAR_BIT(TIMER_TCCR0,4);*/


   //TIMER 1 FAST PWM ICR
	SET_BIT(TIMER_TCCR1A,7);
	CLEAR_BIT(TIMER_TCCR1A,6);
	SET_BIT(TIMER_TCCR1A,1);
	CLEAR_BIT(TIMER_TCCR1A,0);
	SET_BIT(TIMER_TCCR1B,3);
	SET_BIT(TIMER_TCCR1B,4);


	TIMER_ICR1 = 40000;

	SET_BIT(TIMER_TCCR1B,1);
	CLEAR_BIT(TIMER_TCCR1B,0);
	CLEAR_BIT(TIMER_TCCR1B,2);	
}

void Set_Ocr1(u16 value){
	TIMER_TCCR1A = value;
}


/*void Set_Ocr(u8 value)
{
	TIMER_OCR0 = value;
}



void (*gptr) (void) = NULL;

void callback (void(*ptr)(void)){
    gptr=ptr;
}

void__vector_11(void)__attribute__((signal:)):
/*void__vector_11(void){
    static u16 counter = 0;
    counter++;
    if (counter==1954){
         gptr();
         counter = 0;
         TIMER_TCNT= 224;
        

    }
*/

void__vector_10(void){
    static u16 counter = 0;
    counter++;
    if (counter==20000){
         gptr();
         counter = 0;
         TIMER_OCR0 = 100;
        

    }

        



