#include"head.h"
int sale(int i)
{
	int a=0,b=0;
	static int id=0;
	a=s1(a);
	if(i<=a)
	{
		id=id+i;
		del(i);
		return id;

	}
	else
	{
		printf("\n1 for to sale available stock\n2 for cancle the sale");
		scanf("%d",&b);
		if(b==1)
		{
			b=del1();
			printf("\n%dis b value",b);
			id+=b;
			return id;

		}
		else 
			return 0;
	}
}

