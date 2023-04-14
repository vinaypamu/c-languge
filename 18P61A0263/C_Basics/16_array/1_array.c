/*1	Write the following program :
 * Declare an integer array of size 100.
 * Assign numbers 1-100 to each element of the array.
 * Print all the numbers.
 * Print all even elements.
 * Print all odd elements.
 * Add 5 to each element and print 6 – 105 numbers.*/
#include<stdio.h>
int main()
{
	int i,j;
	int vv[100]={0,};
	for(i=0;i<100;i++)
	{
		vv[i]=i+1;
		printf("%d ",vv[i]);
	}
	printf("\nodd numbers\n");
	for(i=0;i<100;i=i+2)
		printf("%d ",vv[i]);
	printf("\neven numbers\n");
	for(i=1;i<100;i+=2)
		printf("%d ",vv[i]);
	printf("\nadding 5\n");
	for(i=0,j=6;i<100;i++,j++)
		printf("%d ",vv[i]+5);
	return 0;
}




