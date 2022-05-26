#ifndef UART_INTERFACE_H
#define UART_INTERFACE_H

void UART_voidInit(void);
u8 UART_u8Receive_Char(void);
void UART_voidTransmit_Char(u8 Copy_u8Data);

u8 * UART_u8ptrReceive_String(void);
void UART_voidTransmit_String(u8 *Copy_u8Data);





#endif
