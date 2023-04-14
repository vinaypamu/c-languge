//9. WAP multiply a number by 9 using bit shift.
#include<stdio.h>
int main()
{
	int a;
	printf("enter a numbers\n");
	scanf("%d",&a);
	printf("%d",(a<<3)+a);
	return 0;
}
