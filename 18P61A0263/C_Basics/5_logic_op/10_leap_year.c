/*check if an year is leap year or not. A year is considered leap year in following 2 cases:
 * 1) year is not divisible with 100, but divisible with 4
 * 2)year is divisible with 400
 * */
#include<stdio.h>
int main()
{
	int d;
	scanf("%d",&d);
	if(((d%100!=0)&&(d%4==0))||(d%400==0))
		printf("%d is leap year",d);
	else
		printf("%d is not a leap year",d);
	return 0;
}
