//10) char * strstr(char str[], char sub[]); //returns the address of character in main string from where substring is matching.
#include<stdio.h>
#include<string.h>
int main()
{
	char s[50],s1[50];
	printf("enter elements of string\n");
	scanf("%49[^\n]s",s);
	printf("enter substring elements\n");
	scanf(" %49[^\n]s",s1);
	char * strstr1(char str[], char sub[]); 
	printf("%s",strstr1(s,s1));
	return 0;
} 
 char * strstr1(char s[], char s1[]) 
{
	while(*s!='\0')
	{
		if(*s==*s1)
		{
			char *c=s,*d=s1;
			while(1)
			{
				if(*s1=='\0')
					return c;
				else if(*s!=*s1)
				{
					s=c;
					break;
				}
				s=s+1;s1=s1+1;
			}
			s1=d;
		}
		s++;
	}
	return NULL;
}
