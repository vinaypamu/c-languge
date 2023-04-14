#include"head.h"
int power(int x,int y)
{
	int s=1;
	while(y>0)
	{
		s=s*x;
		y--;
	}
	return s;
}
