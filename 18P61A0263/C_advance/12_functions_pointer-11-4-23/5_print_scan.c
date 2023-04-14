/*Read an integer and print it back using function pointers for printf and scanf.

printf declaration to use : int printf(char * , ...);
scanf declaration to use : int scanf(char *, ...);

Try it again using alias name and array of function pointers.*/
#include<stdio.h>
int printf(const char *,...);
int scanf(const char * ,...);
typedef int (*vinout)(const char *,...);
//int (*vscan)(const char *,...)=scanf;
int main()
{
	int a;
	vinout vprint=printf,vscan=scanf,vprint1[2]={printf,scanf};

	vprint("enter a element\n");
	vscan("%d",&a);
	vprint("entered element %d\n",a);

	(vprint1)[0]("enter 2nd element\n");
	(vprint1)[1]("%d",&a);
	 (vprint1)[0]("entered element %d\n",a);

	return 0;

}
