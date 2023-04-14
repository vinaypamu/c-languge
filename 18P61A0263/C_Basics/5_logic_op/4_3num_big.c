//4) Write a program to read 3 numbers and print the biggest number.
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
		printf("%d is a big number",a);
	else if(b>c)
		printf("%d is a big number",b);
	else 
		printf("%d is a big number",c);
	return 0;
}
