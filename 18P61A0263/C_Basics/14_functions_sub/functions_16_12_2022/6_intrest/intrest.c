#include"head.h"
float simple(int x,int y,float z)
{
	float m,si;
	m=y/12.0;
	si=x+((x*m*z)/100);
	return si;
}
