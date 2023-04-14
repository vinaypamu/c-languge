#include <sys/types.h>
#include <sys/wait.h>
#include<stdio.h>
#include <unistd.h>
#include<stdlib.h>
int main(int a,char *argv[])
{
#define loop(b)  char * c[b];
	int st;
	pid_t pid=fork();
	if(pid==0)
	{
	char d[50];
	printf("enter command $");
	scanf(" %[^\n]49s",d);
	char *c[]={"ls","-c",d,NULL};
//	loop(a);
//	c[0]="sh";
//	c[1]="-c";
/*	int i=0,j=1;
	while(j<a)
	{
		c[i]=argv[j];
		printf("%s\n",c[i]);
		i++;j++;
	}
	c[i+1]=NULL;*/
	execve("/bin/sh",c,NULL);
	}
	if(pid!=0)
		wait(&st);
	exit(0);
}
