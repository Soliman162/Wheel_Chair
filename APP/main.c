#include "std_types.h"

#include "DIO_interface.h"
#include "UART_interface.h"

#include "L298_interface.h"
#include "HC05_interface.h"
#include "LED_interface.h"

#include "wheel_chair.h" 

int main(void)
{
    MOVING_STATE Current_enumDierction = STOP ;
    MOVING_STATE Previous_enumDirection = STOP;

    HC05_voidInit();
    WheelChair_voidInit();

    while(1)
    {

       while( Current_enumDierction == Previous_enumDirection ){ Current_enumDierction = HC05_u8Receive(); }

       if( Current_enumDierction == STOP )
       {
            Wheel_Chair_voidStop();
       }else if( Current_enumDierction == FORWARD )
       {
           WheelChair_voidMove_Forward();
       }else if ( Current_enumDierction == BACKWARD )
       {
           WheelChair_voidMove_Backward();
       }else if( Current_enumDierction == RIGHT )
       {
           WheelChair_voidMove_Right();
       }else if( Current_enumDierction == LEFT )
       {
           WheelChair_voidMove_Left();
       }
       Previous_enumDirection = Current_enumDierction;

    }

    return 0;
}