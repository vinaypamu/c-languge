#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct vv
{
	struct vv *pre;
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
		{
			l->c=n;
			n->pre=l;
		}
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
	p->pre=NULL;
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
		w->pre=t;
		t->c=w;
	}
	else if(t==m&&b!='a')
	{
	w->c=t;
	w->pre=NULL;
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
	{	w=vvcreat(p);
		w->c=p;
		p->pre=w;
		return w;
	}
	for(int j=1;j<i-1;j++)
	{
		if(p->c==NULL)
			return NULL;
		p=p->c;
	}
	if(i>1)
	insert(p,'i');
	return NULL;
}

void delete(vin **t)
{
	int i=0,j=0;
	if((*t)==NULL)
	{
		printf("<== no nodes are present ==>\n\n");
		return;
	}
	vin *t2=*t;
	printf("enter position to delete\n");
	scanf("%d",&i);
	for(j=1;j<i;j++)
	{
		if(t2==NULL)
		{
			printf("given position is out of boundary\n");
			return ;
		}
		t2=t2->c;
	}
	if(i==1)
	{
		if((*t)->c==NULL)
		{
			free(*t);
			*t=NULL;
			return;
		}
		*t=(*t)->c;
		(*t)->pre=NULL;free(t2);
	}
	else
	{
		t2->pre->c=t2->c;
		free(t2);
	}
}
void reverse(vin **h)
{
	vin *p=(*h),*c=NULL;
	if(p==NULL)
	{
		printf("there is no node are present\n");
		return;
	}
	while(p)
	{
		c=p->pre;
		p->pre=p->c;
		p->c=c;
		if(p->pre==NULL)
			(*h)=p;
		p=p->pre;
	}
	list(*h);
	return;
}

