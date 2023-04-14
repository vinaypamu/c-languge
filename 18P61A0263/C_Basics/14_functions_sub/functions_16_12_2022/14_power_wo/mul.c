#include"head.h"
int mul(int x,int y)
{
	int s=0;
	while(x>0)
	{
		s=s+y;
		x--;
	}
	return s;
}
