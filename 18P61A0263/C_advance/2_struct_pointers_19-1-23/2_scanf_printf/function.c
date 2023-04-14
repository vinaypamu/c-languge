#include"vr.h"
void scan(std s[])
{
	printf("enter id ,name,date,month,year,joing date ,month,year,gender\n");
	scanf("%d %s%d%d%d%d%d%d %c",&s->ID,s->name,&s->dob.d,&s->dob.m,&s->dob.y,&s->doj.d,&s->doj.m,&s->doj.y,&s->gender);
	return ;
}
void print(std s)
{
	printf("id-%d\n name-%s\n %d-%d-%d\n %d-%d-%d\n gender-%c\n",s.ID,s.name,s.dob.d,s.dob.m,s.dob.y,s.doj.d,s.doj.m,s.doj.y,s.gender);
	return ;
}

/*
void tp(float *si,std s)
{
	int i,sum=0;
	for(i=0;i<6;i++)
	{
		sum=sum+s.marks[i];
	}
	*si=(sum/6.0);
	return ;
}*/
