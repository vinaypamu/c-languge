// num of string elements copying to anther string.
#include<stdio.h>
int main()
{
	int i,j,n;
	char s[50],s1[50];
	printf("enter 1st string\n");
	scanf(" %49[^\n]s",s);
	printf("enter 2nd string\n");
	scanf(" %49[^\n]s",s1);
	printf("enter num \n");
	scanf("%d",&n);
	void cpy(char s[],char s1[],int n);
	cpy(s,s1,n);
	printf("%s",s1);
return 0;

}
void cpy(char s[],char s1[],int n)
{
	int j=0;
	for(j=0;j<n;j++)
	{
		s1[j]=s[j];
		if(s[j]=='\0')
			break;
	}
return ;
}
