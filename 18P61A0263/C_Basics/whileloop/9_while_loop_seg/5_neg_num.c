/*write a program to read n numbers from key board till the user enters a -ve number add all the +ve numbers enterd and print the sum of the numbers and how many numbers were enterd */ 
#include<stdio.h>
int main()
{
	int c=1,i,n,a=0;
	printf("enter n value");
	scanf("%d",&n);
	while(c<=n)
	{
		printf("enter +ve number");
		scanf("%d",&i);

		if(i<0)
		{
			c=n+1;
		}
	if(i>=0)	
	a=a+1;
	c++;
	}
	printf("%d \n",a);
	return 0;
}

