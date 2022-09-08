# Gesture Control Wheelchair using ATmega-32

# Project Description
The Wheelchair is connected to 4 wheels every wheel connected to DC-Motor.

Every 2 DC-Motors connected to L298 Module to provide the required Voltage for every motor and to help the motor to rotate in 2 different ways (clockwise/counterclockwise).

The MCU connected to HC-05(Bluetooth module) so it can receive the moving direction from a phone APP.
The moving direction is determined by the gesticulation direction of the phone.

# Architecture Layer:
-APP Folder has the Main Application: 
1-main.c 
2-Wheel_Chair/wheel_chair.c
3-Wheel_Chair/wheel_chair.h
4-Cmake Files

-HAL Folder has: 
 1-L298
 2-HC-05(Bluetooth module)

-MCAL Folder has DIO Driver (which is needed because HAL Layer Connecting to MCAL Layer):
1-DIO
2-Uart

-LIB Folder has (.h) Files has useful Macros to make the code easier and more readable:
1-BIT_MATH.h
2-STD_TYPES.h

The hardware that has been used is:
 1-ATmega-32
 2-L298
 3-motors
 4-Wheels
 5-HC-05(Bluetooth module)
