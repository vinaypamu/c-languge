/*Input an alphabet. Output its case reverse.
 * eg1., input: a
 * output: A
 * eg2:
 * input: A
 * output: a*/
#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if((c>=65)&&(c<=90))
		printf("%c is reverse of  %c",c,c+32);
	else if((c>=97)&&(c<=122))
		printf("%c is reverse of %c",c,c-32);
	else 
		printf("invalied");
	return 0;

}
