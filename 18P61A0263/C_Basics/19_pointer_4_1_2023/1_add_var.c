/*1)Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator).)*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x=3,*m=&x;;
	char y=65,*n=&y;
	float z=2.3,*p=&z;
	printf("%d -x,%p-x,%lu -x,%c-y,%p-y,%lu-y,%lu -char,%f-z,%p-z,%lu-z\n",x,&x,sizeof(x),y,&y,sizeof(y),sizeof(1.2),z,&z,sizeof(z));
	printf("%d -x,%p-x,%lu -x,%c-y,%p-y,%lu-y,%lu -char,%f-z,%p-z,%lu-z\n",*m,m,sizeof(*m),*n,n,sizeof(*n),sizeof(n),*p,p,sizeof(*p));
	return 0;
}
