#include"head.h"
int CalculateNetSalary(int t,int l,int m,int y)
{
	int d,c;
	d=NoOfDaysinMonth(m,y);
	c=t-l*t/(float)d;
	return c;
}
