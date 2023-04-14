//2) Create a 2 dimensional array of characters. Take input of strings from the user and print the strings back using only row index.
#include<stdio.h>
#if !(defined r&&defined c)
#error pls enter r and c macro values.
#else	
#define x "%s"
int main()
{
	char s[r][c];
	int i;
		for(i=0;i<r;i++)
		{
			scanf(" %49[^\n]s",s[i]);
		}
	for(i=0;i<r;i++)
	{
		printf(x"\n",s[i]);
	}
	return 0;
}
#endif

