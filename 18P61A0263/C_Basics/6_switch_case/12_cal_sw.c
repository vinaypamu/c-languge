#include<stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%c%d%d",&c,&a,&b);

	switch(c)
	{
		case '+':
			printf("%d ",a+b);
			break;
		case '-':
			printf("%d",a-b);break;
		case '%':
			printf("%d",a%b);
			break;
		case '/':
			printf("%d",a/b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		default:
			printf("%c is not cal ",c);
	}
	return 0;
}

