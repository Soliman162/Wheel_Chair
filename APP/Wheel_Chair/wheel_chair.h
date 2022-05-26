#ifndef WHEEL_CHAIR_H
#define WHEEL_CHAIR_H

/* Configration */

#define FRONT_WHEELS_PORT       PORTA

#define FRONT_WHEEL_RIGHT_CCW_PIN     PIN1
#define FRONT_WHEEL_RIGHT_CW_PIN      PIN0  

#define FRONT_WHEEL_LEFT_CCW_PIN      PIN3
#define FRONT_WHEEL_LEFT_CW_PIN       PIN2


#define RARE_WHEELS_PORT        PORTB

#define RARE_WHEEL_RIGHT_CW_PIN       PIN0     
#define RARE_WHEEL_RIGHT_CCW_PIN      PIN1

#define RARE_WHEEL_LEFT_CW_PIN        PIN2
#define RARE_WHEEL_LEFT_CCW_PIN        PIN3

typedef enum{
    
    FORWARD='F',
    BACKWARD='B',
    RIGHT='R',
    LEFT='L',
    STOP = 'S'

}MOVING_STATE;


void WheelChair_voidInit(void);
void Wheel_Chair_voidStop(void);
void WheelChair_voidMove_Forward(void);
void WheelChair_voidMove_Backward(void);
void WheelChair_voidMove_Right(void);
void WheelChair_voidMove_Left(void);



#endif