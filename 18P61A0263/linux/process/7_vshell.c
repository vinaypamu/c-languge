#include <sys/types.h>
#include <sys/wait.h>
#include<string.h>
#include<stdio.h>
#include <unistd.h>
#include<stdlib.h>
 
void strcat1(char *c1 , char* d); 
int strmatch1(char d[] , char );
int main()
{
	int status=0,k=0;

	while(1)
	{
	pid_t pid=fork();
	char d[50];
	scanf("%[^\n]49s",d);
	if(pid==0)
	{
//	printf("enter command $");
	printf("%s\n",d);
	if((strcmp(d,"exit"))==0)
		exit(0);
/*	while(d[status])
	{ 
		if(d[status]==' ')
			k++;
		status++;
	}*/
	status=0;
	char * c[]={d,d+(strmatch1(d,' ')),d+(strmatch1(d,' ')),d+(strmatch1(d,' ')),d+(strmatch1(d,' ')),0};
	while(c[status])
	{
		if((strcmp(c[0],c[status+1]))==0)
		{
			c[status+1]=NULL;
		}
		status++;
	}
	status=0;
	char *c1= (char *) calloc(1,(strlen(d)+strlen("/usr/bin/")));
	strcat(c1,"/usr/bin/");
	strcat1(c1,d);
	const char *p=c1;
	execve(p,c,NULL);
	exit(0);
	}
	if(pid !=0)
	{
		wait(&status);
		if(strcmp(d,"exit")==0)
			exit(0);
		else
			continue;
	}
	}
	exit(0);
}
int strmatch1(char d[],char p)
{
	static int i=0;
	while(d[i])
	{
		if(d[i]==p)
		{
			d[i]=0;
			return ++i;
		}
		i++;

	}
	return 0;
}
void strcat1(char *c1 , char* d)
{
	while(*c1)
	{
		c1++;
	}
	while(*d)
	{
		if(*d==' ')
			return;
		*c1=*d;
		c1++,d++;
	}
	return ;
}
