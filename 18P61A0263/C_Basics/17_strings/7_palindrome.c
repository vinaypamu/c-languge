/*7) int palindrome (char str[])
 *
 // return 1 if the given string is a palindrome, return 0 if it is not a palindrome
*/
#include<stdio.h>
int main()
{
	printf("enter string elements upto 49\n");
	char r[50];
	scanf(" %[^\n]s",r);
	int fun(char a[]);
	if(fun(r))
		printf("%s is palindrome",r);
	else
		printf("%s is not palindrome",r);
	return 0;
}
int fun(char v[])
{
	int i,j;
	for(j=0;j<49;j++)
	{
		if(v[j]=='\0')
			break;
	}
	for(i=0,j--;i<j;i++,j--)
	{
		char a;
		a=v[j];
		v[j]=v[i];
		v[i]=a;
		if(v[i]!=v[j])
			return 0;
	}
	return 1;
}

