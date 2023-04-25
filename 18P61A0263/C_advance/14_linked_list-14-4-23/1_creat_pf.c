#include<stdio.h>
#include<stdlib.h>
typedef struct vv
{
	char vv1[10];
	struct vv *c;
}vin;
vin * vvcreat(vin *p)
{
	p=(vin *) malloc(sizeof(vin));
	if(p==NULL)
	{
		return NULL;
	}
	p->c=NULL;
	printf("enter string\n");
	scanf(" %9[^\n]s",p->vv1);
	return p;
}
void list(vin *p)
{
	vin *c=NULL;
	while(p)
	{
		c=p;
		printf("%s\n",p->vv1);
		p=p->c;
		free(c);
	}
	free(p);
}
int main()
{

	vin *p=NULL,*n=NULL,*l=NULL;
	char a=0;
	while(1)
	{
		n=vvcreat(p);
		if(p==NULL)
		{
		
			p=n;
		}
		else 
		{
			l->c=n;
		}
		l=n;
		printf("enter y for  continue \n");
		scanf(" %c",&a);
		if(a!='y')
			break;
	}
	list(p);
	return 0;
}

