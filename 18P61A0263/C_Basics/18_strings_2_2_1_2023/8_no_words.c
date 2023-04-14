//8. no.of words in a given string.
#include<stdio.h>
int m(char str[]);
int main()
{
	int a;
	char str[50];
	printf("enter upto 49 string elements\n");
	scanf(" %49[^\n]s",str);
	printf("%s has %d words",str,m(str));
	return 0;
}
int m(char str[])
{
	int i=0,j=0;
	if(str[0]==0)
		return 0;
	for(i=0;str[i]!=0;i++)
	{
		if((str[i]==' ')&&(str[i+1]!=' ')&&(str[i+1]!=0))
			++j;
	}
	return ++j;
}
