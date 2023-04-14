/*4) Write a program to print the value of below series:

1 - 1/2 + 1/3 - 1/4 .... + 1/n etc*/

#include<stdio.h>
int main()
{
	int i=1,n;
	float x,s=0;
	scanf("%d",&n);
	while(i<=n)
	{
		if(i==1)
			x=i;
		else if(i>1)
		{
			if(i%2==0)
				x=-((float)1/i);
			else
				x=+((float)1/i);
		}
		s+=x;
		i++;
	}
	printf("%f",s);
	return 0;
}

