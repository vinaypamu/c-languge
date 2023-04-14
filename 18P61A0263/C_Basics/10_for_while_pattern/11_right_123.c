/*11)	
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10 
 * 11 12 13 14 15*/
#include<stdio.h>
int main()
{
	int n,i,j,a;
	scanf("%d",&n);
	j=1;
	for(i=1;i<=n;i++)
	{
		for(a=1;a<=i;a++,j++)
			printf("%d ",j);
		printf("\n");
	}
	return 0;
}

