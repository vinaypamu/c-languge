#include"head.h"
int day(int m,int y)
{
    	if(m==4||m==6||m==9||m==11)
		m=30;
	else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		m=31;
	else if((y%100!=0&&y%4==0)||y%400==0)
		m=29;
	else 
		m=28;
	return m;
}
