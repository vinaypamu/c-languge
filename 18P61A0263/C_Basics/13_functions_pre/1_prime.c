/*1) 
 * Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers using the prime number function written previously. return type should be void.
 * PrintAllPrimes - return type is void. Should use IsPrime()
 * */
#include<stdio.h>
int isprime(int x)
{
	int i=1;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
			return 1;
	}
	return 0;
}
void isprimepre(int x,int y)
{
	for(;x<=y;x++)
	{
		if(isprime(x)==0)
			printf("%d ",x);
	}
	return ;
}
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	isprimepre(a,b);
	return 0;
}


		
