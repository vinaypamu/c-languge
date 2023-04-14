/*1)define a macro to generate swapping function for int, float , double and character datatypes, as a generic function using macros.*/
#include<stdio.h>
#define GEN(dt,p) void swap##dt(dt x,dt y)\
			{\
				dt t; t=x,x=y,y=t;\
				printf(#dt"-"#p" "#dt"-"#p " \n",x,y);\
				return ;\
			}
GEN(int,%d)
GEN(float,%f)
GEN(char,%c)
GEN(double,%lf)
//GEN(long,%hd)
int main()
{
	int x=10,y=20;
	swapint(x,y);
	float a=10.23,b=20.32;
	swapfloat(a,b);
	char c='a',d='b';
	swapchar(c,d);
	double m=1.2,n=2.1;
	swapdouble(m,n);
//	long r=40,s=04;
//	swaplong(r,s);
	return 0;
}


