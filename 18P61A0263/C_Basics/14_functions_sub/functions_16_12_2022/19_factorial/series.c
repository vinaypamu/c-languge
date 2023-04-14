#include"head1.h"
float series(int n)
{
	int i,a;
	float s=0;
	for(i=1;i<=n;i++)
	{
		a=fact(i);
		if(i%2==0)
			s=(s+(-(1.0/a)));
		else
			s=(s+(1.0/a));

		a=-a;
	}
	return s;
}

