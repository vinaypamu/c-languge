#include<stdio.h>
int main()
{char c;
	scanf("%c",&c);
	switch(c=='a'||c=='i'||c=='e'||c=='O'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		case 1:
			printf("%c is a vowel ",c);
			break;
		default:
			printf("%c is a not vowel its a consonant or not a alphabet",c);
	}
	return 0;
}
