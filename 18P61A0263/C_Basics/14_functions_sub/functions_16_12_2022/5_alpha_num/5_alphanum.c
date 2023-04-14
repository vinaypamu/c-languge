/*5)
 *
 * Write a function to determine if a character is alphanumeric or not.
 * Hint: int fun_alpha_num(char c). 
 *
 * eg., 5
 * character is numeric
 *
 * eg., a
 * character is alphabet
 *
 * eg., %
 * character is special character
 * */
#include"head.h"
int main()
{
	char c;
	scanf(" %c",&c);
	if(alphanum(c)==2)
		printf("%c is numarical",c);
	else if(alphanum(c))
		printf("%c is alphabet",c);
	else 
		printf("%c is special char ",c);
	return 0;
}


