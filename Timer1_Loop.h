/* 
 * File:   Timer1_Loop.h
 * Author: Connor
 *
 * Created on October 16, 2013, 2:01 PM
 */

#ifndef TIMER1_LOOP_H
#define	TIMER1_LOOP_H

#ifdef	__cplusplus
extern "C" {
#endif
    /**
     * Sets up the IRQ overflow for Timer1 to run at div 8 and a counter of 0xFFFF.
     */
    void SetupTimer1();


#ifdef	__cplusplus
}
#endif

#endif	/* TIMER1_LOOP_H */

