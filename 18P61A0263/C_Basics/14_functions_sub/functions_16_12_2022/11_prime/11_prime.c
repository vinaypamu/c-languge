/*1) 
 * Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers using the prime number function written previously. return type should be void.
 * PrintAllPrimes - return type is void. Should use IsPrime()
 * */
#include"head.h"
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	isprimepre(a,b);
	return 0;
}


		
