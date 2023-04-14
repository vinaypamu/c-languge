/*3)define a macro that generates a function that returns the sum of array elements, for different data typed arrays.*/
#include<stdio.h>
#define vr(dt,p) dt rev##dt(dt *ar,int n)\
	{ int i;\
		dt s=0;\
		printf("enter "#dt" values for input\n");\
		for(i=0;i<n;i++)\
			scanf(" "#p,ar+i);\
		for(i=n-1;i>=0;i--)\
		s=s+*(ar+i);\
		return s;\
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
	printf("%d is sum of array elements\n",revint(ar,n));
	float ar1[n];
	printf("%.2f is sum of array elements\n",revfloat(ar1,n));
	double ar2[n];
	printf("%.2lf is sum of array elements\n",revdouble(ar2,n));
	return 0;
	
}
