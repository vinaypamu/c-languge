/*1	Rewrite the calculator program so that the main function is in main.c , remaining functions are in another source code file ,operations.c.
 * 2 ) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function return value should be stored in another global v
       ariable in operations file and be used to print in main.*/
#include"head.h"
int a,b;
extern int c;
int main()
{
	char ch;
	//extern int c;
	printf("enter two num and char");
	scanf("%d%d %c",&a,&b,&ch);
	switch(ch)
	{
		case'+':{add1();
			printf("%d is sum of two num",c);
			break;}
		case'-':{sub1();
			printf("%d is s of two num",c);
			break;}
		case'*':{mul1();
			printf("%d is mul of two num",c);
			break;}
		case'/':{div1();
			printf("%d is div of two num",c);
			break;}
		case'%':{mod1();
			printf("%d is mod of two num",c);
			break;}
	}
	return 0;
}
