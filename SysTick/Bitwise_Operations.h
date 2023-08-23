/*
 * Bitwise_Operations.h
 *
 *  Created on: Aug 13, 2023
 *      Author: EUI-Support
 */

#ifndef BITWISE_OPERATIONS_H_
#define BITWISE_OPERATIONS_H_
#define Set_Bit(Register,Bit) (Register|= 1<<Bit)
#define Clear_Bit(Register,Bit) (Register &=~ (1<<Bit))
#define Get_Bit(Register,Bit) (Register & 1<<Bit)
#define Toggle_Bit(Register,Bit) (Register^=1<<Bit)
#define Write_Port(Port,Value) (Port = Value)
#define Set_Port(Port) (Port = 0xff)

#endif /* BITWISE_OPERATIONS_H_ */
