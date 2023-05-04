/*3) Write a program to store a hexa decimal integer and print each byte value separately without using any bitwise operations.*/
#include<stdio.h>
union vv
{
	unsigned int a;
	char c[4];
}vv1;
int main()
{
	printf("enter hexadecimal value\n");
	scanf("%x",&vv1.a);
	printf("%x %x %x %x\n",vv1.c[3],vv1.c[2],vv1.c[1],vv1.c[0]);
	return 0;
}
