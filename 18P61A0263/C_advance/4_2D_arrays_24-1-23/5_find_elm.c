/*5	Search for an element in a two dimentional array, and print its position - as row and column numbers. write a search function that will receive the array and return row and column indexes as output.*/ 
#include<stdio.h>
int main()
{
	int a[r][c],i,j;
	for(i=0;i<r;i++)
	{
		printf("%d row values\n",i+1);
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter match element\n");
	scanf("%d",&i);
	int match(int a[r][c],int *,int *,int);
	if(match(a,&i,&j,i))
		printf("%d-%d is the index of match\n",i,j);
	else
		printf("match is not found\n");
return 0;
}
int match(int a[r][c],int *i,int *j,int p)
{
	*i=0,*j=0;
	for(;(*i)<r;(*i)++)
	{
		for(*j=0;(*j)<c;(*j)++)
		{
			if(p==a[(*i)][(*j)])
				return 1;
		}

	}
	return 0;
}
