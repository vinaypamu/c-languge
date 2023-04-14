#include"head.h"
void isprimepre(int x,int y)
{
	for(;x<=y;x++)
	{
		if(isprime(x)==0)
			printf("%d ",x);
	}
	return ;
}
