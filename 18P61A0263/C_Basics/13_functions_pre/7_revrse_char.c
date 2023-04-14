/*7) 
 * "Write a function to accept a character as input, return the upper case character, if the given character is a lower case alphabet, otherwise return the character as it is.
 * char CaseReverse(char );"*/
#include<stdio.h>
char rcase(char );
int main()
{
	char c;
	scanf("%c",&c);
	printf("%c",rcase(c));
	return 0;
}
char rcase(char a)
{
	if(a>='a'&&a<='z')
		return a-32;
	else if(a>='A'&&a<='Z')
		return a+32;
	else
		return a;
}
