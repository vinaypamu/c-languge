/*2)define a macro to generate a generic function that takes & prints an array in reverse order. Generate the functions for int, float, double data types.*/
#include<stdio.h>
#define vr(dt,p) void rev##dt(dt *ar,int n)\
	{ int i;\
		printf("enter "#dt" values for input\n");\
		for(i=0;i<n;i++)\
			scanf(" "#p,&ar[i]);\
		for(i=n-1;i>=0;i--)\
		printf(#p" ",*(ar+i));\
		printf("\n");\
	}
vr(int,%d)
vr(float,%f)
vr(double,%lf)
int main()
{
	int n;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int ar[n];
	revint(ar,n);
	float ar1[n];
	revfloat(ar1,n);
	double ar2[n];
	revdouble(ar2,n);
	return 0;
	
}
