/*Modify the calculator program - with functions ,Add(),Sub(),Mul(),Div(),Mod(). Each function should take the inputs as parameters and return the result as output.
 * Hint: int add(int , int);
 * int sub (int, int);*/
#include"head.h"
int main()
{
	int a,b;
	printf("enter num char num ");
	char c;
	scanf("%d %c%d",&a,&c,&b);
	switch(c)
	{
		case'+':printf("%d is sum of two num",sum(a,b));
			break;
		case'-':printf("%d is sub of two num",sub(a,b));
			break;
		case'*':printf("%d is mul of two num",mul(a,b));
			break;
		case'/':printf("%d is div of two num",div(a,b));
			break;
		case'%':printf("%d is mode of two num",mod(a,b));
			break;
	}
	return 0;
}







