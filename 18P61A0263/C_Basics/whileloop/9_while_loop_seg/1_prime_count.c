/* write a progarm to print if a given number is prime or not based on number of factors counting*/
#include<stdio.h>
int main()
{
	int i=1,n,j=0;
	scanf("%d",&n);
	while(i<=n)
	{
	 if((n%i==0))
		{
			j++;
		}
		i++;
	}
	if(j==2)
		printf("%d is prime number and count %d \n",n,j);
	else
		printf("%d is not prime number and count %d",n,j);
	return 0;
}


