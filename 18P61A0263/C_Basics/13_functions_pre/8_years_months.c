/*8)Write a function to accept two dates as input arguments and return the difference in number of days.*/
#include<stdio.h>
#include"head1.h"
int old(int y,int m,int d,int y1,int m1,int d1)
{
	if((y<y1)||((y==y1)&&(m<m1))||((y==y1)&&(m==m1)&&(d<d1)))
		return 1;
	return 0;
}
int main()
{
	int y,m,d,y1,m1,d1,d3,d2,a,b,c;
	printf("enter 1st date year and month and day");
	scanf("%d%d%d",&y,&m,&d);
	printf("enter 2nd date year and moth and day");
	scanf("%d%d%d",&y1,&m1,&d1);
	d2=valid(m,y);
	d3=valid2(m1,y1);
	if((m>=1)&&(m<=12)&&(m1>=1)&&(m1<=12)&&(d>=1)&&(d<=31)&&(d1>=1)&&(d1<=31)&&(d2>=d)&&(d3>=d1))
	{
		if(!(old(y,m,d,y1,m1,d1)))
		{
			a=y;b=m;c=d;
			y=y1; m=m1; d=d1;
			y1=a; m1=b; d1=c;
		}
/*		for(c=0;d>0;)
		{

		//	if(d2==d&&d!=d1)
		       	if(d!=d1)
			{
			d=d+1;
			c++;
			}
			else
				break;
		
		}
		for (b=0,a=0;y>0;)
		{

			if(a==12)
			{
				y++;
				b++;
				a=0;

			}*/

/*			if(y==y1&&m==m1&&d==d1)
				break;

			if(m==12)
			{
				m=0;
			}
			m=m+1;
			a++;
			if(a==12)
			{
				y++;
				b++;
				b=0;
			}
			printf("year printing");
		}*/
		for(c=0;d!=d1;)
		{
			if(d!=d1&&d2==d)
				d=0;
			else if(d!=d1)
			{
				d++;
				c++;
				printf("%d - %d\t",d,c);
			}
		}
		b=(a/12);	a=(a%12);

		printf("%d is years %d is months %d is days",b,a,c);
	}
	else 
		printf("dates are not valid");
	return 0;
}
