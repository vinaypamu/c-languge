/*4)
Write a function that takes an integer parameter and prints its multiplication table.return type should be void.*/
#include<stdio.h>
void mul(int x,int y)
{
	printf("%d*%d=%d\n",x,y,x*y);
	return ;
}
int main()
{
	int a,b;
	scanf("%d",&a);
	for(b=1;b<=10;b++)
		mul(a,b);
	return 0;
}


