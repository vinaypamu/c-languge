#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include<string.h>
#include<stdio.h>
#include <unistd.h>
#include<stdlib.h>
#include <sys/types.h>
#include<pthread.h>
char m[6]={0};
pthread_t thread1,thread2;
void con_sig(int sig) //user defined consumer signal
{
	int i=0;
	//	pid_t tid=gettid();
	char ch[6]={0};
	for(i=0;i<5;i++)
	{
		ch[i]=m[i];
	}
	printf("con: %s \n",ch);
	sleep(1);
	pthread_kill(thread1, SIGUSR1);//raising signal to producer thread1.
	//tkill(tid-1,SIGUSR2);
}
void *consumer(void *arg) //consumer thread
{
	void * ret=NULL;
	//	pid_t tid=gettid();
	ret = signal(SIGUSR2,con_sig);//invoking user defined signal function with raised signal.
	if(ret ==NULL)
	{
		pthread_kill(thread1, SIGUSR1);//intial signal raise for producer to start the process.
	}
	while(1)
	{		
		pause();//waiting for signal.
	}
}

void pro_sig(int sig)
{
	int i=0;
	//	pid_t tid=gettid();
	for(i=0;i<5;i++)
	{
		m[i]='0'+i;
	}
	printf("pro: %s\n\t",m);
	sleep(1);
	pthread_kill(thread2,SIGUSR2);//raising sinal to consumer.
	//	tkill(tid+1,SIGUSR1);
}
void * producer(void *arg)
{
//	printf("khjhdbh\n");
	(void) signal(SIGUSR1,pro_sig);//intializing user defined singnle function with raiseed signal.
	while(1)
	{
		pause();

	}
}
int main()
{
	int ret;

	void *exit_;
	ret= pthread_create(&thread1,NULL,producer,NULL);
	if(ret !=0)
	{
		perror("Thread creation faild");
		exit(1);
	}
	ret= pthread_create(&thread2,NULL,consumer,NULL);	
	if(ret !=0)
	{
		perror("Thread creation faild");
		exit(1);
	}
	ret = pthread_join(thread1,&exit_);
	if(ret !=0)
	{
		perror("Thread join faild");
		exit(1);
	}
	ret = pthread_join(thread2,&exit_);
	if(ret !=0)
	{
		perror("Thread join faild");
		exit(1);
	}
	printf("Thread joined\n");
	exit(0);
}


