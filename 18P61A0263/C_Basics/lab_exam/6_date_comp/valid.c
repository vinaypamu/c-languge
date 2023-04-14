#include"head.h"
int IsValidDate(int d,int m,int y)
{
	int d1;
	if((m==4)||(m==6)||(m==9)||(m==11))
		d1=30;
	else if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))
		d1=31;
	else if(IsLeapYear(y))
		d1=29;
	else 
		d1=28;

	if(((m>=1)&&(m<=12))&&((d>=1)&&(d<=31))&&(d1>=d))
		return 1;
	else
		return 0;
}
int IsLeapYear(int y)
{
	if(((y%100!=0)&&(y%4==0))||(y%400==0))
		return 1;
	else 
		return 0;
}

