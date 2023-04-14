//1) Write  a program to read n numbers from keyboard and find their sum.
#include<stdio.h>
int main()
{
	int i=1,n,a,s=0;
	scanf("%d",&n);
	while(i<=n)
	{
		int a;
		scanf("%d",&a);
		s=s+a;
		i++;
	}
	printf("%d",s);
	return 0;
}

