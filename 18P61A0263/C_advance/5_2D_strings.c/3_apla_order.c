//3) Implement bubblesort function and sort the strings in ascending alphabetical order.
#include<stdio.h>
#if !(defined r&&defined c)
#error pls enter r and c macro values
#else
#include<string.h>
int main()
{
	char s[r][c];
	int i,j;
	for(i=0;i<r;i++)
	{
		scanf(" %49[^\n]s",s[i]);
	}
	void compare(char s[][50]);
	compare(s);
	for(i=0;i<r;i++)
	{

		printf(" %s\n",s[i]);
	}
	return 0;
}
void compare(char s[][50])
{
	int i=0,j=0,k=0;
	char s1[1][c]={'\0'};
	for(i=0;i<r-1;i++)
	{
		int l=0;
		for(j=0;j<r-1-i;j++)
		{
			k=strcmp(s[j],s[j+1]);
			if(k>0)
			{
				strcpy(s1[1],s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],s1[1]);
				l++;
			}
		}
			if(l==0)
				return ;
	}
	return ;
}
#endif
