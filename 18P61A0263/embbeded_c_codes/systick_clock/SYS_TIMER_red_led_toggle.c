//RCC_AHB1ENR=0x40023830
//GPIO_MODER=0x40020400
//GPIO_ODR=0x40020414
// STK_CTRL=0xE000E010+0x00=0xE000E010
// STK_LOAD=0xE000E010+0x04=0xE000E014
// STK_VAL=0xE000E010+0x08=0xE000E018
// STK_CALIB=0xE000E010+0x0C=0xE000E01C
#define  RCC_AHB1ENR (*((int *)0x40023830))
#define GPIOB_MODER  (*((int *) 0x40020400))
#define GPIOB_ODR (*((int *)0x40020414))
#define STK_CTRL (*(int*)0xE000E010)
#define STK_LOAD (*(int*)0xE000E014)
#define STK_VAL (*(int*)0xE000E018)


int main()
{
	
	RCC_AHB1ENR |= 0x1<<1; // set clock to 1 for GPIOB
	while(!(RCC_AHB1ENR & 0x02));	//checking for clock set or not
	GPIOB_MODER |= 0x04000000; //set port mode to out put mode 1
	GPIOB_ODR |= (0x1<<13); //RED_LED set to off
	STK_CTRL = 0x5;
	STK_VAL=0x1;
	STK_LOAD=16000000;
	while(1)
	{
		GPIOB_ODR ^= (0x1<<13); //RED_LED set to toggle
		while(!(STK_CTRL & 0x1<<16));
	}
	return 0;
}
