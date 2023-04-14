//4) read a set of names using scanf and find out how many names are duplicate.
#include<stdio.h>
#if !(defined r&&defined c)
#error pls enter r and c macro values
#else
#include<string.h>
int main()
{
	char s[r][c];
	int i,j,k=0,m=0,z=0,f=0;
	for(i=0;i<r;i++)
	{
		printf("enter %d name\n",i);
		scanf(" %49[^\n]s",s[i]);
	}
	for(i=0;i<r;i++)
	{
		f=k;
		for(j=i;j<r;j++)
		{
			if(!strcmp(s[i],s[j+1]))
				k++;
		}
		z=0;
		for(m=i;m>=0;m--)
		{
			if(!strcmp(s[i],s[m]))
				z++;
		}
		if(z>1)
			k=f;
	}
	printf("num of duplicates in a string %d\n ",k);
	return 0;
}
#endif
