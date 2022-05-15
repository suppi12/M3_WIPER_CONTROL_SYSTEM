/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2014 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

/*#include "led.h"

// ----------------------------------------------------------------------------

void
blink_led_init()
{
  // Enable GPIO Peripheral clock
  SET_BIT(RCC->AHB1ENR, BLINK_RCC_MASKx(BLINK_PORT_NUMBER));

  GPIO_InitTypeDef GPIO_InitStructure;

  // Configure pin in output push/pull mode
  GPIO_InitStructure.Pin = GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15|;
  GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStructure.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStructure.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(BLINK_GPIOx(BLINK_PORT_NUMBER), &GPIO_InitStructure);

  // Start with led turned off
  blink_led_off();
}

void
blink_led_on(void)
{
#if (BLINK_ACTIVE_LOW)
  HAL_GPIO_WritePin(BLINK_GPIOx(BLINK_PORT_NUMBER),
    BLINK_PIN_MASK(BLINK_PIN_NUMBER), GPIO_PIN_RESET);
#else
  HAL_GPIO_WritePin(BLINK_GPIOx(BLINK_PORT_NUMBER),
    BLINK_PIN_MASK(BLINK_PIN_NUMBER), GPIO_PIN_SET);
#endif
}

void
blink_led_off(void)
{
#if (BLINK_ACTIVE_LOW)
  HAL_GPIO_WritePin(BLINK_GPIOx(BLINK_PORT_NUMBER),
    BLINK_PIN_MASK(BLINK_PIN_NUMBER), GPIO_PIN_SET);
#else
  HAL_GPIO_WritePin(BLINK_GPIOx(BLINK_PORT_NUMBER),
    BLINK_PIN_MASK(BLINK_PIN_NUMBER), GPIO_PIN_RESET);
#endif
}

// ----------------------------------------------------------------------------
*/
#include "led.h"

// ----------------------------------------------------------------------------

void blink_led_init()
{
  // Enable GPIO Peripheral clock
  SET_BIT(RCC->AHB1ENR, BLINK_RCC_MASKx(BLINK_PORT_NUMBER));
  GPIO_InitTypeDef GPIO_InitStructure;

  // Configure pin in output push/pull mode
  GPIO_InitStructure.Pin = GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15;
  GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStructure.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStructure.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(BLINK_GPIOx(BLINK_PORT_NUMBER), &GPIO_InitStructure);



    // Enable GPIO Peripheral clock
    SET_BIT(RCC->AHB1ENR, BLINK_RCC_MASKx(BLINK_PORT_NUMBER));

    //GPIO_InitTypeDef GPIO_InitStructure;

    // Configure pin in output push/pull mode
    GPIO_InitStructure.Pin = GPIO_PIN_14;
    GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStructure.Speed = GPIO_SPEED_FREQ_HIGH;
    GPIO_InitStructure.Pull = GPIO_PULLDOWN;
    HAL_GPIO_Init(BLINK_GPIOx(BLINK_PORT_NUMBER), &GPIO_InitStructure);


  // Start with led turned off
  blink_led_off();
}

void
blink_led_on(void)
{
#if (BLINK_ACTIVE_LOW)
  HAL_GPIO_WritePin(BLINK_GPIOx(BLINK_PORT_NUMBER),
  ( GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15), GPIO_PIN_RESET);
#else
  HAL_GPIO_WritePin(BLINK_GPIOx(BLINK_PORT_NUMBER),
  ( GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15), GPIO_PIN_SET);
#endif
}

void
blink_led_off(void)
{
#if (BLINK_ACTIVE_LOW)
  HAL_GPIO_WritePin(BLINK_GPIOx(BLINK_PORT_NUMBER),
  ( GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15), GPIO_PIN_SET);
#else
  HAL_GPIO_WritePin(BLINK_GPIOx(BLINK_PORT_NUMBER),
  ( GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15), GPIO_PIN_RESET);
#endif
}


void blink_led1_on(void)
{
#if (BLINK_ACTIVE_LOW)
  HAL_GPIO_WritePin(BLINK_GPIOx(BLINK_PORT_NUMBER),
  ( GPIO_PIN_14), GPIO_PIN_RESET);
#else
  HAL_GPIO_WritePin(BLINK_GPIOx(BLINK_PORT_NUMBER),
  ( GPIO_PIN_14), GPIO_PIN_SET);
#endif
}

/*#define  PRESSED_BUTTON_NONE               0X00
#define  PRESSED_BUTTON_USER               0X01
#include "led.h"
int main(void)
{
	int Mykey =  PRESSED_BUTTON_NONE;
    int Myuserkeystate =0;
    int BUTTON_USER;
    int BUTTON_MODE_GPIO;
	TIMER3_Config();
	STM_EVAL_PBInit(BUTTON_USER, BUTTON_MODE_GPIO);
	STM_EVAL_LEDInit(LED3);
	STM_EVAL_LEDInit(LED4);
	STM_EVAL_LEDInit(LED5);
	STM_EVAL_LEDInit(LED6);
	While(1)
	{
		Mykey=Read_User_Button();
		if(Mykey =  PRESSED_BUTTON_USER)
		{
			Myuserkeystate++;
			if(Myuserkeystate>1)
				Myuserkeystate=0;

		}
		if(Myuserkeystate==0)
		{
			STM_EVAL_LEDOff(LED3);STM_EVAL_LEDOff(LED4);STM_EVAL_LEDOff(LED5);STM_EVAL_LEDOff(LED6);

		}
		else if(Myuserkeystate==1)
		{
		     STM_EVAL_LEDOn(LED3);STM_EVAL_LEDOn(LED4);STM_EVAL_LEDOn(LED5);STM_EVAL_LEDOn(LED6);
		}
	}

}
void Read_User_Button(void)
{
	tU32 CurrentTimerVal;
	if(STM_EVAL_PBGetstate(BUTTON_USER))
	{
		CurrentTimerVal = coreTimer(0);
		while(STM_EVAL_PBGetstate(BUTTON_USER)==Bit_SET);
		if((coreTimer(CurrentTimerVal)>100))
			return PRESSED_BUTTON_USER;
		else
			return PRESSED_BUTTON_NONE;
	}
	else
	{
		return PRESSED_BUTTON_NONE;
	}
}
*/
