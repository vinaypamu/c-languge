#include<stdio.h>
int main()
{
	int a,b;
	printf("please enter number of counters");
	scanf("%d",&a);
	while(a>0)
	{
		printf("enter +ve number \n");
		scanf("%d",&b);
		if(b<0)
		{
			printf("please enter +ve int\n ");
			continue;
		}
		a--;
	}
	return 0;
}

