/*8)
 * Write a function to accept a year as input and return 1 if the year is a leap year, otherwise returns  0.*/
#include"head.h"
int main()
{
	int x;
	printf("enter year");
	scanf("%d",&x);
	if(year(x))
		printf("%d is leap year",x);
	else 
		printf("%d is not leap year",x);
	return 0;
}

