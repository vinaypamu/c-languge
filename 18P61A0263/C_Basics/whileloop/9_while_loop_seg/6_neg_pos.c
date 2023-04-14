//write a program to read n numbers from user. And print a count of how many of them were negative numbers, and how many of them were positive. 0 is not counted.
#include<stdio.h>
int main()
{ int n,i=0,j=0;
	scanf("%d",&n);
	while(n>0)
	{
	int n1;
	scanf("%d",&n1);
	if(n1>0)
		j++;
	else if(n1<0)
		i++;
	n--;
	}
	printf("%d is no. of +ve %d is no. of -ve no.",j,i);
	return 0;
}


