//1) Write a program to swap two numbers using Call by Value and Call by Reference.
#include<stdio.h>
int main()
{
	int x,y,*a=&x,*b=&y;
	printf("enter 2 num\n");
	scanf("%d%d",a,b);
	void swap(int a,int b);
	void swap1(int *p,int *q);
	swap(x,y);
	printf("%d -a,%d-b\n",x,y);
	swap1(&x,&y);
	printf("%d-a,%d-b\n",x,y);
	return 0;
}
void swap(int a,int b)
{
	int t;
	t=a;
	a=b; b=t;
	return ;
}
void swap1(int *p,int *q)
{
	int t=*p;
	*p=*q;*q=t;
	return ;

}

