//6. WAP implement XOR functionality with out using XOR(^) operator.
#include<stdio.h>
int main()
{
	int a,i=0;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&i);
	printf("%d",(~a&i)+(~i&a));
	return 0;
}
