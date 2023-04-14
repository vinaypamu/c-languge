/*7)
 * Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n.*/
#include"head.h"
int main()
{
	int a,n;
	printf("enter value and power");
	scanf("%d%d",&a,&n);
	printf("%d pwoer of %d is %d",a,n,power(a,n));
	return 0;
}


