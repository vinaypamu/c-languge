#include<stdio.h>
void swp(int *p,int *q)
{
	int t=*p;
	*p=*q;
	*q=t;
	return ;
}
