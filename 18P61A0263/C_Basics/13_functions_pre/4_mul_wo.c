/*4) 
 * Write a function to return the product of two numbers without using * operator.*/
#include<stdio.h>
int mul(int ,int );
int main()
{
	int a,b;
	printf("enter 2 values ");
	scanf("%d%d",&a,&b);
	printf("mul of 2 num %d and %d = %d",a,b,mul(a,b));
	return 0;
}
int mul(int x,int y)
{
	int s=0;
	while(x>0)
	{
		s=s+y;
		x--;
	}
	return s;
}
