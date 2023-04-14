//6)declare different pointers with different data types. Print the sizes of the pointer variables using sizeof operator. Why do u think all of them are giving same size irrespective of the data type?
#include<stdio.h>
int main()
{
	int *p;
	float *j;
	long double *m;
	char *c;
	printf("%lu-p,%lu-*p\n",sizeof(p),sizeof(*p));
	printf("%lu-j,%lu-*j\n",sizeof(j),sizeof(*j));
printf("%lu-p,%lu-*p\n",sizeof(m),sizeof(*m));
printf("%lu-p,%lu-*p\n",sizeof(c),sizeof(*c));
}
