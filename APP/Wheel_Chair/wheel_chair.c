#include "std_types.h"
#include "DIO_interface.h"
#include "L298_interface.h"
#include "wheel_chair.h"


L298_config Front_Wheels = {FRONT_WHEELS_PORT, 
                        {FRONT_WHEEL_RIGHT_CW_PIN,FRONT_WHEEL_LEFT_CW_PIN}, 
                        {FRONT_WHEEL_RIGHT_CCW_PIN,FRONT_WHEEL_LEFT_CCW_PIN}};

L298_config Rare_Wheels = {RARE_WHEELS_PORT, 
                        {RARE_WHEEL_RIGHT_CW_PIN,RARE_WHEEL_LEFT_CW_PIN}, 
                        {RARE_WHEEL_RIGHT_CCW_PIN,RARE_WHEEL_LEFT_CCW_PIN}};


void WheelChair_voidInit(void)
{
    L298_voidInit(&Front_Wheels);
    L298_voidInit(&Rare_Wheels);
    Wheel_Chair_voidStop();
}
void Wheel_Chair_voidStop(void)
{
    L298_voidSTOP_ROTATE(&Front_Wheels, MODEL_A);
    L298_voidSTOP_ROTATE(&Front_Wheels, MODEL_B);

    L298_voidSTOP_ROTATE(&Rare_Wheels,MODEL_A);
    L298_voidSTOP_ROTATE(&Rare_Wheels, MODEL_B);
}
void WheelChair_voidMove_Forward(void)
{
    L298_voidROTATE_CW(&Front_Wheels, MODEL_A);
    L298_voidROTATE_CW(&Front_Wheels, MODEL_B);

    L298_voidROTATE_CW(&Rare_Wheels, MODEL_A);
    L298_voidROTATE_CW(&Rare_Wheels, MODEL_B);
}
void WheelChair_voidMove_Backward(void)
{
    L298_voidROTATE_CCW(&Front_Wheels, MODEL_A);
    L298_voidROTATE_CCW(&Front_Wheels, MODEL_B);

    L298_voidROTATE_CCW(&Rare_Wheels, MODEL_A);
    L298_voidROTATE_CCW(&Rare_Wheels, MODEL_B);
}


void WheelChair_voidMove_Right(void)
{
    L298_voidROTATE_CW(&Front_Wheels, MODEL_B);
    L298_voidROTATE_CW(&Rare_Wheels,  MODEL_B);

    L298_voidROTATE_CCW(&Front_Wheels, MODEL_A);
    L298_voidROTATE_CCW(&Rare_Wheels,  MODEL_A);
}
void WheelChair_voidMove_Left(void)
{
    L298_voidROTATE_CCW(&Front_Wheels, MODEL_B);
    L298_voidROTATE_CCW(&Rare_Wheels,  MODEL_B);

    L298_voidROTATE_CW(&Front_Wheels, MODEL_A);
    L298_voidROTATE_CW(&Rare_Wheels, MODEL_A);
}