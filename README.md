# Embedded-System
# Week 1 : Blinking the LED's connected to PORTC pins of  PIC16F877A

 ** Register  ** | **Functions** |
:---------------:|:--------------:|
TRISx            |  Configures the pin direction (Input/Output)
TRISx = 1        |  Input
TRISx = 0        |  Output


PORTx            |  Reads the input state or writes output data to the port pins
When TRISx = 1   |  PORTx reads the external pin state
When TRISx = 0   |  PORTx writes the desired output value to the pin
