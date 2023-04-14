/*10)

Write a function that accepts a month and year as input, and returns the number of days of the month as output. Print the number of days in a given month and year.*/
#include"head.h"
int main()
{
	int m,y,a;
	printf("enter month and year");
	scanf("%d%d",&m,&y);
	if(y%100!=0&&y%4==0||y%400==0)
		a=366;
	else
		a=365;
	printf("%d days of the month and %d days of the year\n",day(m,y),a);
	return 0;
}

