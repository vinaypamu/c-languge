/*6	Write a function to search for a specific element given by the user, in an array and display its index.  Function takes array and element to search as inputs, and returns the index as output. If element not found, return -1.*/
#include<stdio.h>
int main()
{
	int a;
	int arr[12]={1,3,22,5,2,69,4,10,58,9,2,3};
	printf("enter the match number");
	scanf("%d",&a);
	int match(int arr[],int );
	a=match(arr,a);
	if(a!=-1)
		printf("the match index is %d",a);
	else 
		printf("match not found");
	return 0;
}
int match(int arr[],int i)
{
	int j=0;
	for(j=0;j<12;j++)
	{
		if(arr[j]==i)
			return j;
	}
	return -1;
}


