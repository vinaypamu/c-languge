// matching given input char in reverse order with  string elements and printing its index.
#include<stdio.h>
int main()
{
	int i,j;
	char s[50],s1[50],n;
	printf("enter string\n");
	scanf(" %49[^\n]s",s);
	printf("enter char \n");
	scanf(" %c",&n);
	void m(char s[],char n);
	m(s,n);
return 0;
}
void m(char s[],char n)
{
	int j=0;
	for(j=0;s[j]!=0;j++);
	for(j=j-1;j>=0;j--)
	{
		if(s[j]==n)
		{
			printf("%c is match index is %d",s[j],j);
			return;
		}
	}
	printf("char is not found");
return ;
}
