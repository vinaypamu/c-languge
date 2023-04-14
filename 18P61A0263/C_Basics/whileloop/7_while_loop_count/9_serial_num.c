/*9) Read two numbers from the user, and print all serial numbers between those numbers.
 *
 * eg., inputs: 10   20
 * output: 10 11 12 13 14 15 16 17 18 19 20*/
#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d%d",&i,&n);
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
	printf("\n");
	return 0;
}
