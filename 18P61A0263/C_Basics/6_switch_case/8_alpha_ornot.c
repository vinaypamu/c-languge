//8)check if a character is alphabet or not
#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
		((c>='A'&&c<='Z')||(c>='a'&&c<='z'))?printf("%c is a alphabet",c):printf("%c is not a alphabet",c);
		//(c>='A')?(c<='Z')?printf("%c alphabet",c):(c>='a')?(c<='z')?printf("%c is a alphabet",c):("%cis not a alphabet",c):printf("%c its not a alphabet",c):printf("%c its a not alphabet",c);
	return 0;
}
