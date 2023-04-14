#include<stdio.h>
int main()
{
	int n,p;
	printf("enter number and position \n");
	scanf("%d%d",&n,&p);
	printf("set %d\n",n | 0x1<<p);
	printf("clear %d\n",n & ~(0x1<<p));
//	printf("check %d \n",n&0x1<<p);
	printf("toggle %d \n",n ^ 0x1<<p);
	if(n&0x1<<p)
		printf("on\n");
	else 
		printf("off\n");
	return 0;
}
