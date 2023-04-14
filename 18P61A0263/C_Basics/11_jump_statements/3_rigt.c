#include<stdio.h>
int main()
{
int 	i=1,j=1,n;
	scanf("%d",&n);
	while(i<=n)
	{
		j=1;
		while(j>0)
		{
			printf("*");
			j++;
			if(j>i)
				break;
		}
		printf("\n");
		i++;
	}
	i=1;
	printf("using do while\n");
	do
	{
		j=1;
		do
		{
			printf("*");
			j++;
			if(j>i)
				break;
		}
		while(j>0);
		printf("\n");
		i++;
	}
	while(i<=n);
	printf("using for loop\n");
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
			printf("*");
		}
		printf("\n");
		if(i>n)
			break;
	}



	return 0;
}

