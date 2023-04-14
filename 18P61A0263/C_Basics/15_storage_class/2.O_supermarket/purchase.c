#include"head.h"
int pur(int i)
{
	int s=1000,x=0;
	static int ip=0;
	x=stocklim(x);
	scanf("%d",&i);
	if((i+x)<s)
	{
		ip=ip+i;
		stock(i);
		return ip;
	}
	else 
	{
		int a;
		printf("\nto fill the stock for available space enter 1 enter 2 for cancel the purchase");
		scanf("%d",&a);
		if(a==1)
		{	
			i=pu(i,s);
			ip=ip+i;
			return ip;
		}
		else
			return 0;
	}

}


