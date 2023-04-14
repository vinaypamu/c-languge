#include<stdio.h>
int main()
{
	int a,b,s=0;
	scanf("%d",&a);
	while(a>0)
	{
		scanf("%d",&b);
		if(b>=0)
			s=s+b;
		if(b<0)
			break;
		a--;
		}
	printf("sum of n numbers %d\n",s);
	return 0;
}

