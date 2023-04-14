/*8)Define a  macro, to compute the sum of all elements in an array. It receives array name and the number of elements as arguments.*/
#include<stdio.h>
#define VV(rsp,n) for(i=0;i<n;s=s+rsp[i++]);
int main()
{
	int n,i=0,s=0;
	printf("enter array length\n");
	scanf("%d",&n);
	int R[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&R[i]);
	}
	VV(R,n)
		printf("%d sum of all array elements\n",s);
	return 0;


}
