//3	Write a program  for matrix addition and subtraction.
#include<stdio.h>
int main()
{
#if !(defined r&&defined c)
#error please enter r and c macro values
#endif
	int a[r][c],b[r][c],d[r][c],k[r][c],i,j;
	for(i=0;i<r;i++)
	{
		printf("row%d - mat1 and mat2 values\n",i);
		for(j=0;j<c;j++)
		{
			scanf("%d%d",&a[i][j],&b[i][j]);
			d[i][j]=a[i][j]+b[i][j];
			k[i][j]=a[i][j]-b[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",d[i][j]);
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",k[i][j]);
		printf("\n");
	}
	return 0;
}
