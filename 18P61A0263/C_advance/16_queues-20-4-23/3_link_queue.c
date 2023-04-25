#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct vv
{
	char vv1[10];
	struct vv *c;
}vin;

vin * vvcreat(vin *p);
void list(vin *p);
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
		printf("==>  enter   <==\n  e for enque\n  d for deque\n  n for discontinue \n ");
		scanf(" %c",&a);
		if(a=='e')
		{
			n=vvcreat(p);
			if(p==NULL)
				p=n;
			else 
				l->c=n;
			l=n;

		}
		else if(a=='d')
			delete(&p);
		else if(a=='n')
			break;
	}
	list(p);
	return 0;
}

void input(vin *p)
{
	printf("enter string \n");
	scanf(" %9[^\n]s",p->vv1);
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
//	while(p)
//	{
		printf("%s\n",p->vv1);
//		p=p->c;
//	}
}

void delete(vin **t)
{
	vin *t2=*t;
	if((*t)==NULL)
	{
		printf("queue is empty deque is not possible\n");
		return;
	}
	*t=(*t)->c;
	list(t2);free(t2);
}

