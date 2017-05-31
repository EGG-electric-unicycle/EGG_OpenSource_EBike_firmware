/*
 * EGG OpenSource EBike firmware
 *
 * Copyright (C) Casainho, 2015, 2106, 2017.
 *
 * Released under the GPL License, Version 3
 */

#include "stm32f10x.h"
#include "gpio.h"
#include "brakes.h"

void brakes_init (void)
{
  GPIO_InitTypeDef GPIO_InitStructure;

//  // battery LED indicator pins
//  GPIO_InitStructure.GPIO_Pin = LED_1_BATTERY_INDICATOR__PIN;
//  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
//  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
//  GPIO_Init(LED_1_BATTERY_INDICATOR__PORT, &GPIO_InitStructure);
}

unsigned char get_brakes_state (void)
{
//  GPIO_SetBits(LED_1_BATTERY_INDICATOR__PORT, LED_1_BATTERY_INDICATOR__PIN);
}
