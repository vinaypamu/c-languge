/*9)Declare an integer array of size 10 and initialize it to some values. Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.*/
#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int *b,i;
	for(i=0;i<10;i++)
	{
		b=&a[i];
		printf("%p ",b);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		b=&a[i];
		printf("%d\t",*b);
	}
	return 0;
}
