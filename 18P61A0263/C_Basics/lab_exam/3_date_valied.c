#include<stdio.h>
int main()
{
	int d,m,y,d1;
	scanf("%d%d%d",&d,&m,&y);
	if(((y>=1900)&&(y<=2200))&&((m>=1)&&(m<=12))&&((d>=1)&&(d<=31)))
	{
		if(((y%100!=0)&&(y%4==0))||(y%400==0))
			d1=29;
		else
			d1=28;
		if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))
			d1=31;
		if((m==4)||(m==6)||(m==9)||(m==11))
			d1=30;
		if(d<=d1)
			printf("valid Date");
		else
			printf("Invalid Date");
	}
	else
		printf("Invalid Date");
	return 0;
}

