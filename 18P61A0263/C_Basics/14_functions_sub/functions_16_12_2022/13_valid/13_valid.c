/*3)
 * Write a function to accept a date and validate the date. Return 1 if the date is valid, 0 if it is not valid.*/
#include"head.h"
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

