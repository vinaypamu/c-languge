/*write a program to repeat whenever user chooses to continue by pressing y,and stop when he chooses n*/
#include<stdio.h>
int main()
{
	char n='y';
	int a,b;
	while(n=='y')
	{char e;
		scanf("%d%d %c",&a,&b,&e);
		switch(e)
		{
			case '*':printf("%d",a*b);
				 break;
			case '+':printf("%d",a+b);
				 break;
			case '-':printf("%d",a-b);
				 break;
			case '/':printf("%d",a/b);
				 break;
		}
		printf("entr y if you want to continue or enter n want to quite");
		scanf(" %c",&n);
	}
	return 0;
}
