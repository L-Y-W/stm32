#include "led.h" 
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEK STM32F407������
//LED��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//��������:2014/5/2
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2014-2024
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	 

//��ʼ��PF9��PF10Ϊ�����.��ʹ���������ڵ�ʱ��		    
//LED IO��ʼ��
void LED_Init(void)
{    	 
  GPIO_InitTypeDef  GPIO_InitStructure;

  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);//ʹ��GPIOFʱ��

  //GPIOF9,F10��ʼ������
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_10;//LED0��LED1��ӦIO��
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;//��ͨ���ģʽ
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//�������
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100MHz
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//����
  GPIO_Init(GPIOF, &GPIO_InitStructure);//��ʼ��GPIO
	
	GPIO_SetBits(GPIOF,GPIO_Pin_9 | GPIO_Pin_10);//GPIOF9,F10���øߣ�����
	
	
	
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






