#include<stdio.h>
int main()
{
	int a,b,p=1,s=1,c,d;
	scanf("%d%d",&a,&b);
	c=a;
	d=b;
	while(a!=b)
	{
		if(((a%2==0)&&(b%2!=0))||((a%2!=0)&&(b%2!=0))||(a%2!=0)&&(b%2==0))
		{
			a=a*b;
			break;
		}
		if(a>b)
		{
			b=d*p;
			p++;
		}
		else 
		{
			a=c*s;
			s++;
		}
	}
	printf("%d and %d of lcm is %d\n",c,d,a);
	return 0;
}
