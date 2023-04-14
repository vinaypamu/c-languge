#include"head.h"
int NoOfDaysinMonth(int m,int y)
{
	int d;
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		d=31;
	else if(m==4||m==6||m==9||m==11)
		d=30;
	else
		d=IsLeapYear(y);
	return d;
}
int IsLeapYear(int x)
{
	int d;
	if(((x%100!=0)&&(x%4==0))||x%400==0)
		d=29;
	else
		d=28;
	return d;
}
