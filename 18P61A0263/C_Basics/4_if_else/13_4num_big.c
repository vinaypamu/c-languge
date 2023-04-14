//write a program to read 4 numbers and print the biggest number.
#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
		if(a>c)
			if(a>d)
				printf("%d is a big num",a);
			else
				printf("%d is a big num",d);
		else if(c>d)
			printf("%d is a big num",c);
		else
			printf("%d is a big num",d);
	else if(b>c)
		if(b>d)
			printf("%d is a big num",b);
		else
			printf("%d is a big num",d);
	else if(c>d)
		printf("%d is a big num",c);
	else
		printf("%d is a big num",d);
	return 0;
}
