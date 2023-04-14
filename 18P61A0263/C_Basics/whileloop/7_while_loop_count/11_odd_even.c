/*11) Read two numbers from the user, and print all odd numbers between those numbers and then all even numbers.
eg., inputs: 10   20
output: 
even numbers: 10 12 14 16 18 20
odd numbers: 11 13 15 17 19 */
#include<stdio.h>
int main()
{
	int i,n,x;
	scanf("%d%d",&i,&n);
	x=i;
	printf("even numbers:");
	while(i<=n)
	{
		if (i%2==0)
			printf("%d ",i);
		i++;
	}
	printf("\nodd numbers:");
	while(x<n)
	{
		if(x%2!=0)
			printf("%d ",x);
		x++;
	}
	return 0;
}


