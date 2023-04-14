/*10) Write a function to return the nth term of a fibonacci series. using this function print the fibonacci series upto n terms.*/
#include<stdio.h>
void fib(int ,int ,int ,int );
int main()
{
	int a=0,b=1,c=0,n;
	scanf("%d",&n);

	fib(a,b,c,n);
	return 0;
}
void fib(int x,int y,int z,int a)
{
	while(a>0)
	{
	x=y;
	y=z;
	z=x+y;
	printf("%d ",z);
	a--;
	}
	return ;
}



