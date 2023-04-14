//7)Take an integer as input and print its magnitude (remove sign).
#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	x=(x>=0)?x:-x;
	printf("%d is positive",x);
	return 0;
}
