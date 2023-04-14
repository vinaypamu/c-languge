//char * strlwr(char s[]); // returns s base address])
#include<stdio.h>
int main()
{
	char s[50],s1[50];
	int i=0;
	char* strlwr1(char s1[]);
	printf("enetr string elements \n");
	scanf("%49[^\n]s",s);
	printf("%s\n",strlwr1(s));
	return 0;
}
char* strlwr1(char s[])
{
	char *b=s;
	while(*s!='\0')
	{	
		if(*s>='A'&&*s<='Z')
			*s=*s+32;
		s++;
	
	}
	return b;
}
