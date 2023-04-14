// Write a program to read a character, and print if the character is alphabet or not ( whether entered character is A to Z or a to z)
#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if(((c>=65)&&(c<=90))||((c>=97)&&(c<=122)))
		printf("%c is a alphabet",c);
	else 
		printf("%c is not alphabet",c);
	return 0;

}
