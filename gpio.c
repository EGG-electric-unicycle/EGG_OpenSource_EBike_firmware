/*
 * EGG OpenSource EBike firmware
 *
 * Copyright (C) Casainho, 2015, 2106, 2017.
 *
 * Released under the GPL License, Version 3
 */

#include "stm32f10x_rcc.h"
#include "stm32f10x_gpio.h"
#include "gpio.h"

void gpio_init (void)
{
  /* Enable clocks */
  RCC_APB2PeriphClockCmd( RCC_APB2Periph_AFIO  |
                          RCC_APB2Periph_GPIOA |
                          RCC_APB2Periph_GPIOB
                          , ENABLE);

  GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable, ENABLE);

  // safe switch pin
  GPIO_InitTypeDef GPIO_InitStructure;
  GPIO_InitStructure.GPIO_Pin = SAFE_SWITCH__PIN;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
  GPIO_Init(SAFE_SWITCH__PORT, &GPIO_InitStructure);
}

unsigned int safe_switch_get_state (void)
{
  return GPIO_ReadInputDataBit(SAFE_SWITCH__PORT, SAFE_SWITCH__PIN);
}
