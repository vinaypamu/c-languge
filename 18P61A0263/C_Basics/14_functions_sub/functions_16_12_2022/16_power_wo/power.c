#include"head.h"
int power(int x,int y)
{
	int i=0,s=x;
for(;y>1;y--)
{
	i=mul(x,i,s);
	s=i;
}
return i;
}
int mul(int x,int y,int z)
{
	int s=0,i=x;
	y=0;
	while(i>0)
	{
		y=y+z;
		i--;
	}
	return y;
}


