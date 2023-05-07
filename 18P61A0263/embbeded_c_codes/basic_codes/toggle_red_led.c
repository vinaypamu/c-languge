//RCC_AHB1ENR=0x40023830
//GPIO_MODER=0x40020400
//GPIO_ODR=0x40020414
#define  RCC_AHB1ENR (*((int *)0x40023830))
#define GPIOB_MODER  (*((int *) 0x40020400))
#define GPIOB_ODR (*((int *)0x40020414))

void delay(int x)
{
	int i=0;
	for(i=2500*x;i>0;i--);
	
}

int main()
{
	
	RCC_AHB1ENR |= 0x1<<1; // set clock to 1 for GPIOB
	while(!(RCC_AHB1ENR & 0x02));	//checking for clock set or not
	GPIOB_MODER |= 0x04000000; //set port mode to out put mode 1
	while(1)
	{
		GPIOB_ODR &= ~(0x1<<13); //RED_LED set to on 
		delay(50);
		GPIOB_ODR |= (0x1<<13); //RED_LED set to off
		delay(1300);
	}
	return 0;
}