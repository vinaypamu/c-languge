/*7	Write a program to print an array in reverse order.*/
#include<stdio.h>
int main()
{
	int i,a[6]={1,2,3,4,5,6};
	for(i=6;i>0;i--)
	{
		printf("%d ",a[i-1]);
	}
	return 0;
}
