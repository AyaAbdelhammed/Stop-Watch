

/**
 * main.c
 */
#include "SysTick.h"
#include "LCD.h"
volatile int flag = 0;
unsigned int sec = 0;
unsigned int minutes = 1;
int main(void)
{
    SysTick_Init();
    LCD_Init();
    while (1)
    {
        if(flag == 1){
            LCD_Clear();
            if (sec>59){
                minutes++;
                sec=0;
            }
            LCD_Write_Int(minutes);
            LCD_Char(':');
            LCD_Write_Int(sec);
            sec++;
            flag = 0;
        }
    }
}

void
SysTick_Handler(void)
{
    flag ++;
}
