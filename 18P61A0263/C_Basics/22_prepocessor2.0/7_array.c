/*7)Define  a macro that receives an array and the number of elements in the array as arguments. Write a program using this macro to print out the elements of an array.*/
#include<stdio.h>
#define VV(rsp,n) for(i=0;(i<n);i++) printf("%d ",rsp[i]);
int main()
{
	int n,i=0;
	printf("enter array length\n");
	scanf("%d",&n);
	int R[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&R[i]);
	}
	VV(R,n)
	return 0;


}
