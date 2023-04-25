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
void sort(vin **p,vin *);

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
		{
			sort(&p,n);
			list(p);
		}
		printf("enter y/n for  continue/discontinue \n");
		scanf(" %c",&a);
		if(a=='n')
			break;
	}
	list(p);
	return 0;
}

void input(vin *p)
{
	printf("enter string \n");
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
		sleep(1);
	}
}

void sort(vin **p,vin *l)
{
	int i=0,j=1;
	vin *p1=*p,*p2=*p;
	for(j=1;p1;j++)	
	{
		if((p1->vv1)>(l->vv1))
		{
			i=1;
			l->c=p1;
			if(j==1)
				(*p)=l;
			else
				p2->c=l;
			break;
		}
		p2=p1;
		p1=p1->c;
	}
	if(i!=1)
	{
		p2->c=l;
	}
}
