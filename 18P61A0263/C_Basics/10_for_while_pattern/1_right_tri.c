/*1)using while ,do while and for loops :
 *
 * *
 * * *
 * * * *
 * * * * *
 * * * * * *      */
#include<stdio.h>
int main()
{
	int i=1,n,j;
	scanf("%d",&n);
	printf("using while\n");
	while(i<=n)
	{
		int j=1;
		while (j<=i)
		{
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
	printf("using do while\n");
	i=1;
	do
	{
		j=1;
		do
		{
			printf("* ");
			j++;
		}
		while(j<=i);
	i++;	printf("\n");
	}
	while(i<=n);
	printf("using for loop\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}

