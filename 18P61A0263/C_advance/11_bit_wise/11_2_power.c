//11. WAP whether a number is a power of 2 or not?
#include<stdio.h>
int main()
{
	int n,p=0;
	printf("enter number \n");
	scanf("%d",&n);
	for(p=0;p<sizeof(n)*8;p++)
	{
	
	if(n&0x1<<p)
		{
			if(n & ~(0x1<<p))
			{
			
				printf("given number is not power of 2\n");
				break;
			}
			else 
			{
			
				printf("given number is power of 2\n");
				break;
			}
		}
	}
	return 0;
}
