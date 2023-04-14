/*2	Write the following program :
 * Declare a character array without size.
 * Initialize the array with characters of your name.
 * Print your name using for loop.*/
#include<stdio.h>
int main()
{
	int i;
	char name[]={'v','i','n','a','y'};
	for(i=0;i<5;i++)
	{
		printf("%c",name[i]);
	}
	return 0;
}
