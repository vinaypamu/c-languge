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
void reverse(vin **);
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
	n=NULL;
	while(1)
	{
		printf("==>  enter   <==\n  i for insert\n  a for after insert\n  b for before insert\n  d for delete\n  n for discontinue \n  p for print\n r for reverse \n");
		scanf(" %c",&a);
		if(a=='i')
			n=atposition(p);
		else if(a=='p')
			list(p);
		else if(a=='a')
			n=insert(p,a);
		else if(a=='b')
			n=insert(p,a);
		else if(a=='d')
			delete(&p);
		else if(a=='n')
			break;
		else if(a=='r')
			reverse(&p);
		if(n!=NULL&&a!='p'&&a!='d'&&a!='r')
				p=n;
	}

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
	while(p)
	{
		printf("%s\n",p->vv1);
		p=p->c;
	}
}

vin * after(vin *c,vin *p)
{
	for(int j=1;;j++)
	{
		if(strcmp(p->vv1,c->vv1)==0)
			return p;
		p=p->c;
		if(p==NULL)
		{
			printf("maximum node comp is reached match not found\n");
			return NULL;
		}
	}
}

vin * before(vin *c,vin * p)
{
	for(int j=1;;j++)
	{
		if((strcmp(p->vv1,c->vv1)==0)&&(j==1))
			return p;
		else if(strcmp(p->c->vv1,c->vv1)==0)
			return p;
		p=p->c;
		if(p->c==NULL)
		{
			printf("maximum node comp is reached match not found\n");
			break;
		}
	}
	return NULL;
}

vin * insert(vin *t,char b)
{
	vin *w=NULL,*m=t;
	w=vvcreat(t);
	if(b=='b')
	{
		t=before(w,m);
loop:
		if(t!=NULL)
		input(w);
	}
	else if(b=='a')
	{
		t=after(w,m);
		goto loop;
	}
	if(t!=NULL&&((b=='a')||(t!=m)||(b=='i')))//return values of function
	{
		w->c=t->c;
		t->c=w;
	}
	else if(t==m&&b!='a')
	{
	w->c=t;
	return w;
	}
	return NULL;
}

vin * atposition(vin *p)
{
	int i;
	vin *w=NULL;
	printf("enter insert position\n");
	scanf("%d",&i);
	if(p==NULL&&i!=1)
		return NULL;
	if(i==1)
	{
		w=vvcreat(p);
		w->c=p;
		return w;
	}
	for(int j=1;j<i-1;j++)
	{
		if(p->c==NULL)
			return NULL;
		p=p->c;
	}
	if(i>0)
	insert(p,'i');
	return NULL;
}

void delete(vin **t)
{
	int i=0,j=0;
	if((*t)==NULL)
		return;
	vin *t1=(*t)->c,*t2=*t;;
	printf("enter position to delete\n");
	scanf("%d",&i);
	for(j=1;j<i-1;j++)
	{
		if(t1==NULL)
		{
			printf("given position is out of boundary\n");
			return ;
		}
		t2=t1;
		t1=t1->c;
	}
	if(i==1)
	{
		*t=(*t)->c;free(t2);
	}
	else if((*t)->c!=NULL)
	{
		t2->c=t1->c;free(t1);
	}
}
void reverse(vin **h)
{
	vin *p=(*h);
	if(p==NULL)
		return;
	vin *c=p->c;
	if(c==NULL)
		return;
	vin *n=NULL;
	while(c)
	{
		n=c->c;
		c->c=p;
		p=c;
		c=n;
	}
	(*h)->c=NULL;
	(*h)=p;
	list(*h);
	return;
}


