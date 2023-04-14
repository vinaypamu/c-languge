/*9)Define a macro to compute the length of a string ,when string is given as argument.*/

#include<stdio.h>
#define s(s) for(i=0;s[i]!=0;i++);
int main()
{
	int i=0;
	char vr[50];
	printf("enter upto 49 string elements\n");
	scanf("%49[^\n]s",vr);
	s(vr)
		printf("%d is the length of the element\n",i);
	return 0;

}
