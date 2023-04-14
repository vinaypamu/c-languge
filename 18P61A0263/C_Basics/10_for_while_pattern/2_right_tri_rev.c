/*  2)using while ,do while and for loops :
     * * * * * *
     * * * * *
     * * * *
     * * *
     * *
     *       */
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	printf("using while loop\n");
	i=n;
	while(i>0)
	{
		j=i;
		while(j>0)
		{
			printf("* ");
			j--;
		}
		printf("\n");
		i--;
	}
	i=n;
	printf("using do while loop\n");
	do
	{
		j=i;
		do
		{
			printf("* ");
			j--;
		}
		while(j>0);
		printf("\n");
		i--;
	}
	while(i>0);
	printf("using for loop\n");
	for(i=n;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
