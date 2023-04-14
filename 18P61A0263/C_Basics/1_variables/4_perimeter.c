//5)calculation of area and perimeter of rectangle,square and circle in three different programs.
#include<stdio.h>
int main()
{
	int l,b,A,a,p1,r;
	float p,p2,ai;
	printf("enter the value of l and b of reactangle");
	scanf("%d%d",&l,&b);
	printf("enter value of a of square");
	scanf("%d",&a);
	printf("enter the radius of r value");
	scanf("%d",&r);
	p2=(3.14*2*r);
	ai=(3.14*r*r);
	A=(a*2);
	p1=(4*a);
	printf("area of react angle=%d\n",l*b);
	p=(2.0/(l*b));
	printf(" peri meter of rectangle p=%f\n",p);
	printf("area and permiter of squar A=%d,p1=%d\n",A,p1);
	printf("circle area ai=%f,primeter p2=%f\n",ai,p2);
	return 0;
}

