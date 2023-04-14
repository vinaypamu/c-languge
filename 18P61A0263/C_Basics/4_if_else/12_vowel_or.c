//12) Write a program to read a character and print if it is vowel or not.
#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if(c=='A')
		printf("%c is vowel",c);
	else if(c=='E')
		printf("%c is a vowel",c);
	else if(c=='I')
		printf("%c is a vowel",c);
	else if(c=='U')
		printf("%c is a vowel",c);
	else if(c=='O')
		printf("%c is a vowel",c);
	else if(c=='a')
		printf("%c is a vowel",c);
	else if(c=='e')
		printf("%c is a vowel",c);
	else if(c=='i')
		printf("%c is a vowel",c);
	else if(c=='o')
		printf("%c is a vowel",c);
	else if(c=='u')
		printf("%c is a vowel",c);
	else
		printf("%c is not a vowel",c);
	return 0;
}
