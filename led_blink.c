// PIC16F877A Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = EXTRC     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

#include <xc.h>
#define _XTAL_FREQ 6000000 //setting the clock frequency to 6MHz

void main(void) {
    
    TRISD = 0x00;//setting the register to make all pins as output pins[00000000]
    PORTD = 0x00;//setting the output pins initally to low[00000000]
    
    while(1) { // while loop is initiated
        
        PORTD = 0x02; //0000 0010-RD1 as high and RD7 as low]
        __delay_ms(3000); // delaying for 3 seconds
        PORTD = 0x80; // 10000 0000- RD1 low and RD7 high
        __delay_ms(3000); // delaying for 3 seconds
        PORTD = 0x82; // 1000 0010 - RD1 and RD7 as high 
        __delay_ms(3000); // delaying for 3 seconds
        PORTD = 0x00; // setting all the pins to low [0000 0000]
        __delay_ms(3000); // delaying for 3 seconds
    }
    return;
}




 
