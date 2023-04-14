//6) Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.
#include<stdio.h>
int main()
{
	int a1[2],i;
	printf("enter 2 elements");
	for(i=0;i<2;i++)
		scanf("%d",&a1[i]);
	void swp(int a[0],int a1[1]);
	swp(&a1[0],&a1[1]);
	printf("%d %d \n",a1[0],a1[1]);
	return 0;
}
