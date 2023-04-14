//9	Write a program to print an integer in binary format using arrays


#include<stdio.h>
int main()
{
	int i,j,n,b=0;
	printf("enter a decimal number");
	scanf("%d",&n);
	i=n;
	for(;n>0;)
	{
		b++;
		n=n/2;
	}
	int vv[b];
	for(j=0;j<b;j++)
	{
		vv[j]=i%2;
		i=i/2;
	}
	for(;b>0;b--)
		printf("%d ",vv[b-1]);
	return 0;
}


