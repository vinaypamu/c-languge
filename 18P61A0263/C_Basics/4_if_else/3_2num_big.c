/*3)
 *
 * Write a program to read 2 numbers and print the biggest number.*/
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
	printf("\n%d is biggest number",a);
	printf("\n%d is smallest number",b);
	}
	else
	{
		printf("\n%d is biggest number ",b);
		printf("\n%d is smallest number",a);
	}
}
