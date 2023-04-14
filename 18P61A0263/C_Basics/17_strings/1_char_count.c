/*1) int strlen( char str[]);
 * returns the length of the string.
 *
 * Implementation:
 * //string length is the count of characters till the first null character is found in a string
int strlen_1(char str[])
{
	int i;
	for(i=0; str[i] != '\0'; i++); // count all characters till null character is found.
	return i;  // return the count.
}*/
#include<stdio.h>
int main()
{
	char str[50];
	printf("enter string elements");
	scanf("%s",str);
	int strlen_1(char str[]);
	printf("\n%d is count of characters",strlen_1(str));
	return 0;
}
int strlen_1(char str[])
{
	int i=0;
	for(i=0;str[i]!='\0' && i<50;i++);
		return i;
}
