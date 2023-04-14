/*6)  "Write a trim() function,that will remove the leading and trailing spaces from a string.
 * eg., Input : ""    str  str   ""
 * Output : ""str str""*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
int main()
{
	printf("enter string size\n");
	int s;
	scanf("%d",&s);
	char * const c= (char *) calloc(sizeof(char),s);
	scanf(" %[^\n]49s",c);
	void trim(char *);
	trim(c);
	s=strlen(c);
	char * d = (char * ) realloc(c,s);
	if(d==NULL)
		d=c;
	printf("%s\n",d);
	free(d);
	return 0;

}
void trim(char *c)
{
	int i=0,j=0,k=0;
	while(c[i])
	{
		if(c[i]!=' ')
		{		
			j++;
			k++;
		}
		if(c[i]==' ')
			k++;
		if(j!=k&&c[i]!=' ')
		{
			strcpy(c+j-1,c+k-1);
			break;
		}
		i++;
	}
	i=strlen(c);
	if(strchr(c,' ')==0)
		return;
	j=i-1;
	k=i-1;
	while(i>0)
	{
		if((c[i-1]!=' '&&j--)||c[i-1]==' ')
		{
			k--;
		}
//		printf("%d -j %d -k %d-i\n",j,k,i-1);
		if(j!=k&&c[i-1]!=' ')
		{
			strcpy(c+k+2,c+j+2);
			break;
		}
		i--;
	}
}
