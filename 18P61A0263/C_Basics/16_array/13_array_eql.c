/*13) write a function to take 2 arrays as input and return 1 if they are equal and 0 if they are not equal ( sizes to be sent as seperate arguments)*/
#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter sizes of array");
	scanf("%d%d",&a,&b);
	if(a!=b)
	{
		printf("arrays are not equal");
		return 0;
	}
	int arr[a];
	int arr1[b];
	printf("enter array values\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nenter array2 values\n");
	for(i=0;i<b;i++)
		scanf("%d",&arr1[i]);
	int fun(int arr[],int arr1[],int n);
	if(a==b)
	{
		if(fun(arr,arr1,a))
			printf("both arrays are equal");
		else
			printf("arrays are not equall");
	}
	else
		printf("arrays are not equall");
	return 0;
}
int fun(int arr[],int arr1[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]!=arr1[i])
			return 0;
	}
	return 1;
}
