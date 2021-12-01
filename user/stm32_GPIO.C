#include "stm32_GPIO.H"

void Setbits(GPIO_TypeDef* GPIOX,uint16_t Pin)
{
		GPIOX->BSRR |= (1<<Pin);
}

void Resetbits(GPIO_TypeDef* GPIOX,uint16_t Pin)
{
		GPIOX->BRR  |= (1<<Pin);
}

uint32_t GPIO_PinRead (GPIO_TypeDef *GPIOx, uint32_t num) 
{
  return ((GPIOx->IDR >> num) & 1);
}



//CLOCK CNF MODE ÅäÖÃ
void GPIO_Pin_Configuration(GPIO_TypeDef* GPIOX, uint16_t Pin, uint32_t MODE, uint32_t CNF )
{
	uint32_t GPIO_CRL_MODE_X0 = 0; 	
	uint32_t GPIO_CRL_MODE_X1 = 0;
	uint32_t GPIO_CNL_CNF_X0  = 0;
	uint32_t GPIO_CNL_CNF_X1  = 0;
		
	uint32_t GPIO_CRH_MODE_X0 = 0; 	
	uint32_t GPIO_CRH_MODE_X1 = 0;
	uint32_t GPIO_CNH_CNF_X0  = 0;
	uint32_t GPIO_CNH_CNF_X1  = 0;
	
			   if (GPIOX==GPIOA) {RCC->APB2ENR |= 1<<2;}
		else if (GPIOX==GPIOB) {RCC->APB2ENR |= 1<<3;}
		else if (GPIOX==GPIOC) {RCC->APB2ENR |= 1<<4;}
		else if (GPIOX==GPIOD) {RCC->APB2ENR |= 1<<5;}
		else if (GPIOX==GPIOE) {RCC->APB2ENR |= 1<<6;}
		else if (GPIOX==GPIOF) {RCC->APB2ENR |= 1<<7;}
		else if (GPIOX==GPIOG) {RCC->APB2ENR |= 1<<8;}
	

			switch(Pin)
			{
				case 0: 
						GPIOX->CRL &= ~(GPIO_CRL_MODE0|GPIO_CRL_CNF0);
						GPIO_CRL_MODE_X0=GPIO_CRL_MODE0_0;
						GPIO_CRL_MODE_X1=GPIO_CRL_MODE0_1;
						GPIO_CNL_CNF_X0 =GPIO_CRL_CNF0_0;
						GPIO_CNL_CNF_X1 =GPIO_CRL_CNF0_1;				
				break;
				
				case 1: 
						GPIOX->CRL &= ~(GPIO_CRL_MODE1|GPIO_CRL_CNF1);
						GPIO_CRL_MODE_X0=GPIO_CRL_MODE1_0;
						GPIO_CRL_MODE_X1=GPIO_CRL_MODE1_1;
						GPIO_CNL_CNF_X0 =GPIO_CRL_CNF1_0;
						GPIO_CNL_CNF_X1 =GPIO_CRL_CNF1_1;				
				break;
								
				case 2: 
						GPIOX->CRL &= ~(GPIO_CRL_MODE2|GPIO_CRL_CNF2);
						GPIO_CRL_MODE_X0=GPIO_CRL_MODE2_0;
						GPIO_CRL_MODE_X1=GPIO_CRL_MODE2_1;
						GPIO_CNL_CNF_X0 =GPIO_CRL_CNF2_0;
						GPIO_CNL_CNF_X1 =GPIO_CRL_CNF2_1;				
				break;
								
				case 3: 
						GPIOX->CRL &= ~(GPIO_CRL_MODE3|GPIO_CRL_CNF3);
						GPIO_CRL_MODE_X0=GPIO_CRL_MODE3_0;
						GPIO_CRL_MODE_X1=GPIO_CRL_MODE3_1;
						GPIO_CNL_CNF_X0 =GPIO_CRL_CNF3_0;
						GPIO_CNL_CNF_X1 =GPIO_CRL_CNF3_1;				
				break;
								
					case 4: 
						GPIOX->CRL &= ~(GPIO_CRL_MODE4|GPIO_CRL_CNF4);
						GPIO_CRL_MODE_X0=GPIO_CRL_MODE4_0;
						GPIO_CRL_MODE_X1=GPIO_CRL_MODE4_1;
						GPIO_CNL_CNF_X0 =GPIO_CRL_CNF4_0;
						GPIO_CNL_CNF_X1 =GPIO_CRL_CNF4_1;				
				break;
							
				case 5: 
						GPIOX->CRL &= ~(GPIO_CRL_MODE5|GPIO_CRL_CNF5);
						GPIO_CRL_MODE_X0=GPIO_CRL_MODE5_0;
						GPIO_CRL_MODE_X1=GPIO_CRL_MODE5_1;
						GPIO_CNL_CNF_X0 =GPIO_CRL_CNF5_0;
						GPIO_CNL_CNF_X1 =GPIO_CRL_CNF5_1;				
				break;
								
			
				case 6: 
						GPIOX->CRL &= ~(GPIO_CRL_MODE6|GPIO_CRL_CNF6);
						GPIO_CRL_MODE_X0=GPIO_CRL_MODE6_0;
						GPIO_CRL_MODE_X1=GPIO_CRL_MODE6_1;
						GPIO_CNL_CNF_X0 =GPIO_CRL_CNF6_0;
						GPIO_CNL_CNF_X1 =GPIO_CRL_CNF6_1;				
				break;
								
				case 7: 
						GPIOX->CRL &= ~(GPIO_CRL_MODE7|GPIO_CRL_CNF7);
						GPIO_CRL_MODE_X0=GPIO_CRL_MODE7_0;
						GPIO_CRL_MODE_X1=GPIO_CRL_MODE7_1;
						GPIO_CNL_CNF_X0 =GPIO_CRL_CNF7_0;
						GPIO_CNL_CNF_X1 =GPIO_CRL_CNF7_1;				
				break;
			
				case 8:
						GPIOX->CRH &=~(GPIO_CRH_MODE8|GPIO_CRH_CNF8);
						GPIO_CRH_MODE_X0=GPIO_CRH_MODE8_0;
						GPIO_CRH_MODE_X1=GPIO_CRH_MODE8_1;
						GPIO_CNH_CNF_X0 =GPIO_CRH_CNF8_0;
						GPIO_CNH_CNF_X1 =GPIO_CRH_CNF8_1;							
				break;
				
				case 9:
						GPIOX->CRH &=~(GPIO_CRH_MODE9|GPIO_CRH_CNF9);
						GPIO_CRH_MODE_X0=GPIO_CRH_MODE9_0;
						GPIO_CRH_MODE_X1=GPIO_CRH_MODE9_1;
						GPIO_CNH_CNF_X0 =GPIO_CRH_CNF9_0;
						GPIO_CNH_CNF_X1 =GPIO_CRH_CNF9_1;							
				break;				

				case 10:
						GPIOX->CRH &=~(GPIO_CRH_MODE10|GPIO_CRH_CNF10);
						GPIO_CRH_MODE_X0=GPIO_CRH_MODE10_0;
						GPIO_CRH_MODE_X1=GPIO_CRH_MODE10_1;
						GPIO_CNH_CNF_X0 =GPIO_CRH_CNF10_0;
						GPIO_CNH_CNF_X1 =GPIO_CRH_CNF10_1;							
				break;
				case 11:
						GPIOX->CRH &=~(GPIO_CRH_MODE11|GPIO_CRH_CNF11);
						GPIO_CRH_MODE_X0=GPIO_CRH_MODE11_0;
						GPIO_CRH_MODE_X1=GPIO_CRH_MODE11_1;
						GPIO_CNH_CNF_X0 =GPIO_CRH_CNF11_0;
						GPIO_CNH_CNF_X1 =GPIO_CRH_CNF11_1;							
				break;

				case 12:
						GPIOX->CRH &=~(GPIO_CRH_MODE12|GPIO_CRH_CNF12);
						GPIO_CRH_MODE_X0=GPIO_CRH_MODE12_0;
						GPIO_CRH_MODE_X1=GPIO_CRH_MODE12_1;
						GPIO_CNH_CNF_X0 =GPIO_CRH_CNF12_0;
						GPIO_CNH_CNF_X1 =GPIO_CRH_CNF12_1;							
				break;

				case 13:
						GPIOX->CRH &=~(GPIO_CRH_MODE13|GPIO_CRH_CNF13);
						GPIO_CRH_MODE_X0=GPIO_CRH_MODE13_0;
						GPIO_CRH_MODE_X1=GPIO_CRH_MODE13_1;
						GPIO_CNH_CNF_X0 =GPIO_CRH_CNF13_0;
						GPIO_CNH_CNF_X1 =GPIO_CRH_CNF13_1;							
				break;
	
				case 14:
						GPIOX->CRH &=~(GPIO_CRH_MODE14|GPIO_CRH_CNF14);
						GPIO_CRH_MODE_X0=GPIO_CRH_MODE14_0;
						GPIO_CRH_MODE_X1=GPIO_CRH_MODE14_1;
						GPIO_CNH_CNF_X0 =GPIO_CRH_CNF14_0;
						GPIO_CNH_CNF_X1 =GPIO_CRH_CNF14_1;							
				break;

				case 15:
						GPIOX->CRH &=~(GPIO_CRH_MODE15|GPIO_CRH_CNF15);
						GPIO_CRH_MODE_X0=GPIO_CRH_MODE15_0;
						GPIO_CRH_MODE_X1=GPIO_CRH_MODE15_1;
						GPIO_CNH_CNF_X0 =GPIO_CRH_CNF15_0;
						GPIO_CNH_CNF_X1 =GPIO_CRH_CNF15_1;							
				break;
			}

			if(Pin <8)
			{
				if (CNF == GPIO_IN_PULL_UP) 
					{
					CNF &= ~1;
					GPIOX->ODR |=  (1 << Pin);
					}
				else  if(CNF == GPIO_IN_PULL_DOWN)
					{
					GPIOX->ODR &= ~(1 << Pin);
					}
					
				switch(MODE)
				{
					case 0x00: break;
				 	case 0x01: GPIOX->CRL |= GPIO_CRL_MODE_X0;break;
					case 0x02: GPIOX->CRL |= GPIO_CRL_MODE_X1;break;
					case 0x03: GPIOX->CRL |= GPIO_CRL_MODE_X0 | GPIO_CRL_MODE_X1;break;
				}	

				switch(CNF)
				{
					case 0x00: break;
					case 0x01: GPIOX->CRL |= GPIO_CNL_CNF_X0; break;
					case 0x02: GPIOX->CRL |= GPIO_CNL_CNF_X1;break;
					case 0x03: GPIOX->CRL |=	GPIO_CNL_CNF_X0 | GPIO_CNL_CNF_X1;break;
				}		
			}		
			
			else		
			{
					if (CNF == GPIO_IN_PULL_UP) 
					{
					CNF &= ~1;
					GPIOX->ODR |=  (1 << Pin);
					}
				else if (CNF == GPIO_IN_PULL_DOWN)
					{
					GPIOX->ODR &= ~(1 << Pin);
					}
					
				switch(MODE)
				{
					case 0x00: break;
				 	case 0x01: GPIOX->CRH |= GPIO_CRH_MODE_X0;break;
					case 0x02: GPIOX->CRH |= GPIO_CRH_MODE_X1;break;
					case 0x03: GPIOX->CRH |= GPIO_CRH_MODE_X0 | GPIO_CRH_MODE_X1;break;
				}	
				switch(CNF)
				{
					case 0x00: break;
					case 0x01: GPIOX->CRH |= GPIO_CNH_CNF_X0; break;
					case 0x02: GPIOX->CRH |= GPIO_CNH_CNF_X1;break;
					case 0x03: GPIOX->CRH |=	GPIO_CNH_CNF_X0 | GPIO_CNH_CNF_X1;break;
				}			
			}				
}

