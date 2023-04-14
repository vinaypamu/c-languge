/*Implement calculator program using macros. Write down your own header file ,where the calculator macros are defined(ADD,SUB,MUL,DIV).)*/
#include"head.h"
int main()
{
	int a,b;
	char c;
	printf("enter num char num \n");
	scanf("%d %c%d",&a,&c,&b);
	switch(c)
	{
		case '+':printf("%d \n",add);
			 break;
		case '-':printf("%d \n",sub);
			 break;
		case'*':printf("%d \n",mul);
			break;
		case '/':printf("%d \n",div);
			 break;

	}
	return 0;
}
