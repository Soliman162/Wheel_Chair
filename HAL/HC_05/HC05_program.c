#include "std_types.h"

#include "DIO_interface.h"
#include "UART_interface.h"

#include "HC05_interface.h"
#include "HC05_config.h"

void HC05_voidInit(void)
{
    SetPin_enumDirection(HC05_PORT,HC05_RECEIVE_PIN,DIO_INPUT);
    SetPin_enumDirection(HC05_PORT,HC05_TRANSMIT_PIN,DIO_OUTPUT);

    UART_voidInit();
}
u8 HC05_u8Receive(void)
{
    return UART_u8Receive_Char();
}
void HC05_voidTransmit(u8 Copy_u8Data)
{
    UART_voidTransmit_Char(Copy_u8Data);
}

