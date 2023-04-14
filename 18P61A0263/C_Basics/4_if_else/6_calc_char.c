/*6)Write a calculator program that takes two integer numbers from user, and one of the operator symbols +,-,* and / as a character and prints the appropriate result using if else.  (print a+b if character entered is + etc)*/
#include<stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d%d\n%c",&a,&b,&c);
	if(c=='+')
		printf("addition of 2 num %d",a+b);
	else if(c=='*')
		printf("multiple of 2 num %d",a*b);
	else if(c=='-')
		printf("substraction of 2 num %d",a-b);
	else if(c=='/')
		printf("mode of 2num %d",a/b);
return 0;
}
