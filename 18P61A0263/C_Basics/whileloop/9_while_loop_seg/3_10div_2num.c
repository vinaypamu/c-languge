/* write a programme to count and print how many numbers are divisible with 10,bet ween 2 given numbers.*/
#include<stdio.h>
int main()
{
	int i=1,n,a,j=0;
	scanf("%d%d",&n,&a);
	if(n>a)
	{
		i=n;
		n=a;
		a=i;
	}
	if(n%10==0)
		i=n;
	else
	{
	i=n%10;
	i=(n-i)+10;
	}
	while(i<=a)
	{
		if(i%10==0)
		j++;
	      i=i+10;
	}
printf("%d numbers count of 10 div given num",j);
return 0;
}

