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
	if(c>64)
		if(c<=90)
			printf("%c revrse case is %c",c,c+32);
		else if(c>96)
			if(c<=122)
				printf("%c reverse case is %c",c,c-32);
			else
				printf("invalied");
		else
		printf("invalied char %c",c);
	else 
		printf("ivalied char %c",c);
	return 0;
}
