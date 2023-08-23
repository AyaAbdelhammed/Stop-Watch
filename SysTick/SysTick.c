/*
 * SysTick.c
 *
 *  Created on: Aug 19, 2023
 *      Author: Aya
 */
#include "SysTick.h"
void SysTick_Init(void)
{
    NVIC_ST_CTRL_R = 0x07 ; //SYSTEM CLOCK - INTERRUPT ENABLED - ENABLED
    NVIC_ST_RELOAD_R= STRELOAD; //COUNTING FROM 16M
}

