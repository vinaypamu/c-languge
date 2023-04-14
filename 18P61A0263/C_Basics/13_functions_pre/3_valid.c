/*3)
 * Write a function to accept a date and validate the date. Return 1 if the date is valid, 0 if it is not valid.*/
#include<stdio.h>
int valid(int ,int ,int );
int main()
{
	int y,m,d;
	printf("enter date year and month and day");
	scanf("%d%d%d",&y,&m,&d);
	if(valid(y,m,d))
		printf("given date %d-%d-%d is valid",y,m,d);
	else
		printf("given date %d-%d-%d is not valid",y,m,d);
	return 0;
}
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

