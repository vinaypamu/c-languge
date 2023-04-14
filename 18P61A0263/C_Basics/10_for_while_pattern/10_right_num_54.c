/*8	
 * 5
 * 5 4
 * 5 4 3
 * 5 4 3 2
 * 5 4 3 2 1*/
#include<stdio.h>
int main()
{
	int n,i,j,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n,a=1;a<=i;a++,j--)
			printf("%d ",j);
		printf("\n");
	}
	return 0;
}

