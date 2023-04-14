/*7) Implement your own realloc function using malloc and free using below steps: 
  - Allocate memory for new size using malloc
  - copy data from old address to new address
  - release the old address
  - return the new address*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *p=NULL;
	printf("enter the num elements \n");
	int a;
	scanf("%d",&a);
	p=(char *) malloc(sizeof(char)*a);
	printf("enter string elements\n");
//	printf("%p  %p  %lu\n",&p+1,&p,((char *)(&p+1))-(char *)(&p));
	scanf(" %[^\n]s",p);
	printf("%s\n",p);
	printf("enter reallocation elements\n");
	int b;
	scanf("%d",&b);
	char * realloc1(char *,int);
	char * v=realloc1(p,b);
	printf("%s\n",v);
	return 0;
}
char * realloc1(char *p,int b)
{
	int i=0;
	char *m=(char *) malloc(sizeof(char)*b);
	if(m==NULL)
		return p;
	while(i<b)
	{
		m[i]=p[i];
		i++;
	}
	free(p);
	return m;
}
