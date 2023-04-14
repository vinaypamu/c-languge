//4	Write a program  for matrix multiplication.
#include<stdio.h>
int main()
{
#if !(defined r&&defined c)
#error please enter r and c macro values
#endif
	int a[r][c],b[r][c],d[r][c]={0},i,j;
	if(r!=c)
	{
		printf("colomn and row size diff mul not possible \n");
		return 0;
	}
	for(i=0;i<r;i++)
	{
		printf("row%d - mat1 and mat2 values\n",i);
		for(j=0;j<c;j++)
		{
			scanf("%d%d",&a[i][j],&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		int k=i;
		for(j=0;j<c;j++)
		{
			for(k=0;k<c;k++)
			{
					d[i][j]=d[i][j]+(a[i][k]*b[k][j]);
			}	
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
