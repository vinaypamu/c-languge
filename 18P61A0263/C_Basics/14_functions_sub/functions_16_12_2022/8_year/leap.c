#include"head.h"
int year(int x)
{
	if((x%100!=0&&x%4==0)||(x%400==0))
		return 1;
	return 0;
}
