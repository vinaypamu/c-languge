//4) Write a function that can take two integers as input, and gives 5 outputs : addition, subtraction, multiplication, quotient and reminder of those two numbers. Print the outputs in the main function.
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
       printf("enter 2 numbers");
       scanf("%d%d",&a,&b);
       void ad(int a, int b,int *c,int*d,int*e,int*f,int*g);
        ad(a,b,&c,&d,&e,&f,&g);
 printf("%d-remainder %d-qutient %d-mul %d-sub %d-add",g,f,e,d,c);
       return 0;
}
void ad(int a, int b,int *c,int*d,int*e,int*f,int*g)
{
	*c=a+b;
	*d=a-b;
	*e=a*b;
	*f=a/b;
	*g=a%b;
	return ;

}
