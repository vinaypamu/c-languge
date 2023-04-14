#include"vr.h"
#include<string.h>
void scan(std s[])
{
	int i;
	for(i=0;i<2;i++)
	{
	printf("enter id ,name,date,month,year,joing date ,month,year,gender\n");
	scanf("%d %s%d%d%d%d%d%d %c",&s[i].ID,s[i].name,&s[i].dob.d,&s[i].dob.m,&s[i].dob.y,&s[i].doj.d,&s[i].doj.m,&s[i].doj.y,&s[i].gender);
	}
	return ;
}
void swap(std s1,std s[])
{
	int i;
	for(i=0;i<1;i++)
	{		
		s1=s[i];
		s[i]=s[i+1];
		s[i+1]=s1;
	}
}
void print(std s[])
{
	int i;
	for(i=0;i<2;i++)
	printf("id-%d\n name-%s\n %d-%d-%d\n %d-%d-%d\n gender-%c\n",s[i].ID,s[i].name,s[i].dob.d,s[i].dob.m,s[i].dob.y,s[i].doj.d,s[i].doj.m,s[i].doj.y,s[i].gender);
	return ;
}

