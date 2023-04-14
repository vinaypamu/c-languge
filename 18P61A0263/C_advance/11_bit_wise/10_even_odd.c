//10. WAP whether a number is ODD or EVEN using bitwise.
#include<stdio.h>
int main()
{
	int n,p;
	printf("enter number \n");
	scanf("%d",&n);
	if(n&0x1<<0)
		printf("given number is odd\n");
	else 
		printf("given number is even\n");
	return 0;
}
