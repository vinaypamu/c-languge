//3) Write a program to read a number n and print the factorial of n.
#include<stdio.h>
int main()
{
	int i=1,n,p=1;
	scanf("%d",&n);
	while(i<=n)
	{
		p*=i;
		i++;
	}
	printf("%d\n",p);
	return 0;
}
