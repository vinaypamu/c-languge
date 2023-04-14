#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	float v;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	v=((float)(a+b+c+d+e+f)/6);
	printf("%.2f",v);
	return 0;
}

