// given string is numaric string or not.
#include<stdio.h>
int main()
{
	char str[50];
	printf("enter string elements\n");
	scanf("%49[^\n]s",str);
	int s;
	int n(char str[]);
	s=n(str);
	if(s>=0)
		printf("given string is numaric string");
	else
		printf("given string is not a numaric string");
	return 0;
}
int n(char str[])
{
	int i;
	for(i=0;str[i]!=0;i++)
	{
	//	printf("%c-str\n",str[i]);
		if((str[i]<'0')||(str[i]>'9'))	
			return -1;
	}
	return i;
}
