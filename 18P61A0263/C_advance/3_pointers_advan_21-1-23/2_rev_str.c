//2)  char * strrev( char s[]); // returns string base address
#include<stdio.h>
int main()
{
	char s[50];
	char* strrev1(char *s);
	printf("enetr string elements \n");
	scanf("%49[^\n]s",s);
	printf("%s rev of string\n",strrev1(s));
	return 0;
}
char* strrev1(char s[])
{
	char *j=s,*p=s,h;
	int i=0,k=0;
	while(*s!=0)
	{
		i++;
		s++;
	}
	--s;--i;
	while(j<s)
	{
		h = *j;
	       *j = *s;
       		*s = h;
 		s--;
		j++;		
	}
	return p;
}
