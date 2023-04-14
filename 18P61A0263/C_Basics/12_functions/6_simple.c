/*6)
 * Write a function that takes principle, rate of interest and time in months as input arguments, and returns the total amount to be repayed, after calculation of simple interest.*/
#include<stdio.h>
float simple(int x,int y,float z)
{
	float m,si;
	m=y/12.0;
	si=x+((x*m*z)/100);
	return si;
}
int main()
{
	int p,m;
	float i;
	scanf("%d%d%f",&p,&m,&i);
	printf("%f is totall repay",simple(p,m,i));
	return 0;
}
