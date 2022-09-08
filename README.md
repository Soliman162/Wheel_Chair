# Wheel_Chair
Gesture Control Wheel Chair using ATmega-32

# Project Description
The WheelChair connected to 4 wheels every wheel conected to DC-Motor.

Every 2 DC-Motors connected to L298 Module to provide the required Volt for every motor 
and to help the motor to rotate in 2 different ways (Clockwise/CounterClockwise)

The MCU connected to HC-05(Bluetooth module) so it can receive the moving direction from a phone APP
The moving direction determined 

# Architecture Layer Applied:-
-APP Folder has the Main Application :
1-main.c
2-Wheel_Chair/wheel_chair.c
3-Wheel_Chair/wheel_chair.h

-HAL Folder has : 
 1-LED Display Driver
 2-Keypad Driver
 3-Buzzer Driver
 4-LED Display Driver
 5-LCD Display Driver
 
-MCAL Folder has DIO Driver (which is needed because HAL Layer Connecting to MCAL Layer).
-LIB Folder has (.h) Files has useful Macros to make the code easier and more readable.

# The hardware that has been used is:
      1-ATmega-32
      2-L298
      3-motors
      4-Wheels
      5-HC-05(Bluetooth module)
