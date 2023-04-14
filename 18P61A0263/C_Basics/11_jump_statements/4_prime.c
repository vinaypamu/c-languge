#include<stdio.h>
int main()
{
	int n,j=0,i;
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			j++;
		}
		if(j==2)
			break;
	}
	if(j==1)
		printf("%d is prime number",n);
	else
		printf("%d is not prime numeber",n);
	return 0;
}
