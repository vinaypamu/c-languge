/*6) a set of words seperated by commas is given as input as a single string. Divide the words at comma, and store them as individual strings in a two dimentional array and display the array.*/
#if !(defined SIZE)
#error plz enter SIZE of the string.
#else
#include<stdio.h>
int main()
{
	char s1[SIZE]={'\0'};
	int i,j=0;
	printf("enter string elements\n");
	scanf(" %[^\n]s",s1);
	for(i=0;s1[i]!=0;i++)
	{
		if(s1[i]==','&&s1[i+1]!='\0')
			j++;
	}
	char s[j+1][SIZE];
	int l=0;
	for(i=0;s1[l]!='\0';i++)
	{
		int k;
		for(k=0;;l++,k++)
		{
			s[i][k]=s1[l];
			if(s1[l]==',')
			{
				s[i][k]='\0';
				l++;
				break;
			}
			else if(s1[l]=='\0')
				break;
		}
	}
	for(i=0;i<j+1;i++)
	{
		printf("%d -i ",i);
		printf("%s\n",s[i]);
	}
	return 0;
}
#endif
