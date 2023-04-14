#include<stdio.h>
float series(int );
int fact(int );
int main()
{
	int n;
	printf("enter term number");
	scanf("%d",&n);
	printf("%f",series(n));
	return 0;
}
float series(int n)
{
	int i,a;
	float s=0;
	for(i=1;i<=n;i++)
	{
		a=fact(i);
		if(i%2==0)
			s=(s+(-(1.0/a)));
		else
			s=(s+(1.0/a));

		a=-a;
	}
	return s;
}
int fact(int x)
{
	int i=1,p=1;
	for(i=1;i<=x;i++)
	{
		p=p*i;
	}
	return p;
}



