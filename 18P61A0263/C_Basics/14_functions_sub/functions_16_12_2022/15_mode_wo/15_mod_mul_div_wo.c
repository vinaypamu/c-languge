/*5) Modify the calculator program - multiply, division and remainder functions to return the result without using the operators *, / and % respectively.*/
#include"head.h"
int main()
{
	int a,b;
	char c;
	printf("enter num char num");
	scanf("%d %c%d",&a,&c,&b);
	switch(c)
	{
		case '*':printf("mul os 2 num %d",mul(a,b));
			break;
		case '/':printf("div of 2 num %d",div(a,b));
			break;
		case '%':printf("mod of 2num %d",mod(a,b));
			break;
	}
	return 0;


}
