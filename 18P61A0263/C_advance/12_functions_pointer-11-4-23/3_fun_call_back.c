/*3)"Write the calculator program using a function that accepts a function pointer and the operand values as arguments and invokes it. In main function, simply invoke this function by sending appropriate function address, based on operator chosen.
eg.,
in main
case '+' :invokeptr(add , x,y);


invokeptr(int (*fptr) (int,int) , int x, int y)
{
printf(""%d\n"",fptr(x,y));
}"*/
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
	return a%b;
}
void invokeptr(int (*vv1) (int,int) , int x, int y)
{
printf("%d\n",vv1(x,y));
}

/*typedef int (*vv)(int ,int );
vv vv1=add;*/
int main()
{
	int x,y;
	char c;
	printf("enter two num and char\n");
	scanf("%d%d %c",&x,&y,&c);
	switch(c)
	{
		case '+' :invokeptr(add,x,y);
			  break;
		case '-' :invokeptr(sub,x,y);
			  break;
		case '*' :invokeptr(mul,x,y);
			  break;
		case '/' :invokeptr(div,x,y);
			  break;
		case '%' :invokeptr(add,x,y);
			  break;
		default:printf("enter + - * \\ %% \n");
	}
	return 0;
}











