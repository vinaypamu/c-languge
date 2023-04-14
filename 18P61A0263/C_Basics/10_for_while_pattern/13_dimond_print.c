/*13	           *
 *               * * *
 *             * * * * *
 *           * * * * * * *
 *         * * * * * * * * *
 *           * * * * * * *
 *             * * * * *
 *               * * *
 *                 *			*/
#include<stdio.h>
int main()
{
	int a,n,j,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			for(j=i;j<n;j++)
				printf("  ");
			for(j=(i*2)-1;j>0;j--)
				printf(" *");
			printf("\n");
	}
	n=n-1;
	for(i=n;i>0;i--)
	{
			for(j=n-i+1;j>0;j--)
				printf("  ");
			for(j=((i*2)-1);j>0;j--)
				printf(" *");
			printf("\n");
	}
	return 0;
}
