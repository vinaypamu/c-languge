/*6)Write a power function ,that takes 2 numbers as input, and calculates power without using * operator.*/
#include<stdio.h>
int power(int ,int );
int mul(int ,int ,int );
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d to the power of %d is %d",a,b,power(a,b));
	return 0;
}
int power(int x,int y)
{
	int i=0,s=x;
for(;y>1;y--)
{
	i=mul(x,i,s);
	s=i;
}
return i;
}
int mul(int x,int y,int z)
{
	int s=0,i=x;
	y=0;
	while(i>0)
	{
		y=y+z;
		i--;
	}
	return y;
}


