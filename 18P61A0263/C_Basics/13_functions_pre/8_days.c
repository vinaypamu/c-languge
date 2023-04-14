/*8)Write a function to accept two dates as input arguments and return the difference in number of days.*/
#include<stdio.h>
#include"head1.h"
int comp(int ,int ,int ,int ,int ,int );
int old(int y,int m,int d,int y1,int m1,int d1)
{
	if((y<y1)||((y==y1)&&(m<m1))||((y==y1)&&(m==m1)&&(d<d1)))
		return 1;
	return 0;
}
int leap(int y)
{
	if((y%100!=0)&&(y%4==0)||(y%400==0))
		return 1;
	else 
		return 0;
}
int main()
{
	int y,m,d,y1,m1,d1,d3,d2,a,b,c=0;
	printf("enter 1st date year and month and day");
	scanf("%d%d%d",&y,&m,&d);
	printf("enter 2nd date year and moth and day");
	scanf("%d%d%d",&y1,&m1,&d1);
	d2=valid(m,y);
	d3=valid2(m1,y1);
	//if((m>=1)&&(m<=12)&&(m1>=1)&&(m1<=12)&&(d>=1)&&(d<=31)&&(d1>=1)&&(d1<=31)&&(d2>=d)&&(d3>=d1))
	if(comp(m,m1,d,d1,d2,d3))
	{
		if(!(old(y,m,d,y1,m1,d1)))
		{
			a=y;b=m;c=d;
			y=y1; m=m1; d=d1;
			y1=a; m1=b; d1=c;
			c=d2;d2=d3;d3=c;
		}
		c=0;
		for(a=1;!((y==y1)&&(m==m1)&&(d==d1));a++)
		{
			if((y==y1)&&(m==m1))
			{
				c=d1-d; d=d1;
			}
			else if(!((y==y1)&&(m==m1)))
			{
				if(a==1)
				{
				c=d2-d;
				}
				m=m+1;
				if(m==13)
				{
					m=1;
				}
				switch(m)
				{
					case 1:
						{
							c=c+31; y++; break;
						}
					case 2:c=c+valid(m,y);
					       break;
					case 3:c=c+31;break; 
					case 4:c=c+30;break;
					case 5:c=c+31;break;
					case 6:c=c+30;break;
					case 7:c=c+31;break;
					case 8:c=c+31;break;
					case 9:c=c+30;break;
					case 10:c=c+31;break;
					case 11:c=c+30;break;
					case 12:c=c+31;break;
				}
				if((y==y1)&&(m==m1))
				{
					d=d1;
				}
				printf("%d-%d\n",m,c);
			}
		}
		if(a>1)
		c=c-d3+d1;
		printf("\t%d is days\n",c);
	}
	else 
		printf("dates are not valid");
	return 0;
}
