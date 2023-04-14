#include"head.h"
int old(int y,int m,int d,int y1,int m1,int d1)
{
	if((y<y1)||((y==y1)&&(m<m1))||((y==y1)&&(m==m1)&&(d<d1)))
		return 1;
	return 0;
}
