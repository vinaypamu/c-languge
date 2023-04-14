//2. WAP print binary?
#include<stdio.h>
int main()
{
	int a,i=0;
	printf("enter a number\n");
	scanf("%d",&a);
	for(i=0;a>>i;i++);
	for(i--;i>=0;i--)
	{
		if(a& 0x1<<i)
			printf("1");
		else
			printf("0");
	}
	return 0;
}
