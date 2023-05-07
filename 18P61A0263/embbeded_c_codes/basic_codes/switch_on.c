//RCC_AHB1ENR=0x40023830
//GPIOB_MODER=0x40020400
//GPIOB_ODR=0x40020414
//GPIOC_PUPDR =0x0C + 0x4002 0800=0x4002080c
//GPIOC_IDR= 0x10+0x4002 0800=0x4002 0810
#define  RCC_AHB1ENR (*((int *)0x40023830))
#define GPIOB_MODER  (*((int *) 0x40020400))
#define GPIOB_ODR (*((int *)0x40020414))
#define GPIOC_PUPDR (*((int *)0x4002080c))
#define GPIOC_IDR (*((int *)0x40020810))
void delay(int x)
{
	int i=0;
	for(i=2500*x;i>0;i--);
	
}

int main()
{
	
	RCC_AHB1ENR |= 0x3<<1; // set clock to 1 for GPIOB AND GPIOC for signal enable
	while(!(RCC_AHB1ENR & 0x06));	//checking for clock set or not
	GPIOB_MODER |= 0x04000000; //set port mode to out put mode 01
	GPIOC_PUPDR |=0x00100000;//PUPDR_ENT intial value low seting PUPDR_ENT to high thorugh pull up
	GPIOB_ODR |= (0x1<<13); //RED_LED set to off
	while(1)
	{
		while((GPIOC_IDR & 0x01<<10)); // IDR IS 1 to update 0 loop will break
		
				
			GPIOB_ODR ^= (0x1<<13); //RED_LED set to toggle 
			delay(1000); //1sec delay to update IDR 0 to 1
	}
	return 0;
}
