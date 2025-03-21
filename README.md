# Embedded_System
# Week 1 : Blinking the LED's connected to PORTD pins of  PIC16F877A
<br><br>
**Register** | **Functions** |
:------------:|:---------------------:|
TRISD         | Configures the pin direction(Input/Output)
PORTD         | Reads the input state or writes output data to the port pins

<br><br>

**Register** | **Functions** |
:-----------:|:-------------:|
TRISD = 1    |  Input
TRISD = 0    |  Output
If TRISD = 1 |  PORTD reads  the external pin state
If TRISD = 0 |  PORTD writes the desired output value to the pin
