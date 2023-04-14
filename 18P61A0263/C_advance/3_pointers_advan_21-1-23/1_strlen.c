//1) int strlen(char s[]);])
#include<stdio.h>
int main()
{
	char s[50];
	int strlen1(char *s);
	printf("enetr string elements \n");
	scanf("%49[^\n]s",s);
	printf("%d is length of string\n",strlen1(s));
	return 0;


}
int strlen1(char *s)
{
	int i=0;
	while(*s!=0)
	{
		i++;
		s++;
	}
	return i;
}

