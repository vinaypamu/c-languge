/*5) "Write a function that communicates with main using a single static variable without taking any input arguments.
 Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.
 eg., print the square of each number of an array :
 for each number of the array :
   call the function
   main gets the static variable address as return value from function.
   main puts the array element in static variable.
 in the function :
   create static variable.
   if static variable value is not zero, print its square.
   function sends static variable address back to main."""*/
#include<stdio.h>
int main()
{
	int i;
	int a1[10]={1,2,3,0,5,6,7,8,9,10};
	int * squar();
	int *p=squar();
	for(i=0;i<10;i++)
	{
		*p=a1[i];
		p=squar();
	}

}
int * squar()
{
	static int a=0;
	a=a*a;
	if(a!=0)
		printf("%d ",a);
	return &a;
}
