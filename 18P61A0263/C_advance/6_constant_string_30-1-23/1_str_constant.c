/*1) implement your own string copy function.
 *
 * try calling the string copy function by sending the below as input:
 * 1) string constant as destination and string variable as source
 * 2) string variable as destination and string constant as source
 * 3) string variable as destination and string variable as source
 * 4) string constant as destination and string constant as source
 *   note down the output and analyze the reasons.*/
#include<stdio.h>
int main()
{
	char s[50]="vinay pamu";
	void scpy(char *s,char *s1);
//	scpy("string array",s);
//	printf("%s-1\n",s);
	scpy(s,"pamu vinay");
	printf("%s-2\n",s);
	scpy(s,s);
	printf("%s-3\n-3",s);
	scpy("array mean aree arrere","arereareeee");
	return 0;
}
void scpy(char *d,char *s)
{
	int i=0;
	for(i=0;s[i];i++)
	{
		d[i]=s[i];
	}
	d[i]=0;
	return ;
}
