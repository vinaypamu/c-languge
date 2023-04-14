//7)Write a program to find the biggest of three numbers using pointers that point to those numbers
#include<stdio.h>
int main()
{
	int a,*x=&a,b,*y=&b,c,*z=&c;
	printf("enter 3  num\n ");
	scanf("%d%d%d",x,y,z);
	printf("%d %d %d\n",a,b,c);
	if(*x>*y)
	{
		if(*x>*z)
			printf("%d -x is big",a);
		else
			printf("%d -z is big",c);
	}
	else if(*y>*z)
		printf("%d -y is big",b);
	else
		printf("%d-z is big",c);
	return 0;
}
