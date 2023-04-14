/*1	Rewrite the calculator program so that the main function is in main.c , remaining functions are in another source code file ,operations.c.
 * 1 ) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function returns the result as return value.*/
#include"head.h"
int a,b;
int main()
{
	char c;
	printf("enter two num and char");
	scanf("%d%d %c",&a,&b,&c);
	switch(c)
	{
		case'+':printf("%d is sum of two num",add());
			break;
		case'-':printf("%d is s of two num",sub());
			break;
		case'*':printf("%d is mul of two num",mul());
			break;
		case'/':printf("%d is div of two num",div());
			break;
		case'%':printf("%d is mod of two num",mod());
			break;
	}
	return 0;
}





