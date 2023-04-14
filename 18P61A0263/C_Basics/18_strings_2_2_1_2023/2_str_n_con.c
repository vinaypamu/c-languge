// num of onr string elements concatinating to anther string.
#include<stdio.h>
void con(char s[],char s1[],int n)
{
	int i=0,j=0;
	for(i=0;s[i]!='\0';i++);
	for(j=0;j<n;j++,i++)
	{
		s[i]=s1[j];
		if(s1[j]=='\0')
			break;
	}
	s[i]=0;
	return ;
}
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
	con(s,s1,n);
	printf("%s",s);
return 0;

}
