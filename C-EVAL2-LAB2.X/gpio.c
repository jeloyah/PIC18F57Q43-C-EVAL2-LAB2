
#include <xc.h>
#include "gpio.h"

/* PortA initialization */
void PortA_Initialize(void)
{

    LATA = 0x??;
    
    ANSELA = 0x00;
        
    WPUA = 0x??;
       
    TRISA = 0x??;
}

/* PortB initialization */
void PortB_Initialize(void)
{
    LATB = 0x??;
    
    ANSELB = 0x00;
    
    WPUB = 0x??;
        
    TRISB = 0??;
}

/* PortC initialization */
void PortC_Initialize(void)
{
    LATC = 0x??;
    
    ANSELC = 0x00;
    
    WPUC = 0x??;
        
    TRISC = 0x??;
}
    
/* PortD initialization */
void PortD_Initialize(void)
{
    LATD = 0x??;
    
    ANSELD = 0x00;
    
    WPUD = 0x??;
        
    TRISD = 0x??;
}

/* PortE initialization */
void PortE_Initialize(void)
{
    LATE = 0x??;
    
    ANSELE = 0x00;
    
    WPUE = 0x??;
        
    TRISE = 0x??;
}    

/* PortF initialization */
void PortF_Initialize(void)
{
    LATF = 0x??;
    
    ANSELF = 0x00;
    
    WPUF = 0x??;
        
    TRISF = 0x??;
}