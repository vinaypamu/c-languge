#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=(a>b)?a:b;
	printf("%d is big",a);
	return 0;
}
