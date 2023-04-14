#include"head.h"
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
