/* 
 * File:   main.c
 * Author: Connor M
 *
 * Created on September 29, 2013, 11:52 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "Timer1_Loop.h"


int main(int argc, char** argv)
{
    SetupTimer1();
    INTEnableInterrupts();

    while (1)
    {
    }
    return (EXIT_SUCCESS);
}

