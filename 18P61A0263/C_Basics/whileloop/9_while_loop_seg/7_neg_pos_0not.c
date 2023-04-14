/*write a program to read n numbers from user. And print a count of how many of them were negative numbers, and how many of them were positive. if the user enters a 0, loop should stop without reading remaining numbers.*/
#include<stdio.h>
int main()
{
	int n,i=0,j=0;
	scanf("%d",&n);
	while(n>0)
	{int a;
		scanf("%d",&a);
		if(a>0)
			i++;
		else if(a<0)
			j++;
		else if(a==0)
			n=0;
		n--;
	}
	printf("%d is no. of +ve no,s and %d is no. of -ve no.s",i,j);
	return 0;
}
