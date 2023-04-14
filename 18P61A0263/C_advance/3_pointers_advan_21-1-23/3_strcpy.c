// 3) char * strcpy( char d[] , char s[]);  // returns destination base address)
#include<stdio.h>
int main()
{
	char s[50],s1[50];
	char* strcpy1(char s1[],char s[]);
	printf("enetr string elements \n");
	scanf("%49[^\n]s",s);
	printf("%s cpy of string\n",strcpy1(s1,s));
	return 0;
}
char* strcpy1(char s1[],char s[])
{
	char *p=s1;
	while(*s1!='\0')
	{
		*s1=*s;
		s++;s1++;
	}
	*s1='\0';
	return p;
}
