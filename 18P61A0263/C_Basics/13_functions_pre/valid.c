#include<stdio.h>
#include"head1.h"
int valid(int m,int y)
{
	int d;
	if(m==4||m==6||m==9||m==11)
		d=30;
	else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		d=31;
	else if((y%100!=0&&y%4==0)||y%400==0)
		d=29;
	else 
		d=28;
	return d;
}
int valid2(int m, int y)
{
	int d3;
	if(m==4||m==6||m==9||m==11)
		d3=30;
	else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		d3=31;
	else if((y%100!=0&&y%4==0)||y%400==0)
		d3=29;
	else 
		d3=28;
	return d3;
}
int comp(int m,int m1, int d, int d1,int d2,int d3)
{
	if((m>=1)&&(m<=12)&&(m1>=1)&&(m1<=12)&&(d>=1)&&(d<=31)&&(d1>=1)&&(d1<=31)&&(d2>=d)&&(d3>=d1))
		return 1;
	return 0;
}
