//5) int strncmp(char s1[]. char s2[], int n);
#include<stdio.h>
int main()
{
	char s[50],s1[50];
	int i=0;
	int strncmp1(char s1[],char s[],int );
	printf("enetr string elements \n");
	scanf("%49[^\n]s",s);
	printf("enetr string 2 elements \n");
	scanf(" %49[^\n]s",s1);
	printf("enter no. of elements has to cmpare\n");
	scanf("%d",&i);
	if(strncmp1(s,s1,i))
		printf("both strings are same\n");
	else 
		printf("both strings are not same\n");
	return 0;
}
int strncmp1(char s1[],char s[],int i)
{
	while(i>0)
	{
		if(*s1!=*s)
			return 0;
		s1++;s++;i--;
	}
	return 1;
}
