/*1) Write a program that reads an integer and displays the right-most digit of the number.
 (Eg: User enters, 456, the output should be 6).*/
#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",x%10);
	return 0;
}

