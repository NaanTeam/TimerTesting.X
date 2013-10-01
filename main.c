/* 
 * File:   main.c
 * Author: Connor m
 *
 * Created on September 29, 2013, 11:52 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <plib.h>
void SetupTimer1();

int main(int argc, char** argv)
{
    TRISFbits.TRISF0 = 0;
    
    SetupTimer1();
    INTEnableInterrupts();

    while (1)
    {
    }
    return (EXIT_SUCCESS);
}

void SetupTimer1()
{
    INTClearFlag(INT_T1);
    INTSetVectorPriority(INT_TIMER_1_VECTOR, INT_PRIORITY_LEVEL_3);
    INTSetVectorSubPriority(INT_TIMER_1_VECTOR, INT_SUB_PRIORITY_LEVEL_0);
    INTEnable(INT_T1, INT_ENABLED);
    
    
    // Enable multi-vector interrupts
    INTConfigureSystem(INT_SYSTEM_CONFIG_MULT_VECTOR);
    //Enable
    INTEnableInterrupts();

    OpenTimer1(T1_ON | T1_SOURCE_INT | T1_PS_1_8, 0xFFFF);
}

void __ISR(_TIMER_1_VECTOR, IPL3AUTO) Timer1Handler(void)
{
    PORTFbits.RF0 = PORTFbits.RF0 ^ 1;;
    IFS0CLR = 0x00000010; // Be sure to clear the Timer1 interrupt status
}
