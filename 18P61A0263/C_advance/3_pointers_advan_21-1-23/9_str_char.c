//9) char * strchr( char s[], char c); // returns address of given character first occurrence in given string
#include<stdio.h>
#include<string.h>
 char * strchr1( char s[], char c);
int main()
{
	char s[50],c;
	printf("enter string elements\n");
	scanf("%49[^\n]s",s);
	printf(" enter match char\n");
	getchar();
	scanf("%c",&c);
	printf("%s\n",strchr1(s,c));
	return 0;
}
 char * strchr1( char s[], char c)
{
	while(*s!='\0')
	{
		if(*s==c)
			return s;
		s++;
	}
	return NULL;
}
