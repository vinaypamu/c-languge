//5. WAP implement subtraction functionality with out using SUM('+') Operator.    
#include<stdio.h>
int main()
{
	int a,i=0;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&i);
	printf("%d",a-(~i-(-1)));
	return 0;
}


