/*8)
 * Write a function to accept a year as input and return 1 if the year is a leap year, otherwise returns  0.*/
#include<stdio.h>
int year(int x)
{
	if((x%100!=0&&x%4==0)||(x%400==0))
		return 1;
	return 0;
}
int main()
{
	int x;
	scanf("%d",&x);
	if(year(x))
		printf("%d is leap year",x);
	else 
		printf("%d is not leap year",x);
	return 0;
}

