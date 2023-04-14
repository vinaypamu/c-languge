/*5) Write a function to take an array of structures as argument, and convert all their names into capital letters( strupr implementation). print the data in main function.)*/
#include<stdio.h>
#include<string.h>
#define n 5
struct alpha
{
	char s[50];
}s1[n];
int main()
{
//	struct alpha s1[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter name \n");
		scanf(" %s",s1[i].s);
	}
	void cap(struct alpha s1[]);
	cap(s1);
//		 Strupr(s1[i].s);

	for(i=0;i<n;i++)
	{
//		 strupr(s1[i].s);

		printf("%s\n",s1[i].s);
//		printf(" %s",strupr(s1[i].s));
	}
}
void cap(struct alpha s1[])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		 for(j=0;s1[i].s[j]!=0;j++)
		 {
			 if(s1[i].s[j]<='z'&&s1[i].s[j]>='a')
				 s1[i].s[j]=s1[i].s[j]-32;
		 
		 }
	}
	return ;
}

