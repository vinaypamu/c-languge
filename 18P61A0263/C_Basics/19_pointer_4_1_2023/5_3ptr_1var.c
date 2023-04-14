/*5)Declare 3 pointer variables of integer type, and an integer variable. Assign the address of integer variable to the 3 pointers. Print the variable value using indirection on each pointer variable. Change the variable value directly and check the values of each of the pointers using indirection. Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change.*/
#include<stdio.h>
int main()
{
	int *a=0,*b=0,*c=0;
	int m=30;
	a=&m; b=&m; c=&m;
	printf("%d -a,%d-b,%d-c,%d-m\n",*a,*b,*c,m);
	*a=10;
	printf("%d -a,%d-b,%d-c,%d-m\n",*a,*b,*c,m);
	*b=20;
	*c=*b+m;
	printf("%d -a,%d-b,%d-c,%d-m\n",*a,*b,*c,m);
	m=50;
	printf("%d -a,%d-b,%d-c,%d-m\n",*a,*b,*c,m);
	return 0;
}
