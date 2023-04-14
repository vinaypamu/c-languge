#include<stdio.h>
int main()
{
	int i=0,j,n,m;
	scanf("%d%d",&n,&m);
	for(;n<=m;n++)
	{
		for(j=2,i=0;j<=(n/2);j++)
		{
			if(n%j==0)
			{
				i=i+1;
			}
		}
		if(i==0)
			printf("%d ",n);
	}
	printf("\n");

	return 0;
}
