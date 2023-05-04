/*5) Write date validation program using enumerations. create a enum for datevalid status with valid / invalid as constant names (valid =1 ,invalid  =0) assign or return these values from date validation function .create a month enumeration.*/
#include<stdio.h>
enum std{
jan=1,feb,march,aprial,may,june,juliy,aug,sep,oct,nov,dec,invaild=0,valid};
enum std date(int d,int m,int y)
{
	int d1=0;
	 if(m==feb&&((y%100!=0&&y%4==0)||(y%400==0)))
		 d1=29;
	 else if(m==jan||m==march||m==may||m==juliy||m==aug||m==oct||m==dec)
		 d1=31;
	 else if(m==aprial||m==june||m==sep||m==nov)
		 d1=30;
	 else if(m==feb)
		 d1=28;
	 if(d1==0)
		 return invaild;
	 if(y>0&&d>=1&&d1>=d)
		 return valid;
	 return invaild;
}
int main()
{
	int d,m,y;
	printf("enter year month day\n");
	scanf("%d%d%d",&y,&m,&d);
	if(date(d,m,y))
		printf("date is valid\n");
	else
		printf("date is in valide\n");
}


