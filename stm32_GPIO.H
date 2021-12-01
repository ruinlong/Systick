#ifndef _STM32_GPIO_H_
#define _STM32_GPIO_H_

#include <stm32f10x.h>

extern void Setbits(GPIO_TypeDef* GPIOX,uint16_t Pin);
extern void Resetbits(GPIO_TypeDef* GPIOX,uint16_t Pin);
uint32_t GPIO_PinRead (GPIO_TypeDef *GPIOx, uint32_t num);
extern void GPIO_Pin_Configuration(GPIO_TypeDef* GPIOX, uint16_t Pin, uint32_t MODE, uint32_t CNF );

enum {
  GPIO_MODE_INPUT     = 0x00,              /// GPIO is input
  GPIO_MODE_OUT10MHZ  = 0x01,              /// Max output Speed 10MHz
  GPIO_MODE_OUT2MHZ   = 0x02,              /// Max output Speed  2MHz
  GPIO_MODE_OUT50MHZ  = 0x03               /// Max output Speed 50MHz
};

/// Port Conf
enum {
  GPIO_OUT_PUSH_PULL  = 0x00,               /// general purpose output push-pull
  GPIO_OUT_OPENDRAIN  = 0x01,               /// general purpose output open-drain
  GPIO_AF_PUSHPULL    = 0x02,               /// alternate function push-pull
  GPIO_AF_OPENDRAIN   = 0x03,               /// alternate function open-drain
	
  GPIO_IN_ANALOG      = 0x00,               /// input analog
  GPIO_IN_FLOATING    = 0x01,               /// input floating
  GPIO_IN_PULL_DOWN   = 0x02,               /// alternate function push-pull
  GPIO_IN_PULL_UP     = 0x03                /// alternate function pull up
};

#endif
