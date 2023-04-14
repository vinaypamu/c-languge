/*6) Write a program to find the power of a number to the given number.
eg.,input : 3 5
output: 3 to the power of 5 -> 243*/

#include<stdio.h>
int main()
{
	int i=1,n,a,p=1;
	scanf("%d%d",&a,&n);
	while(i<=n)
	{
		p*=a;
		i++;
	}
	if(a==0&&n==0)
		p=0;
	printf("%d",p);
	return 0;
}

