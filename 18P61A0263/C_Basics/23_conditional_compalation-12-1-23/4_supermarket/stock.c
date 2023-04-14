#include"head.h"
#include"head.h"
int s=1000;
void avail()
{
	printf("%d is available stock",s);
}
void stock(int i)
{
	s=s+i;
	return ;
}
void del(int i)
{
	s=s-i;
	return ;
}

