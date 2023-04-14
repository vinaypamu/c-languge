/*3)
write a function that can take an integer as input and return 1, if the number is prime number and 0 if it is not prime and print appropriate output message.
 * return type is integer.
 * IsPrime - returns int (0,1)*/
#include"head.h"

int main()
{
	int a;
	scanf("%d",&a);
	if(isprime(a))
		printf("%d num is not prime ",a);
	else
		printf("%d is a prime num",a);
	return 0;
}


