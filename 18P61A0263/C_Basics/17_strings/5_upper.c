/*5) void strupr (char str[]);
 * convert all lower case alphabets to upper case in the given string*/
#include<stdio.h>
int main()
{
	char a[50];
	printf("enter string elements upto 49\n");
	scanf(" %[^\n]s",a);
	void fun(char a[]);
	fun(a);
	printf("%s",a);
	return 0;
}
void fun(char a[])
{
	int i=0;
	for(i=0;i<49;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-32;
	}
	return ;
}
