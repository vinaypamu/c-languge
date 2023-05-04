/*2) write a program to store a date in 32 bit space, read and print the dates*/
#include<stdio.h>
struct std
{
	unsigned int day:5,month:4,year:23;
}s1;
int main()
{
	unsigned int x;
	printf("enter year month day\n");
	scanf("%d",&x);
	s1.year=x;
	scanf("%d",&x);
	s1.month=x;
	scanf("%d",&x);
	s1.day=x;
	printf("%d\\%d\\%d\n",s1.year,s1.month,s1.day);
	return 0;
}
