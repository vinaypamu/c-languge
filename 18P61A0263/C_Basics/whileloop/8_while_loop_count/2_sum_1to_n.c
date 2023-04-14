//2) write a program to read a number n, and print sum of all the numbers from 1 to n.
#include<stdio.h>
int main()
{
	int i=1,n,s=0;
	scanf("%d",&n);
	while(i<=n)
	{
		s+=i;
		i++;
	}
	printf("%d",s);
	return 0;
}
