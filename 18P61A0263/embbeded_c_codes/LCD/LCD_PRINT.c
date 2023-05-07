#define  RCC_AHB1ENR 	(*((int *)0x40023830))
#define GPIOB_MODER  	(*((int *) 0x40020400))
#define STK_CTRL 			(*(int*)0xE000E010)
#define STK_LOAD 			(*(int*)0xE000E014)
#define STK_VAL 			(*(int*)0xE000E018)
#define GPIOB_ODR     (*((int *)0x40020414))
#define GPIOB_IDR     (*((int *)0x40020410))

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
	//GPIOB_ODR |= 0x1<<4;
	while(a[i])
	{
	KM_LCD_write_DATA(a[i]);
		i++;
		if(i==16)
		{
			KM_LCD_write_cmd(0xc0);
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
	RCC_AHB1ENR |=0x1<<1;
	while(!(RCC_AHB1ENR & 0x1<<1));
	GPIOB_MODER &=0x0<<0;
	GPIOB_MODER |=0x55<<0;
	GPIOB_MODER |=0x1<<8;
	GPIOB_MODER |=0x1<<10;
	GPIOB_MODER |=0x1<<16;
	GPIOB_ODR &=0x0<<0;
	/*STK_CTRL = 0x5;
	STK_VAL=0x1;
	STK_LOAD=1600000;*/
	KM_LCD_INIT();
	LCD_write_str("==>VINAY PAMU<====>VINAY VINNY<==");
	
	return 0;
	
}

void VV_MS(int a)
{
	STK_LOAD=a*16000;
	return ;
}
