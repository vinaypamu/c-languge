/*4)  void strlwr( char str[]);
 // convert all upper case alphabets to lower case in the given string*/
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
		if(a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]+32;
	}
	return ;
}
	
