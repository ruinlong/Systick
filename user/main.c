#include <stm32f10x.h>
#include "stm32f10x_gpio.h"
#include "Systick.h"

unsigned char state=0;


void GpioInit()
{
		GPIO_InitTypeDef GPIO;
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
		GPIO.GPIO_Mode = GPIO_Mode_Out_PP;
		GPIO.GPIO_Speed= GPIO_Speed_10MHz;		GPIO.GPIO_Pin = GPIO_Pin_8;
		GPIO_Init(GPIOA,&GPIO);}


int main(void)
{
	volatile	uint32_t tmp=0;
	GpioInit();	

	Systick_Init(Clk_Source_AHB,EN_TickInt_assert,DIS_SysTick); 
	Systick_Load_Value(0xffffff);
	Systick_TickInit(EN_Systick);
	while(1)
	{		
		tmp=Systick_GetValue();
	}
}


void SysTick_Handler(void)
{
	GPIO_WriteBit(GPIOA,GPIO_Pin_8,state);
			state=~state;	
}


