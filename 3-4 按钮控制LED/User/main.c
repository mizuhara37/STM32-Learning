#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "Key.h"

uint8_t KeyNum;

int main(void)
{
	
	LED_Init();
	Key_Init();
	LED1_ON();
	LED2_ON();
	Delay_s(1);
	LED2_OFF();
	LED1_OFF();
	int flag = 1;
	while(1)
	{
		KeyNum = Key_GetNum();
		if (KeyNum==1)
		{	
			LED1_Turn();
			LED2_Turn();
		}
		
	}
}
