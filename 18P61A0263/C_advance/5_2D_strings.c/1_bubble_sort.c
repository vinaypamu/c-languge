//1) Implement bubble sort function and sort an array of integers in ascending order.
#include<stdio.h>
#if !(defined SIZE)
#error please enter SIZE macro values
#else
int main()
{
	int a[SIZE],i,j,t;
	printf("enter array elements\n");
	for(i=0;i<SIZE;i++)
	{
			scanf("%d",&a[i]);
	}
	for(i=0;i<SIZE-1;i++)
	{
		int m=0;
		for(j=0;j<SIZE-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				m++;
			}	
		}
		if(m==0)
			break;
	}
	for(i=0;i<SIZE;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
#endif
