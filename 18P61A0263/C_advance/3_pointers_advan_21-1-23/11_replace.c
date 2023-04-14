/*11) Write a function to replace a given substring by another string of same length in a given string, return the destination string base address.

char * strreplacestr(char * str[], char *sub1[] , char *sub2[]);

eg., input main string: Kernel Masters
input substring: er
input substring to replace: 12

output: K12nel Mast12s
*/
#include<stdio.h>
int main()
{
	char s[50],s1[50],s2[50];
	printf("enter elements of string\n");
	scanf("%49[^\n]s",s);
	printf("enter substring elements\n");
	scanf(" %49[^\n]s",s1);
	printf("enter replacing elements\n");
	scanf(" %49[^\n]s",s2);
	char * strstrrep1(char str[], char sub[],char sub1[]); 
	printf("%s",strstrrep1(s,s1,s2));
	return 0;
} 
 char * strstrrep1(char s[], char s1[],char s2[]) 
{
	char *c=s;
	while(*s!='\0')//main string.
	{
		if(*s==*s1)//comparing sub1 and main 
		{
			char *d=s1,*k=s;//storing sub1 and main match address
			while(1)
			{
				if(*s1=='\0')
				{
					s=k;s1=d;//re assiging sub1 and main match address.
				       	char *x=s2;//storing sub2 address
					while(*s1!='\0')
					{
						*s=*s2;//modifying main with sub2 value.
						s++,s1++,s2++;
					}
					s2=x;//re assigning sub2 start address
					break;//to break the current loop.

				}
				else if(*s!=*s1)
				{
					s=k;
					break;//to break the loop when main and sub1 values are different.
				}
				s++;s1++;//incrementing 
			}
			s1=d;//re assigning sub1 1st address for nxt match.
		}
		s++;
	}
	return c;//returning main 1st address.
}
