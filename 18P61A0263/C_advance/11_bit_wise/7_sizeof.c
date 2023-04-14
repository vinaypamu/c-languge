//7. WAP to implement the sizeof operation using the bitwise operator.  
#include<stdio.h>
int main()
{
	int a=1,i=0,j=0;
	char c=1;
	for(i=0;a<<i;i++);
	for(j=0;c<<j;j++);
	printf("int size :%d\n",i/8);
	printf("char size :%d\n",j/8);


}

