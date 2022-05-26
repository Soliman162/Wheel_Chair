#ifndef L298_INTERFACE_H
#define L298_INTERFACE_H


typedef enum{

    MODEL_A=0,
    MODEL_B

}L298_Modules;

typedef struct{

    u8 CONTROL_PORT;
    u8 CW_Pin[2];
    u8 CCW_Pin[2];

}L298_config;

void L298_voidInit(L298_config *Copy_strL298);
void L298_voidROTATE_CW(L298_config *Copy_strL298,L298_Modules Copy_enumModel);
void L298_voidROTATE_CCW(L298_config *Copy_strL298,L298_Modules Copy_enumModel);
void L298_voidSTOP_ROTATE(L298_config *Copy_strL298, L298_Modules Copy_enumModel);


#endif