//7) try to send a character array / character pointer / string constant as arguments and see what is the size returned, and understand the difference./
#include<stdio.h>
#define size(m) printf("%lu\n",((char *)(&m+1)-(char *)(&m)))
int main()
{
	char s[10]="vinay";
	char s1[10]={'v','i','n'};
	char *s2=s1;
	void size1(char *);
	size1(s2);
	size1(s);
	size1(s1);
	s2="vin";
	size1(s2);
	printf("%p\n","pamu");
}
void size1(char *s1)
{
	size(s1);
	return ;
}
