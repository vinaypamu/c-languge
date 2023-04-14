#include"head.h"
int DateCompare(int d,int m,int y,int d1,int m1,int y1)
{
	if((y<y1)||((y==y1)&&(m<m1))||((y==y1)&&(m==m1)&&(d<d1)))
		return 1;
	else 
		return 0;
}

