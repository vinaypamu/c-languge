//RCC_AHB1ENR=0x40023800+0x30=0x40023830
//GPIO_MODER=0x40020000+0x00=0x40020000
//GPIO_ODR=0x40020414
//GPIOA_AFRH =0x40020000+0x24=0x40020024
//RCC_APB2ENR=0x40023800+0x44=0x40023844
//USART_CR1=0x4001 1000+0x0c=0x4001100c
//USART_BRR=0x4001 1000+0x08=0x40011008
//USART_CR2=0x4001 1000+0x10=0x40011010
//USART_DR=0x4001 1000+0x04=0x40011004
//USART_SR=0x4001 1000+0x00=0x40011000
#define  RCC_AHB1ENR (*((int *)0x40023830))
#define GPIOA_MODER  (*((int *) 0x40020000))
#define GPIOA_AFRH  (*((int *) 0x40020024))
//#define GPIOB_ODR (*((int *)0x40020414))
#define RCC_APB2ENR (*((int *)0x40023844))
#define USART_CR1 (*((int *)0x4001100c))
#define USART_BRR (*((int *)0x40011008))
#define USART_CR2 (*((int *)0x40011010))
#define USART_DR (*((int *)0x40011004))
#define USART_SR (*((int *)0x40011000))
char a;
int main()
{
	RCC_AHB1ENR |= 0x1<<0; // set clock to 1 for GPIOB
	while(!(RCC_AHB1ENR & 0x01));	//checking for clock set or not
	GPIOA_MODER |= 0x5<<19; //set port mode TO altarnat functionality mode 10 and 9 pins.
	GPIOA_AFRH |=0x7<<4;//pin 9 set to UART mode
	GPIOA_AFRH |=0x7<<8;//pin 10 set to UART mode
	RCC_APB2ENR |=0x5<<1;//set clock to 1 for UART
	USART_CR1 |=0x3<<2;//enble TE and RE
	USART_CR1 |=0x1<<13;//enble UE 
	USART_BRR=0x683;//TE AND RE bits per sec.
	USART_CR2 &=0x0<<12;// 1 bit stop
	while(!(RCC_APB2ENR & 0x5<<1));
	while(1)
	{
		if(USART_SR & 0x1<<7)
		{
			USART_DR='A';
		}
		if(USART_SR & 0x1<<5)
		{
			a=USART_DR;
		}
	}
	return 0;
}
