/*1	Declare a two-dimensional array of elements for sales details of a store, for each item, for each sales man. Take the sales values as input and print the array in matrix form.
 * Find out and print the following :
 * 1 ) Total sales by each sales man
 * 2 ) Total sales for a item
 * 3 ) Total sales*/
#include<stdio.h>
int main()
{
#if !(defined r &&defined c)
#error macro is not defined pls defind r and c the macros.
#endif

	int a[r][c],i,j,tses[r]={0},tsei[c]={0},k=0;
	for(i=0;i<r;i++)
	{
		printf("%d row values\n",i+1);
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			tses[i]=tses[i]+a[i][j];
			tsei[j]=tsei[j]+a[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		printf("slaes%d-%d ",i,tses[i]);
		k=k+tses[i];
	}
	printf("\n");
	for(i=0;i<c;i++)
		printf("itam%d-%d ",i,tsei[i]);
	printf("\n");
	printf("total sales %d\n",k);
	return 0;

}
