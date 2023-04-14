//2) Read n characters from user, and print if each character is vowel or not
#include<stdio.h>
int main()
{
	int i=0,n;
	scanf("%d",&n);
	while(i<n)
	{
	char c;
	scanf(" %c",&c);
	if(c=='A'||c=='E'||c=='I'|c=='O'||c=='U'||c=='a'||c=='i'||c=='o'||c=='e'||c=='u')
		printf("%c is a vowel ",c);
	else 
		printf("%c is not vowel",c);
	i++;
	}
	return 0;
}
