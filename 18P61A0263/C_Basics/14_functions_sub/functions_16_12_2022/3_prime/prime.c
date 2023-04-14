#include"head.h"
int isprime(int x)
{
	int i=1;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
			return 1;
	}
	return 0;
}
