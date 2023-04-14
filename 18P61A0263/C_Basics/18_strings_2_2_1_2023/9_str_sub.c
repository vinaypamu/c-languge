//9.match the string with substring and return its index value.
#include<stdio.h>
int main()
{
	int a;
	char str[50],sub[50];
	printf("enter string elements\n");
	scanf(" %49[^\n]s",str);
	printf("enter sub string elements\n");
	scanf(" %49[^\n]s",sub);
	int m(char str[],char sub[]);
	a=m(str,sub);
	if(a>=0)
		printf("%s match index is %d",str,a);
	else
		printf("match not found");
	return 0;
}
int m(char str[],char sub[])
{
	int i,j,a;
	for(i=0;str[i]!=0;i++)
	{
	//	printf("%c -str\n",str[i]);
		if(str[i]==sub[0])
		{
			a=i;
			for(j=0;;j++,a++)
			{
	//			printf("%c-sub\t",sub[j]);
				if(sub[j]=='\0')
					return i;
				if(str[a]!=sub[j])
					break;
			}
	//		printf("\n");

		}
	}
	return -1;
}
