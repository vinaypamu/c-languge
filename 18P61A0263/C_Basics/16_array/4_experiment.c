/*4	Try experimenting with the below array syntaxes and see the results,check their sizes, try to also read values for elements and print them:</br>
 * int arr[5] = {};
 * int arr[10] = {2.4,5.6,7.3};
 * int arr[3] = {1,2,3,4,5};
 * int arr[0] = {};
 * int arr[0] = {1,2,3,4,5};
 * int arr[] = {};
 * int arr[‘a’];*/
#include<stdio.h>
int main()
{
	int i;
	int arr[5]={};
	printf("size of %lu\n",sizeof(arr));
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	int arr1[10]={2.4,5.6,7.3};
	printf("size of %lu\n",sizeof(arr1));
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr1[i]);
	}
	int arr2[3] = {1,2,3,4,5};
	printf("size of %lu\n",sizeof(arr2));
	for(i=0;i<3;i++)
	{
		printf("%d\n",arr2[i]);
	}
	int arr3[0] = {};
	printf("size of %lu\n",sizeof(arr3));
	for(i=0;i<0;i++)
	{
		printf("%d\n",arr3[i]);
	}
	int arr4[0] = {1,2,3,4,5};
	printf("size of %lu\n",sizeof(arr4));
	for(i=0;i<0;i++)
	{
		printf("%d\n",arr4[i]);
	}
	int arr5[] = {};
	printf("size of %lu\n",sizeof(arr5));
	int arr6['a'];
	printf("size of %lu\n",sizeof(arr6));
	for(i=0;i<'a';i++)
	{
		printf("%d ",arr6[i]);
	}
	return 0;
}

