#define ADC_SR         (*(int *)0x40012000)
#define ADC_SMPR1      (*(int *)0x4001200C)
#define ADC_SQR3       (*(int *)0x40012034)
#define ADC_CR1        (*(int *)0x40012004)
#define ADC_CR2        (*(int *)0x40012008)
#define ADC_DR         (*(int *)0x4001204C)
#define RCC_AHBIENR    (*(int *)0x40023830)
#define GPIOC_MODER    (*(int *)0x40020800)
#define SYSCFG_EXTICR3 (*(int *)0x40013810)
#define EXTI_IMR       (*(int *)0x40013C00)
#define EXTI_FTSR   (*(int *)0x40013C0C)
#define EXTI_PR   (*(int *)0x40013C14)
#define RCC_APB2ENR    (*(int *)0x40023844)
#define NVIC_ISER1     (*(int *)0xE000E104)

void delay(int a)
{
int b=0;
for(b=4000*a;b;b--);
}

int VAL;

int main()
{
RCC_AHBIENR |= 0x4;
while(!(RCC_AHBIENR & 0x4));
RCC_APB2ENR |= 0x100;
while(!(RCC_APB2ENR & 0x100));
GPIOC_MODER |= 0x3;
ADC_SMPR1 |= 0x7;
ADC_SQR3 |= 0xA;
ADC_CR1 &= ~(0x3<<24);
ADC_CR2 |= 0x0401;
while(1)
{
ADC_CR2 |= 0x1<<30;
while(!(ADC_SR & 0x2));
VAL = ADC_DR;
VAL/=10;
ADC_CR2 &= ~(0x1<<30);
delay(500);
}
}
