/*8) int strchr( char str[], char ch)
 // search the character ch ,in string str , whenever the first matching occurs, return the matching index. */
#include<stdio.h>
int main()
{
	int n;
	char a;
	printf("enter string elements upto 49\n");
	char m[50];
	scanf(" %[^\n]s",m);
	printf("enter the match char\n");
	scanf(" %c",&a);
	int match(char m[],char );
	n=match(m,a);
	if(n!=-1)
		printf("the match index is %d",n);
	else 
		printf("match not found");
	return 0;
}
int match(char m[],char i)
{
	int j=0;
	for(j=0;j<49;j++)
	{
		if(m[j]==i)
			return j;
	}
	return -1;
}
