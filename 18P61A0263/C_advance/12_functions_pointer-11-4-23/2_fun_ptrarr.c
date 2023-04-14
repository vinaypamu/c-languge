//Write the calculator program using function pointers for add, sub, mul, div and mod functions, using a function array pointer.
#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a+b;
}
	typedef int (*vv)(int ,int );
	vv vv1[5]={add,sub,mul,div,mod};

int main()
{
//	typedef void (*vv)(int ,int )
	printf("add %d\n",(vv1[0])(5,4));
	printf("sub %d\n",(vv1[1])(5,4));
	printf("mul %d\n",(vv1[2])(5,4));
	printf("div %d\n",(vv1[3])(5,4));
	printf("mod %d\n",(vv1[4])(5,4));
return 0;
}
