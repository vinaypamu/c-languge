//7) char  * strcat(char d[], char s[]); // returns destination base address.
#include<stdio.h>
int main()
{
	char s[50],s1[50];
	int stricmp1(char s1[],char s[]);
	printf("enetr string elements \n");
	scanf("%49[^\n]s",s);
	printf("enetr string 2 elements \n");
	scanf(" %49[^\n]s",s1);
	char* strcat1(char s[],char s1[]);
	printf("%s\n",strcat1(s,s1));
	return 0;
}
char* strcat1(char s[],char s1[])
{
	char *b=s;
	while(*s!='\0')
	{
		s++;
	}
	while(*s1!='\0')
	{
		*s=*s1;
		s++;s1++;
	}
	*s='\0';
	return b;
}

