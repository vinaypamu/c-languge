/*8)Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. Do this using pointers that point to x,y and z.*/
#include<stdio.h>
int main()
{
	int x=10,y=20,z=30;
	int *a=&x, *b=&y,*c=&z;
	printf("%d-x,%d-y,%d-z\n",x,y,z);
	int t;
	t=*a; *a=*b;*b=*c;*c=t;
	printf("%d-x,%d-y,%d-z\n",x,y,z);
	t=*a; *a=*b;*b=*c;*c=t;
	printf("%d-x,%d-y,%d-z\n",x,y,z);
	t=*a; *a=*b;*b=*c;*c=t;
	printf("%d-x,%d-y,%d-z\n",x,y,z);
	return 0;

}
