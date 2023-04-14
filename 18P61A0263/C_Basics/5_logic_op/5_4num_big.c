//5) Write a program to read 4 numbers and print the biggest number.
#include<stdio.h>
int main()
{
int a,b,c,d;
scanf("%d%d%d%d",&a,&b,&c,&d);
if((a>b)&&(a>c)&&(a>d))
	printf("%d is a big num",a);
else if((b>c)&&(b>d))
	printf("%d is a big num",b);
else if(c>d)
	printf("%d is a big num",c);
else
	printf("%d is big num",d);
return 0;

}
