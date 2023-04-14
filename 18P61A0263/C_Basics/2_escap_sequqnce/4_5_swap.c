/*4) Read 2 variable values and swap their values (exchange) and print back.
eg., input 4 5  (stored in a, b)
output : 5 4  ( print a and b)
5) Read 3 variable values and rotate their values and print back.
eg., input 4 5 6 (Stored in a, b,c)
output: 5 6 4 ( print a, b,c)*/

#include<stdio.h>
int main()
{
	int a,b,c,d;
	int v,m,j;
	printf("enter swap 2 values v,m");
	scanf("%d%d",&v,&m);
	printf("enter swap 3 values a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	j=v;
	v=m;
	m=j;
	d=a;
	a=b;
	b=c;
	c=d;
	printf("swap of 2 values %d%d\n",v,m);
	printf("swap of 3 values %d%d%d",a,b,c);
	return 0;


}
