#include "led.h" 
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK STM32F407开发板
//LED驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//创建日期:2014/5/2
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2014-2024
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	 

//初始化PF9和PF10为输出口.并使能这两个口的时钟		    
//LED IO初始化
void LED_Init(void)
{    	 
  GPIO_InitTypeDef  GPIO_InitStructure;

  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);//使能GPIOF时钟

  //GPIOF9,F10初始化设置
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_10;//LED0和LED1对应IO口
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;//普通输出模式
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//推挽输出
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100MHz
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//上拉
  GPIO_Init(GPIOF, &GPIO_InitStructure);//初始化GPIO
	
	GPIO_SetBits(GPIOF,GPIO_Pin_9 | GPIO_Pin_10);//GPIOF9,F10设置高，灯灭
	
	
	
//	//RCC->AHB1ENR|=0x00000020;
//	RCC->AHB1ENR|=1<<5;
//	
//	//PF9
//	//GPIOF->MODER&=0x11133111;
//	GPIOF->MODER&=~(3<<2*9);
//	//GPIOF->MODER|=0x00044000;
//	GPIOF->MODER|=(1<<2*9);
//	
//	GPIOF->OSPEEDR&=~(3<<2*9);
//	GPIOF->OSPEEDR|=(2<<2*9);
//	
//	GPIOF->PUPDR&=~(3<<2*9);
//	GPIOF->PUPDR|=(2<<2*9);
//	
//	GPIOF->OTYPER&=~(1<<9); 
//	
//	GPIOF->ODR|=1<<9;//1
//	//GPIOF->ODR&=~(1<<9);//0
//	
//	//PF10
//	GPIOF->MODER&=~(3<<2*10);
//	GPIOF->MODER|=(1<<2*10);
//	
//	GPIOF->OSPEEDR&=~(3<<2*10);
//	GPIOF->OSPEEDR|=(2<<2*10);
//	
//	GPIOF->PUPDR&=~(3<<2*10);
//	GPIOF->PUPDR|=(2<<2*10);
//	
//	GPIOF->OTYPER&=~(1<<10); 

//	GPIOF->ODR|=1<<10;//1
//	//GPIOF->ODR&=~(1<<10);//0
}






