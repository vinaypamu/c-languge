/*14) Write a program to print all prime numbers between 2 given integers.
 *
 * eg., input: 10 20
 * prime numbers between 10 & 20 are: 11 13 17 19*/

#include<stdio.h>
int main()
{
	int i,j,n,g;
	scanf("%d%d",&n,&i);
	printf("prime numbers between %d and %d are:",n,i);
	for(;n<=i;n++)
	{
		for(j=1,g=0;j<=n;j++)
		{
			if(n%j==0)
				g++;
		}
		if(g<=2)
		printf("%d ",n);
	}
	
	return 0;
}

