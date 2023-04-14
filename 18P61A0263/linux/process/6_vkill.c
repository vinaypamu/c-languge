#include <sys/types.h>
#include <sys/wait.h>
#include<string.h>
#include<stdio.h>
#include <unistd.h>
#include<stdlib.h>
#include <signal.h>
#define kill(d) execl("user/bin/kill","kill","-"#d,NULL);
int main(int a,char *c[])
{
//	int i=0,j=0;

/*	while(1)
	{
		i=i*10;
		i=i+c[1][j]%10;
		j++;
	}*/
//	kill(i);
//	char s[50];
//	scanf(" %[^\n]49s",s);
//	char *c[4]={"sh","-c",s,NULL};
//	char *c1[]={"ll","-9","937",NULL};
	c[0]="kill";
	c[a+1]=NULL;
	execve("/bin/kill",c,NULL);
	exit(0);

}

