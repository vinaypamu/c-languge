// convert integer char string into integer.
#include<stdio.h>
int main()
{
	char str[50];
	int a=0;
	printf("enter integer character elements \n");
	scanf("%49[^\n]s",str);
	int conv(char str[],int a);
	printf("%d is integer value",a=conv(str,a));
	return 0;
}
int conv(char str[],int a)
{
	int i,j=0;
	for(i=0;str[i]!=0;i++)
	{
		j=j*10;
		j=j+(str[i]-48);
	}
	return j;
}
