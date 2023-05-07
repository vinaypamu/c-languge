//RCC_AHB1ENR=0x40023830
//GPIO_MODER=0x40020400
//GPIO_ODR=0x40020414
#define  RCC_AHB1ENR (*((int *)0x40023830))
#define GPIOB_MODER  (*((int *) 0x40020400))
#define GPIOB_IDR (*((int *)0x40020410))
#define GPIOB_PUPDR (*((int *)0x4002040C))
void delay(void)
{
	int i=0,j=1000;
	while(j--)
	for(i=4000;i>0;i--);
	
}

int main()
{
	
	RCC_AHB1ENR |= 0x1<<1; // set clock to 1 for GPIOB
	while(!(RCC_AHB1ENR & 0x02));	//checking for clock set or not
	GPIOB_MODER &= 0x00000000; //set port mode to out put mode 1
	while(1)
	{
	//	if(GPIOB_IDR & (0x1<<13)) //RED_LED set to on 
		{
		GPIOB_PUPDR &= 0x00000000;
			GPIOB_PUPDR |= 0x1<<27;
	//GPIOB_PUPDR |= 0x1<<26;
		}
	//	else 
		{
			delay();
			GPIOB_PUPDR |= 0x1<<26;
		//		GPIOB_PUPDR &= 0x00000000;
		}
	delay();
	/*	GPIOB_IDR |= (0x1<<13); //RED_LED set to off
		delay();*/
	}
	return 0;
}