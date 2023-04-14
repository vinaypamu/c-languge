#include"head1.h"
void fib(int x,int y,int z,int a)
{
	while(a>0)
	{
	x=y;
	y=z;
	z=x+y;
	printf("%d ",z);
	a--;
	}
	return ;
}
