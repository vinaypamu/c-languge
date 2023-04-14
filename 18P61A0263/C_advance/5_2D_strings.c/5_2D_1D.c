/*5) read a set of words into a 2 dimentional array. Make a single sentence out of the words with space as a delimitter and store in another single dimentional character array and display. you can use string concatenation function to do this.*/
#if !(defined r&&defined c)
#error pls enter r and c macro values
#else
#include<stdio.h>
#include<string.h>
int main()
{
	char s[r][c],s1[r*c]={'\0'};
	int i,j;
	for(i=0;i<r;i++)
	{
		scanf("%s",s[i]);
	}
	j=0;
	for(i=0;i<r;i++)
	{
		strcat(s1+j,s[i]);
		j=strlen(s1);
		*(s1+j)=' ';
		j=j+1;
	}
	printf("%s\n",s1);
return 0;
}
#endif
