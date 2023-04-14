//12) Find the sum of digits in a given integer.
#include<stdio.h>
int main()
{
int n,s=0,a=0;
	scanf("%d",&n);
	while(n)
	{
		a=n%10;
		s=s+a;
		n=n/10;
	}
	printf("%d sum of digits in a given number",s);
	return 0;
}
		
