//Write the calculator program using function pointers for add, sub, mul, div and mod functions, using a single function pointer.
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
	vv vv1=add;

int main()
{
//	typedef void (*vv)(int ,int );
	vv1=add;
	printf("add %d\n",vv1(5,4));
	vv1=sub;
	printf("sub %d\n",vv1(5,4));
	vv1=mul;
	printf("mul %d\n",vv1(5,4));
	vv1=div;
	printf("div %d\n",vv1(5,4));
	vv1=mod;
	printf("mod %d\n",vv1(5,4));
return 0;
}
