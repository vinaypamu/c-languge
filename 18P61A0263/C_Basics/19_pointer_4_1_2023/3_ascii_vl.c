//3)Write a program to take input for two character variables using pointers and find out which character has higher ascii value.
#include<stdio.h>
int main()
{
	int a,b,*p=&a,*q=&b;
	char c=65,d=98;
	*p=c,*q=d;
	if(*p>*q)
		printf("%c is bib %c is small",*p,*q);
	else
		printf("%c is big %c is small",*q,*p);
}
