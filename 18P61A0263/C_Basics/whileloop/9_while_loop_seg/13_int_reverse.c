//13) Find the reverse of an integer.
#include<stdio.h>
int main()
{
	int n,s=0,a=0;
	scanf("%d",&n);
	while(n)
	{
		s=s*10;
		a=n%10;
		s=s+a;
		n=n/10;
	}
	printf("%d",s);
	return 0;
}
