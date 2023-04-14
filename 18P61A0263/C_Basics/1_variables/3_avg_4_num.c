//4)calculate average of 4 integer numbers and print the output.
#include<stdio.h>
int main()
{
	int a,b,c,d;
	float m;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	m=a+b+c+d;
	m=m/4.0;
	printf("%f",m);
	return 0;
}
