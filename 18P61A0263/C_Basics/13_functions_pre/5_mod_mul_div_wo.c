/*5) Modify the calculator program - multiply, division and remainder functions to return the result without using the operators *, / and % respectively.*/
#include<stdio.h>
int mod(int ,int );
int div(int ,int );
int mul(int ,int );
int main()
{
	int a,b;
	char c;
	scanf("%d %c%d",&a,&c,&b);
	switch(c)
	{
		case '*':printf("mul os 2 num %d",mul(a,b));
			break;
		case '/':printf("div of 2 num %d",div(a,b));
			break;
		case '%':printf("mod of 2num %d",mod(a,b));
			break;
	}
	return 0;
}
	int mul(int a,int b)
	{
		int s=0;
		while(a>0)
		{
			s=s+b;
			a--;
		}
		return s;
	}
	int div(int n,int i)
	{
		int r=1,q=0;
	if(n<0&&i>0)
	{
		n=-n;
		while(i<=n)
		{
			n=n-i; q++;
		}
		q=-q;
	}
	else if(n>0&&i>0)
	{
		while(n>=i)
		{
			n=n-i; q++;
		}
	}
	else if (n<0&&i<0)
	{
		n=-n; i=-i;
		while(i<=n)
		{
			n=n-i; q++;
		}
	}
	else if(n>0&&i<0)
	{
		i=-i;
		while(i<=n)
		{
			n=n-i; q++;
		} q=-q;
	}
	else if(n==0&& i==0)
	{
		n=0; q=0;
	}
		return q;
	}
	int mod(int n,int i)
	{
		int r=1,q=0;
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
				n=n-i; q++;
			}
		}
		else if(n<0&&i<0)
		{
			n=-n; 
			i=-i;
			while(i<=n)
			{
				n=n-i;	q++;
			}
		}
		else if(n>0&&i<0)
		{
			i=-i;
			while(i<=n)
			{
				n=n-i; q++;
			}
			q=-q; 
		}
		else if(n==0&&i==0)
		{
			n=0; q=0;
		}
		return n;
	}


