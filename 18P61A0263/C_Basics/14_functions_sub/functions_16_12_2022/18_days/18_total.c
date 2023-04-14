#include"head1.h"
int year(int ,int ,int );
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
	if((comp(m,m1,d,d1,d2,d3)))
	{
		if(!(old(y,m,d,y1,m1,d1)))
		{
			a=y;b=m;c=d;
			y=y1; m=m1; d=d1;
			y1=a; m1=b; d1=c;
			c=d2;d2=d3;d3=c;
			printf("%d %d %d %d %d %d \n",y,m,d,y1,m1,d1);
		}
		c=0;	
		for(a=1;(!((y==y1)&&(m==m1)&&(d==d1)));a++)
		{
			if((y==y1)&&(m==m1))
			{
				c=d1-d; d=d1;
				printf("%d = %d-%d",c,d2,d);
			}
			else if(!((y==y1)&&(m==m1)))
			{
				if(a==1)
				{
					c=d2-d;
				}
				m+=1;
				if(m==13)
				{
					m=1;
				}
				c=days(y,m,c);
				y=year(y,m,c);
				if((y==y1)&&(m==m1))
				{
					d=d1;
				}
				printf("%d-%d\n",m,c);
			}
		}
		if(a>2)
		{
			c=c-d3+d1;
			printf("%d a value",a);
		}
	printf("\t%d totall days\n",c);
	}
	else 
		printf("enter valid date ");
	return 0;
}
	
