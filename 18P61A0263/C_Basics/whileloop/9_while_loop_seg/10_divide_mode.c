//10) Divide a number with another number and find the quotient without using / operator. Print the remainder without using % operator.
#include<stdio.h>
int main()
{
	int n,i,r=1,q=0;
	scanf("%d%d",&n,&i);
	if(n<0&&i>0)
	{
		n=-n;
		while(i<=n)
		{
			n=n-i;
			q++;
		}
		q=-q;
	}
	else if(n>0&&i>0)
	{
		while(n>=i)
		{
			n=n-i;
			q++;
		}
	}
	else if (n<0&&i<0)
	{
		n=-n;
		i=-i;
		while(i<=n)
		{
			n=n-i;
			q++;
		}
	}
	else if(n>0&&i<0)
	{
	i=-i;
		while(i<=n)
		{
			n=n-i;
			q++;
		}
		q=-q;
	}
	else if (n==0&& i==0)
	{
		n=0;
		q=0;
	}
	printf("%d is remainder and %d is quotient",n,q);
	return 0;
}


