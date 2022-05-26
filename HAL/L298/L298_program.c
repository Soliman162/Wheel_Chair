#include "std_types.h"

#include "DIO_interface.h"

#include "L298_interface.h"
#include "L298_private.h"


void L298_voidInit(L298_config *Copy_strL298)
{
    SetPin_enumDirection(Copy_strL298->CONTROL_PORT,Copy_strL298->CW_Pin[MODEL_A_CW_PIN_INDEX],DIO_OUTPUT);
    SetPin_enumDirection(Copy_strL298->CONTROL_PORT,Copy_strL298->CW_Pin[MODEL_B_CW_PIN_INDEX],DIO_OUTPUT);

    SetPin_enumDirection(Copy_strL298->CONTROL_PORT,Copy_strL298->CW_Pin[MODEL_A_CCW_PIN_INDEX],DIO_OUTPUT);
    SetPin_enumDirection(Copy_strL298->CONTROL_PORT,Copy_strL298->CW_Pin[MODEL_B_CCW_PIN_INDEX],DIO_OUTPUT);


    SetPin_enumValue(Copy_strL298->CONTROL_PORT,Copy_strL298->CW_Pin[MODEL_A_CW_PIN_INDEX],DIO_LOW);
    SetPin_enumValue(Copy_strL298->CONTROL_PORT,Copy_strL298->CW_Pin[MODEL_B_CW_PIN_INDEX],DIO_LOW);

    SetPin_enumValue(Copy_strL298->CONTROL_PORT,Copy_strL298->CCW_Pin[MODEL_A_CCW_PIN_INDEX],DIO_LOW);
    SetPin_enumValue(Copy_strL298->CONTROL_PORT,Copy_strL298->CCW_Pin[MODEL_B_CCW_PIN_INDEX],DIO_LOW);
}
void L298_voidROTATE_CW(L298_config *Copy_strL298,L298_Modules Copy_enumModel)
{

    SetPin_enumValue(Copy_strL298->CONTROL_PORT,Copy_strL298->CW_Pin[Copy_enumModel],DIO_HIGH);
    SetPin_enumValue(Copy_strL298->CONTROL_PORT,Copy_strL298->CCW_Pin[Copy_enumModel],DIO_LOW);

}
void L298_voidROTATE_CCW(L298_config *Copy_strL298,L298_Modules Copy_enumModel)
{
    SetPin_enumValue(Copy_strL298->CONTROL_PORT,Copy_strL298->CW_Pin[Copy_enumModel],DIO_LOW);
    SetPin_enumValue(Copy_strL298->CONTROL_PORT,Copy_strL298->CCW_Pin[Copy_enumModel],DIO_HIGH);
}

void L298_voidSTOP_ROTATE(L298_config *Copy_strL298, L298_Modules Copy_enumModel)
{
    SetPin_enumValue(Copy_strL298->CONTROL_PORT, Copy_strL298->CCW_Pin[Copy_enumModel], DIO_LOW);
    SetPin_enumValue(Copy_strL298->CONTROL_PORT, Copy_strL298->CW_Pin[Copy_enumModel], DIO_LOW);
}

