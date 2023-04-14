//10)check if an year is leap year or not.
#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	(x%100!=0)?(x%4==0)?printf("%d is a leap year",x):printf("%d is a not leap year",x):(x%400==0)?printf("%d is a leap year",x):printf("%d is not lesp year",x);
	return 0;
}
