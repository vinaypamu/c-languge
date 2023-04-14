/*are 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer*/
#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	int *d=&a;
	printf("%d -a,%d-d\n",a,*d);
	d=&b;
	printf("%d-b,%d-d\n",b,*d);
	d=&c;
	printf("%d-c,%d-d\n",c,*d);
	return 0;

}
