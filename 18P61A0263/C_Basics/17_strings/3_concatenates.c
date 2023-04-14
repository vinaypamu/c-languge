/*3) void strcat( char d[] , char s[]);
 *
 * concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d )
 * eg., char d[] = "Kernel";
 * char s[] = "Masters";
 *
 * output: after concatenation d[] becomes " KernelMasters";*/
#include<stdio.h>
int main()
{
	int n;
	printf("enter size of the array\n");
	scanf("%d",&n);
	char r[n*2],v[n];
	printf("enter string elements for 1st array\n");
	scanf(" %[^\n]s",r);
	printf("enter string elements for 2nd array\n");
	scanf(" %[^\n]s",v);
	void scat(char k[],char m[] ,int );
	scat(r,v,n);
	printf("\n%s",r);
	return 0;
}
void scat(char r[],char v[],int n)
{
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		if(r[i]=='\0')
			break;
	}
	for(j=0,(n=n*2);i<n;i++,j++)
	{
		r[i]=v[j];
		if(v[j]=='\0')
			break;
	}
	return ;
}

