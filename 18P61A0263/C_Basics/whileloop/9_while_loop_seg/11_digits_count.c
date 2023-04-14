//11) count the number of digits in a given integer.
#include<stdio.h>
int main()
{
	int n,s=0;
	scanf("%d",&n);
	while(n)
	{
		n=n/10;
		s++;
	}
	printf("count of the digites in a given number %d\n",s);
	return 0;
}

