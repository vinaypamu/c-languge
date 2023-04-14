/*14) Print Fibonacci series upto n terms.

Fibonacci series : 1 1 2 3 5 8 13....etc*/
#include<stdio.h>
int main()
{
	int a=0,b=1,c=0,n,i=1,d;
	scanf("%d",&n);
	while(i<=n)
	{
		a=b;
		b=c;
		c=a+b;
		printf("%d ",c);
		i++;

	}
}
