/*4)
"Write the calculator program using a function that accepts an array of function pointers and the operand values and operator character as arguments and invokes appropriate function based on the character. In main function, simply invoke this function by sending the array and operator character and operands as input.
eg.,
in main
case '+' :invokeptr( fparr, x,y, ch);


invokeptr(int (*fptr[]) (int,int) , int x, int y ,char ch)
{
//based on ch value, choose which index to apply on fptr and invoke the function
}*/
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

void invokeptr(int (*vv1[]) (int,int) , int x, int y,char ch)
{
	switch(ch)
	{
		case '+' :printf("add %d\n",(vv1[0])(x,y));
			  break;
		case '-' :printf("sub %d\n",(vv1[1])(x,y));
			  break;
		case '*' :printf("mul %d\n",(vv1[2])(x,y));
			  break;
		case '/':printf("div %d\n",(vv1[3])(x,y));
			  break;
		case '%':printf("mod %d\n",(vv1[4])(x,y));
			  break;
		default:printf("enter + - * \\ %% \n");
	}

//printf("%d\n",vv1(x,y));
}

typedef int (*vv)(int ,int );
vv vv1[5]={add,sub,mul,div,mod};
int main()
{
	int x,y;
	char c;
	printf("enter two num and char\n");
	scanf("%d%d %c",&x,&y,&c);
	invokeptr(vv1,x,y,c);
	return 0;
}











