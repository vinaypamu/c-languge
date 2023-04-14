/*6) void strrev( char str[]);
 *
 //reverse the string (without using any extra array)

eg., input : str[] = "Kernel";

output : str[] = "lenreK"*/
#include<stdio.h>
int main()
{
	printf("enter string elements upto 49\n");
	char r[50];
	scanf(" %[^\n]s",r);
	void fun(char a[]);
	fun(r);
	printf("%s",r);
	return 0;
}
void fun(char v[])
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
	}
	return ;
}

