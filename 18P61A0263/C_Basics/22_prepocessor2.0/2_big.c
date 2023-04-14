/*2)Write down a macro to find the biggest of four numbers using biggest of 2 macro.*/
#include<stdio.h>
#define s(a,b) (a>b?a:b)
#define m(c,d) (c>d?c:d)
#define max ((s(a,b))>(m(c,d))?s(a,b):m(c,d))
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d is biggest of all",max);
	return 0;

}
