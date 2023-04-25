#include<stdio.h>
#include<stdlib.h>

typedef struct vv
{
	char vv1[10];
	struct vv *c;
}vin;
void delete(vin **);
void list(vin *p)
{
	while(p)
	{
		printf("%s\n",p->vv1);
		p=NULL;
	}
}
vin * push(vin *p)
{
	p=(vin *) malloc(sizeof(vin));
	if(p==NULL)
	{
		return NULL;
	}
	p->c=NULL;
	printf("enter string\n");
	scanf(" %9[^\n]s",p->vv1);
	list(p);
	return p;
}
int main()
{

	vin *p=NULL,*n=NULL,*l=NULL;
	char a=0;
	while(1)
	{	printf("==>  enter  <==  \n p for push \n d for pop \n n for discontinue\n");
		scanf(" %c",&a);

		if(a=='p')
		{
		n=push(p);
		if(p==NULL)
			p=n;
		else 
			n->c=p;
		p=n;
		}	
		if(a=='d')
		{
			delete(&p);
		}
		if(a=='n')
			break;
	}
	return 0;
}
void delete(vin **p)
{
	vin *p1=*p;
	if((*p)==NULL)
	{
		printf("<== stack is empty ==>\n\n");
		return;
	}
	list(p1);
	*p=p1->c;
	free(p1);
	return;
}
