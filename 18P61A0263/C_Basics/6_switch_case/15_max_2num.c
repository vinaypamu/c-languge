#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	switch(a>b)
	{
		case 1:
			printf("%d is a big one",a);
			break;
		default:
			printf("%d is a big one",b);
	}
	return 0;
}
