/* write a program to print if a given number is not prime whenever the first factor is found ,and printprime when no factor is found (excluding 1 and the number ,while couting factors)*/
#include<stdio.h>
int main()
{
	int i=2,n,j=0;
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			j=j+1;
			printf("%d is not prime and count %d ",n,j);
			i=n+1;
		}
		i++;
	}
	if(j==0)
		printf("%d prime number and count %d",n,j);
	return 0;
}

