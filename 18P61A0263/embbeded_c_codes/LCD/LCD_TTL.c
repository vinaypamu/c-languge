#define  RCC_AHB1ENR 	(*((int *)0x40023830))
#define GPIOB_MODER  	(*((int *) 0x40020400))
#define GPIOB_ODR     (*((int *)0x40020414))
#define GPIOB_IDR     (*((int *)0x40020410))
#define RCC_APB2ENR    (*(int *)0x40023844)
#define GPIOA_MODER    (*(int *)0x40020000)
#define GPIOA_AFRH     (*(int *)0x40020024)
#define UART_BRR       (*(int *)0x40011008)
#define UART_CR1       (*(int *)0x4001100C)
#define UART_CR2       (*(int *)0x40011010)
#define UART_DR        (*(int *)0x40011004)
#define UART_SR        (*(int *)0x40011000)
	char G=0;
void delay(int x)
{
	unsigned int i=0;
	while(x--)
		for(i=4000;i>0;i--);
	
}

void write_high_nibble(unsigned char a)
{
	int i=0;
	char c=a>>4;
	for(;i<4;i++)
	{
				if(c&0x1<<i)
				{
					GPIOB_ODR |= 0x1<<i;
				}
				else
				{
					GPIOB_ODR &= ~(0x1<<i);
				}
		}
	GPIOB_ODR|=0x1<<8;
	delay(10);
	GPIOB_ODR&=~(0x1<<8);
	GPIOB_ODR&=(~(0xf)<<0);
	}

void write_lower_nibble(unsigned char a)
{
	int i=0;
	for(;i<4;i++)
	{
				if(a&0x1<<i)
				{
					GPIOB_ODR |= 0x1<<i;
				}
				else
				{
					GPIOB_ODR &= ~(0x1<<i);
				}
		}
	GPIOB_ODR|=0x1<<8;
	delay(10);
	GPIOB_ODR&=~(0x1<<8);
		GPIOB_ODR&=(~(0xf)<<0);
}

void KM_LCD_write_cmd(unsigned char a)
{
	GPIOB_ODR &= ~0x1<<4;
	write_high_nibble(a);
	write_lower_nibble(a);
}

void KM_LCD_write_DATA(unsigned char a)
{
	GPIOB_ODR |= 0x1<<4;
	write_high_nibble(a);
	write_lower_nibble(a);
}

void LCD_write_str(char * a)
{
	int i=0;
	static int j=0;
	while(a[i])
	{
		
	KM_LCD_write_DATA(a[i]);
		i++;j++;
		if(j==16)
		{
			KM_LCD_write_cmd(0xc0);
		}
		if(j==32||a[i-1]=='c')
		{
			delay(1000);
			KM_LCD_write_cmd(0x01);
			KM_LCD_write_cmd(0x80);
			j=0;
		}
	}
}
	
void KM_LCD_INIT()
{
	delay(20);
	KM_LCD_write_cmd(0x33);
	delay(1);
	KM_LCD_write_cmd(0x32);
	KM_LCD_write_cmd(0x0c);
	KM_LCD_write_cmd(0x01);
}
int main()
{
	RCC_AHB1ENR |=0x3<<0;
	while(!((RCC_AHB1ENR & 0x3<<0)==3))
	{};
		RCC_APB2ENR |= 0x10;
while(!(RCC_APB2ENR & 0x1<<4))
{};
	GPIOB_MODER &=0x0<<0;
	GPIOB_MODER |=0x55<<0;
	GPIOB_MODER |=0x1<<8;
	GPIOB_MODER |=0x1<<10;
	GPIOB_MODER |=0x1<<16;
	GPIOB_ODR &=0x0<<0;
GPIOA_MODER |= 0x280000;
GPIOA_AFRH |= 0x770;
UART_BRR |= 0x683;
UART_CR1 |= 0x200C;
UART_CR2 |= 0x0000;
	KM_LCD_INIT();
	while(1)
	{
	if((UART_SR & 0x1<<5))
	{
		G=UART_DR;
		LCD_write_str(&G);
			delay(500);
	}
}
	return 0;
	
}
