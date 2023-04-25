#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 #include <unistd.h>
typedef struct vv
{
	int  vv1;
	struct vv *c;
}vin;

vin * vvcreat(vin *p);
void list(vin *p);
void sort(vin **p);
void delete(vin **t);
vin * after(vin *c,vin *p);
vin * before(vin *c,vin * p);
vin * insert(vin *t,char b);
vin * atposition(vin *p);

int main()
{
	vin *p=NULL,*n=NULL,*l=NULL;
	char a=0;
	while(1)
	{
		n=vvcreat(p);
		if(p==NULL)
			p=n;
		else 
			l->c=n;
		l=n;
		printf("enter y/n for  continue/discontinue \n");
		scanf(" %c",&a);
		if(a=='n')
			break;
	}
	sort(&p);
	list(p);
	return 0;
}

void input(vin *p)
{
	printf("enter num \n");
		scanf("%d",&p->vv1);
}

vin * vvcreat(vin *p)
{
	p=(vin *) malloc(sizeof(vin));
	if(p==NULL)
		return NULL;
	p->c=NULL;
	input(p);
	return p;
}

void list(vin *p)
{
	while(p)
	{
		printf("%d\n",p->vv1);
		p=p->c;
	}
}

void sort(vin **p)
{
	int i=1,j=1,k=0;
	vin *p1=*p,*c=*p,*n=*p;
	for(i=0;;i++)
	{	k=0;
		for(j=0,c=(*p),p1=c,n=c->c;n;j++)
		{
			if(c->vv1>n->vv1)
			{
				k=1;
				c->c=n->c;
				n->c=c;
				if(j==0)
					(*p)=n;
				else
					p1->c=n;
				p1=n;
			}
			else
			p1=c;
			if(p1!=NULL)
			c=p1->c;
			if(c!=NULL)
			n=c->c;
		}
		if(k==0)
			break;
	}

}
