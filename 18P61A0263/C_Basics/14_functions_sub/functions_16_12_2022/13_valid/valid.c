#include"head.h"
int valid(int y,int m,int d)
{
	int d2;
		if(m==4||m==6||m==9||m==11)
			d2=30;
		else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			d2=31;
		else if((y%100!=0&&y%4==0)||y%400==0)
			d2=29;
		else 
			d2=28;
	if(m>=1&&m<=12&&d>=1&&d<=31&&d2>=d)
		return 1;

	return 0;
}

