/*9)
 *
 * Write a function to accept two dates as input arguments, and return 1 if the first date is older, 0 if the second date is older.*/
#include"head.h"
int main()
{
	int y,m,d,y1,m1,d1,d3,d2;
	printf("enter 1st date year and month and day");
	scanf("%d%d%d",&y,&m,&d);
	printf("enter 2nd date year and moth and day");
	scanf("%d%d%d",&y1,&m1,&d1);
		if(m==4||m==6||m==9||m==11)
			d2=30;
		else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			d2=31;
		else if((y%100!=0&&y%4==0)||y%400==0)
			d2=29;
		else 
			d2=28;
	        if(m1==4||m1==6||m1==9||m1==11)
			d3=30;
		else if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)
			d3=31;
		else if((y1%100!=0&&y1%4==0)||y1%400==0)
			d3=29;
		else 
			d3=28;

	if(m>=1&&m<=12&&m1>=1&&m1<=12&&d>=1&&d<=31&&d1>=1&&d1<=31&&d2>=d&&d3>=d1)
	{
		if(old(y,m,d,y1,m1,d1))
			printf("%d-%d-%d is older",y,m,d);
		else
			printf("%d-%d-%d is older",y1,m1,d1);
	}
	else
		printf("date is invalied");

	return 0;
}

