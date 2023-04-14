#include"../inc/vr.h"
static int s=100;
void avail()
{
	printf("%d is available stock",s);
}
int stocklim(int x)
{
	x=s;
	return x;
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
int s1(int a)
{
	a=s;
	return a;
}
int del1(int a)
{
	int i;
	i=s;
	s=0;
	return i;
}
int pu(int i,int x)
{
	int j=0;
	j=x-s;
	s=1000;
	return j;
}




