/*10	Write a program to swap two arrays in reverse order.
 * eg.,
 * input : array1 = {1,2,3,4,5};
 * array2 = {6,7,8,9,10};
 *
 *
 * output:
 *
 * array1 : {10,9,8,7,6}
 * array2: { 5,4,3,2,1}
 * */
#include<stdio.h>
int main()
{
	int v[5]={1,2,3,4,5};
	int vv[5]={6,7,8,9,10};
	int i,j;
	printf("\nv: ");
	for(i=0,j=4;i<5;i++,j--)
	{
		int m;
		m=v[i];
		v[i]=vv[j];
		vv[j]=m;
		printf("%d ",v[i]);
	}
	printf("\nvv: ");
	for(i=0;i<5;i++)
		printf("%d ",vv[i]);
	printf("\n");
	return 0;
}

