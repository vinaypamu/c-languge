//4. WAP implement subtraction functionality with out using SUB('-') Operator.    
#include<stdio.h>
int main()
{
	int a,i=0;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&i);
	printf("%d",(~i+1)+a);
	return 0;
}


