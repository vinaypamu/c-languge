//6)Declare a two dimensional array of characters, read names from the user and print them back with each individual character format (%c) in a loop.
#include<stdio.h>
int main()
{
#if !(defined r&&defined c)
#error please enter r and c macro values
#endif
	char a[r][c];
	int i,j;
	for(i=0;i<r;i++)
	{
		printf("name -%d\n",i);
			scanf(" %49[^\n]s",a[i]);
	}
	for(i=0;i<r;i++)
	{
		for(j=0;a[i][j];j++)
			printf("%c ",a[i][j]);
		printf("\n");
	}
	return 0;
}
