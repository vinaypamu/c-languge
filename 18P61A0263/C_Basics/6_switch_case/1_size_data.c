#include<stdio.h>
int main()
{
	int x;
	float f;
	double d;
	long double l;
	printf("%lu\n %lu\n",sizeof(x),sizeof(int));
	printf("%lu\n %lu\n",sizeof(f),sizeof(float));
	printf("%lu\n %lu\n",sizeof(d),sizeof(double));
	printf("%lu\n %lu\n",sizeof(l),sizeof(long double));
	printf("%lu\n %lu\n",sizeof(x),sizeof(unsigned int));
	printf("%lu\n %lu\n",sizeof(short int),sizeof(unsigned short int));
	printf("%lu\n %lu\n",sizeof(long int),sizeof(unsigned long int));
	printf("%lu\n %lu\n",sizeof(signed char),sizeof(unsigned char));
	printf("%lu\n ",sizeof(unsigned int));
	return 0;
}
