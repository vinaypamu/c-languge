#include"stdio.h"
int fact(int x)
{
	int i=1,p=1;
	for(i=1;i<=x;i++)
	{
		p=p*i;
	}
	return p;
}
