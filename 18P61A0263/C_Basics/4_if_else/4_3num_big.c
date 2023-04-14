//4) Write a program to read 3 numbers and print the biggest number.
#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b)
	if(a>c)
	{
	printf("\n%d is big num",a);
	}
	else
		printf("\n%d is big num",c);
else
if(b>c)
	printf("\n%d is big num",b);
else
	printf("\n%d is big num",c);
return 0;
}
