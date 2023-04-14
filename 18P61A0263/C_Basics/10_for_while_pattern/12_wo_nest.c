/*12	without using nested loops :
 *
 * *
 * * *
 * * * *
 * * * * *
 * * * * * *  */
#include<stdio.h>
int main()
{
	int i=1,n,j=0;
	scanf("%d",&n);
	if(n<=0)
		j++;
	while(i>j)
	{
		printf("* ");
		j++;
		if(j==n)
			j++;
		else if(i==j)
		{
			i++;
			j=0;
			printf("\n");
		}
	}
	printf("\n");
		return 0;
	}

