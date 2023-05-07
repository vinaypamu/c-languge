//RCC_AHB1ENR=0x40023830
//GPIO_MODER=0x40020400
//GPIO_ODR=0x40020414
#define  RCC_AHB1ENR (*((int *)0x40023830))
#define GPIOB_MODER  (*((int *) 0x40020400))
#define GPIOB_ODR (*((int *)0x40020414))

void delay(int x)
{
	int i=0;
	for(i=4000*x;i>0;i--);
	
}

void red(void)
{
	GPIOB_ODR &= ~(0x1<<13); //RED_LED set to on 
		delay(50);
		GPIOB_ODR |= (0x1<<13); //RED_LED set to off
		delay(250);
	GPIOB_ODR &= ~(0x1<<13); //RED_LED set to on 
		delay(50);
		GPIOB_ODR |= (0x1<<13); //RED_LED set to off
		delay(500);
}

void green(void)
{
	GPIOB_ODR &= ~(0x1<<14); //GREEN_LED set to on 
		delay(50);
		GPIOB_ODR |= (0x1<<14); //GREEN_LED set to off
		delay(50);
	GPIOB_ODR &= ~(0x1<<14); //GREEN_LED set to on 
		delay(50);
		GPIOB_ODR |= (0x1<<14); //GREEN_LED set to off
		delay(150);
}

int main()
{
	
	RCC_AHB1ENR |= 0x1<<1; // set clock to 1 for GPIOB
	while(!(RCC_AHB1ENR & 0x02));	//checking for clock set or not
	GPIOB_MODER |= 0x14000000; //set port mode to out put mode 1
	
	while(1)
	{
		green();
		red();
	}
	return 0;
}
