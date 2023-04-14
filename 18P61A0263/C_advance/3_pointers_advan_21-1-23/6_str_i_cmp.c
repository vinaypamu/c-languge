//6) int stricmp (char s1[], char s2[]);
#include<stdio.h>
int main()
{
	char s[50],s1[50];
	int i=0;
	int stricmp1(char s1[],char s[]);
	printf("enetr string elements \n");
	scanf("%49[^\n]s",s);
	printf("enetr string 2 elements \n");
	scanf(" %49[^\n]s",s1);
	if(stricmp1(s,s1)!=0)
		printf("both strings are same\n");
	else 
		printf("both strings are not same\n");
	return 0;
}
int stricmp1(char s1[],char s[])
{
	int i=0;
	while(*s!='\0'||*s1!='\0')
	{	
		if((((((*s1)+32)!=*s)&&(((*s)+32)!=*s1))&&(*s!=*s1)))
		{
			return (i=0);
		}
		s1++;s++;i++;
	
	}
	return i;
}
