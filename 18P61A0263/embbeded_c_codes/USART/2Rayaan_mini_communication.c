#define RCC_AHBIENR    (*(int *)0x40023830)
#define GPIOB_MODER    (*(int *)0x40020400)
#define GPIOB_ODR      (*(int *)0x40020414)
#define GPIOC_PUPDR    (*(int *)0x4002080c)
#define GPIOC_IDR      (*(int *)0x40020810)
#define GPIOC_MODER    (*(int *)0x40020800)
#define SYSCFG_EXTICR3 (*(int *)0x40013810)
#define RCC_APB2ENR    (*(int *)0x40023844)
#define EXTI_IMR       (*(int *)0x40013C00)
#define EXTI_FTSR   	 (*(int *)0x40013C0C)
#define EXTI_PR   		 (*(int *)0x40013C14)
#define RCC_APB2ENR    (*(int *)0x40023844)
#define GPIOA_MODER    (*(int *)0x40020000)
#define GPIOA_AFRH     (*(int *)0x40020024)
#define UART_BRR       (*(int *)0x40011008)
#define UART_CR1       (*(int *)0x4001100C)
#define UART_CR2       (*(int *)0x40011010)
#define UART_DR        (*(int *)0x40011004)
#define UART_SR        (*(int *)0x40011000)
#define NVIC_ISER1 		 (*(int *)0xE000E104)
#define  RCC_AHB1ENR (*((int *)0x40023830))

char R='R',G='G';
int a=0;
void delay(int x)
{
	int i=0;
	for(i=4000*x;i>0;i--);
	
}

int main()
{
	RCC_AHB1ENR |= 0x7<<0; // set clock to 1 for GPIOB AND GPIOC for signal enable
	while(!((RCC_AHB1ENR & 0x07)==7));	//checking for clock set or not
RCC_APB2ENR |= 0x10;
while(!(RCC_APB2ENR & 0x1<<4));
GPIOA_MODER |= 0x280000;
GPIOA_AFRH |= 0x770;
UART_BRR |= 0x683;
UART_CR1 |= 0x200C;
UART_CR1 |= 0x1<<5;
UART_CR2 |= 0x0000;
//NVIC_ISER1 |=0x1<<5;
	GPIOB_MODER |= 0x14000000; //set port mode to out put mode 01
	GPIOC_MODER &= ~0x0f<<16; //set port mode to in put mode 00
	GPIOC_PUPDR |=0x5<<16;//PUPDR_UP  anf PUPDR_DR intial value low seting to high thorugh pull up
	GPIOB_ODR |= (0x3<<13); //RED_LED  and GREEN_LED set to off
	
while(1)
{
	if((UART_SR & 0x1<<5) && UART_DR == 0x0052)
	{
		GPIOB_ODR ^= (0x1<<13);
			delay(500);
	}
	if((UART_SR & 0x1<<5) && UART_DR == 0x0047)
	{
		GPIOB_ODR ^= (0x1<<14);
		a++;
					delay(500);
	}
	if(!(GPIOC_IDR & 0x1<<8))
	{
			
		UART_DR = R;
		delay(1000);
	
	}
	if(!(GPIOC_IDR & 0x1<<9))
	{
		
		UART_DR = G;
		delay(1000);
		
	}

}
return 0;
}
