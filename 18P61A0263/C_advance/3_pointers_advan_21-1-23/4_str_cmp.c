// 4) int  strcmp (char s1[], char s2[]);
#include<stdio.h>
int main()
{
	char s[50],s1[50];
	int strcmp1(char s1[],char s[]);
	printf("enetr string elements \n");
	scanf("%49[^\n]s",s);
	printf("enetr string 2 elements \n");
	scanf(" %49[^\n]s",s1);
	if(strcmp1(s,s1))
		printf("both strings are same\n");
	else 
		printf("both strings are not same\n");
	return 0;
}
int strcmp1(char s1[],char s[])
{
	while(*s1!='\0'||*s!='\0')
	{
		if(*s1!=*s)
			return 0;
		s1++;s++;
	}
	return 1;
}
