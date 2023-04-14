/*3	Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and their indexes and print. */
#include<stdio.h>
int main()
{
	int arr[10]={2,6,8,9,1,10,18,7,9,11};
	int i=0,s=0,s1=0,a=0,b=0;
	printf("enter values");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(i==0)
		{
			s=arr[i];
			s1=arr[i];
			a=i;
			b=i;
		}
		else if(s<arr[i])
		{
			s=arr[i];
			a=i;
		}
		else if(s1>arr[i])
		{
			s1=arr[i];
			b=i;
		}
	}
	printf("%d is biggest ans %d is index,%d is smallest and %d is index",s,a,s1,b);
	return 0;
}

