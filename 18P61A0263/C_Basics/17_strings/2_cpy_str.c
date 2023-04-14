/*2) void strcpy ( char d[] . char s[]);
 * copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).
 *
 * Implementation:
 *
 * void strcpy_1( char d[], char s[])
 * {
 * int i = 0;
 * while( s[i] != '\0')
 * {
 * d[i] = s[i];
 * i++;
 * }
 * d[i] = '\0';
 * }
 * */
#include<stdio.h>
int main()
{
	char d[15]="kernal masters",s[15];
	void cpy(char a[],char b[]);
	cpy(d,s);
	printf("%s\n",d);
	printf("%s\n",s);
	return 0;
}
void cpy(char a[],char b[])
{
	int i=0;
	for(i=0;i<15;i++)
	{
		b[i]=a[i];
	}
	return ;
}


