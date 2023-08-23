/*
 * SysTick.h
 *
 *  Created on: Aug 19, 2023
 *      Author: Aya
 */

#ifndef SYSTICK_H_
#define SYSTICK_H_
#include "Bitwise_Operations.h"
#include "tm4c123gh6pm.h"
/********************************#DEFINE********************************/
#define STRELOAD 16000000UL   //Max Count
/********************************FUNCTION PROTOTYPES********************************/
void SysTick_Init(void);
#endif /* SYSTICK_H_ */
