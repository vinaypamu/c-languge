#include"head.h"
#include"head.h"
void sale(int i)
{
	extern int s;
	if(i<=s)
	{
		del(i);
	}
	else
	{
		printf("%d is stock\n",s);
		printf("sales not possible");
	}
	return ;
}

