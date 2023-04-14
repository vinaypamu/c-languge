/*6)if sale price and profit of n items is given find the cost price of 1 item.
eg., number of items : 15
sale price of 15 items : 500
profit : 50
cost price of each item: 30*/
#include<stdio.h>
int main()
{
	int a,t,c,n,p,b;
	printf("enter the values of a,t,c,p");
	scanf("%d%d%d%d",&a,&t,&c,&p);
	b=t-p;
	n=(float)b/a;
	printf("%d",n);
	return 0;
}

