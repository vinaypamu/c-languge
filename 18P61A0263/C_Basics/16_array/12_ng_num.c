/*12 Write a function to modify the array such that all negative numbers are converted to positive.
 * */
#include<stdio.h>
int main()
{
	int n,j,i;
	printf("enter array size\n");
	scanf("%d",&n);
	int ng[n];
	int ngn(int n);
	printf("enter postive and negitive numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		if(j<0)
		{
			j=ngn(j);
		}
		ng[i]=j;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",ng[i]);
	}
	printf("\n");
	return 0;
}
int ngn(int j)
{
	j=-j;
	return j;
}

