#include <xc.h>
#include "timer0.h"

/* Config Timer0 */
void TIMER0_Initialize(void)
{
	/* Timer0 disabled; 16-bit; no postscaler */
	T0CON0 = 0x10;
    
    /* HFINTOSC; counter not synchronized; prescaler 1:1 */
	T0CON1 = 0x70;
    
}

/* Timer0 Delay */
void TIMER0_Delay()
{
	
	TMR0H = 0x??;
	TMR0L = 0x??;

    /* Timer0 enabled; 16-bit */
	T0CON0 |= 0x80;
    
    /* Wait for TMR0IF = 1 */
    while ((PIR3 & 0x80) != 0x80)
      ;
        
    /* Clear TMR0IF bit */
    PIR3 &= 0x7F;
    
    /* Timer0 disabled; 16-bit */
	T0CON0 &= 0x7F;
}