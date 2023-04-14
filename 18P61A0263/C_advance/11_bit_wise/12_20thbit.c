//12. WAP Check if the 20th bit of a 32-bit integer is on or off?
#include<stdio.h>
int main()
{
	int n;
	printf("enter number \n");
	scanf("%d",&n);
	if(n&0x1<<20)
		printf("on\n");
	else
		printf("off\n");
	return 0;
}

