/*4)
Write a function that takes an integer parameter and prints its multiplication table.return type should be void.*/
#include"head.h"

int main()
{
	int a,b;
	printf("enter num");
	scanf("%d",&a);
	for(b=1;b<=10;b++)
		mul(a,b);
	return 0;
}


