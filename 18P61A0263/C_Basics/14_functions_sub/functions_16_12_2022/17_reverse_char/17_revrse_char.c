/*7) 
 * "Write a function to accept a character as input, return the upper case character, if the given character is a lower case alphabet, otherwise return the character as it is.
 * char CaseReverse(char );"*/
#include"head.h"
int main()
{
	char c;
	printf("enter char for reverse case");
	scanf("%c",&c);
	printf("%c",rcase(c));
	return 0;
}

