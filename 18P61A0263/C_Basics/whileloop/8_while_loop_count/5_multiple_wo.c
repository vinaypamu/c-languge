//5) Write a program to multiply two numbers without using * operator
#include<stdio.h>
int main()
{
	int i=1,n,a,s=0;
	scanf("%d%d",&a,&n);
	while(i<=n)
	{
		s+=a;
		i++;
	}
	printf("%d",s);
	return 0;
}

