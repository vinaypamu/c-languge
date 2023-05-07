//RCC_AHB1ENR=0x40023830
//RCC_AHB2ENR=0x40023800+0x44=0x40023844
//GPIOB_MODER=0x40020400
//GPIOB_ODR=0x40020414
//GPIOC_PUPDR =0x0C + 0x4002 0800=0x4002080c
//GPIOC_IDR= 0x10+0x4002 0800=0x4002 0810
//GPIOC_MODER=0x00+0x4002 0800=0x40020800
// SYSCFG_EXTICR =0X40013800+0X10=0X40013810
//EXTI_IMR=0x400134C00+0X00=0x40013C00
//EXTI_FTSR=0x400134C00+0X0C=0x40013C0C
//EXTI_FTSR=0x400134C00+0X14=0x40013C14
//NVIC_ISER1= 0xE000E100+0X100+0X04*(1=X)=0XE000E104
#define NVIC_ISER1 			(*((int *)0xE000E100))
#define RCC_AHB1ENR 		(*((int *)0x40023830))
#define RCC_APB2ENR 		(*((int *)0x40023844))
#define SYSCFG_EXTICR3 	(*((int *)0x40013810))
#define EXTI_FTSR 			(*((int *)0x40013C0C))
#define EXTI_IMR 				(*((int *)0x40013C00))
#define EXTI_PR 				(*((int *)0x40013C14))
#define GPIOB_MODER 		(*((int *)0x40020400))
#define GPIOC_MODER  		(*((int *)0x40020800))
#define GPIOB_ODR 			(*((int *)0x40020414))
#define GPIOC_PUPDR 		(*((int *)0x4002080c))
#define GPIOC_IDR 			(*((int *)0x40020810))
void delay(int x)
{
	int i=0;
	for(i=4000*x;i>0;i--);
	
}

void EXTI9_5_IRQHandler(void)
{
	if((EXTI_PR & 0x100))
	{
		GPIOB_ODR &= ~(0x1<<13);
		//delay(5000);
	}
	if((EXTI_PR & 0x200))
	{
		GPIOB_ODR &= ~(0x1<<14);
	//	delay(5000);
	}
	delay(50);
	EXTI_PR|=0X40;
}

void SWITCH_EN_INIT(void)
{
	RCC_APB2ENR |= 0x00004000;// set clock to 1  for System configuration controller clock enable
	SYSCFG_EXTICR3 |=0x00000022;// select the source input for the EXTI9 and EXTI8 external so seting 2nd and 1st  4 bits with 0010 so pc 10 is an interrupt source  
	EXTI_IMR |=0x00000300;//Interrupt request from line 8 and 9 is not masked
	EXTI_FTSR|=0x00000300;//Falling trigger event configuration bit of line 10 and bit 10 is set mean falling trigger enabled (for Event and Interrupt) for input line 10
	NVIC_ISER1|=0X00800000;//here 23th position mean 23 bit is setting 
}



int main()
{
	
	RCC_AHB1ENR |= 0x3<<1; // set clock to 1 for GPIOB AND GPIOC for signal enable
	while(!((RCC_AHB1ENR & 0x06)==6));	//checking for clock set or not
	GPIOB_MODER |= 0x05<<26; //set port mode to out put mode 01
	GPIOC_MODER &= ~0x0f<<16; //set port 8 and 9 mode to in put mode 0000
	GPIOC_PUPDR |=0x00050000;//PUPDR_ENT intial value low seting to high thorugh pull up
	GPIOB_ODR |= (0x3<<13); //RED AND GREEN_LED  set to off
	SWITCH_EN_INIT();
	while(1)
	{
			if((GPIOC_IDR & 0x01<<8)) // pressing og button is stoped IDR updated to 0 to 1 
			{
				GPIOB_ODR |= (0x1<<13);	//RED_LED set to off
			}
				if((GPIOC_IDR & 0x01<<9)) // pressing og button is stoped IDR updated to 0 to 1 
			{
				GPIOB_ODR |= (0x1<<14);	//GREEN_LED set to off
			}
			
	}
	return 0;
}
