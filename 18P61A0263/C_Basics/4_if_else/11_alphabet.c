//11) Write a program to read a character, and print if the character is alphabet or not ( whether entered character is A to Z or a to z)
#include<stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	if(64<x)
	{
	if(x<=90)
		printf("%c is a alphabet",x);
	else if(x>96)
		if (x<=122)
			printf("%c is alphabet",x);
		else
			printf("%c is not alphabet",x);
	}
	else
		printf("%c is not alphabet",x);
	return 0;
}

