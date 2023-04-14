// given input char replacing with match char in the  string .
#include<stdio.h>
int main()
{
	int i,j;
	char s[50],n,c;
	printf("enter string\n");
	scanf(" %49[^\n]s",s);
	printf("enter char \n");
	scanf(" %c",&n);
	printf("enter replace char\n ");
	scanf(" %c",&c);
	void m(char s[],char n,char c);
	m(s,n,c);
	printf("%s",s);
return 0;
}
void m(char s[],char n,char c)
{
	int j=0;
	for(j=0;s[j]!=0;j++)
	{
		if(s[j]==n)
		{
			s[j]=c;
		}
	}
return ;
}
