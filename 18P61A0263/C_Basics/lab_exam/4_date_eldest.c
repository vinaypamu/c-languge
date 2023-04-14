#include<stdio.h>
int main()

{
	int i,j,a,b,c,d,y,m,d2,n;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(b==4||b==6||b==9||b==11)
			d2=30;
		else if((a%100!=0&&a%4==0)||a%400==0)
			d2=29;
		else 
			d2=28;
		if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
			d2=31;
		if(b>=1&&b<=12&&c>=1&&c<=31&&d2>=c)
		{
			if(i==1)
			{
				y=a;
			       	m=b;
			       	d=c;
			       	j=i;
			       	i++;
			}
			else if(((y==a)&&(m==b)&&(d>a))||((y>a)||(y==a)&&(m<b)))
			{
				y=a;
			       	m=b;
			       	d=c;
			       	j=i;
			       	i++;
			}
			else 
				i++;
		}
		else
		{
			printf("please enter valid date ");
			continue;
		}
	}
	printf("%d is eldest of all %d-%d-%d",j,y,m,d);
	return 0;
}
	


