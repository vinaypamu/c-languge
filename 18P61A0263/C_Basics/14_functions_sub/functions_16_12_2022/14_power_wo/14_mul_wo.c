/*4) 
 * Write a function to return the product of two numbers without using * operator.*/
#include"head.h"
int main()
{
	int a,b;
	printf("enter 2 values ");
	scanf("%d%d",&a,&b);
	printf("mul of 2 num %d and %d = %d",a,b,mul(a,b));
	return 0;
}

