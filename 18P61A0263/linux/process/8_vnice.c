// 8. write a program to create a your own nice commad 
#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int a;
	pid_t cpid;
	getchar();
	cpid=fork();
	if(cpid==0)
	{
		nice(atoi(argv[1]));
//		sleep(150);
		a = execlp(argv[2],argv[2],NULL);
		if(a<0)
			perror("EXEC FAIL");
	}

	return 0;
}

