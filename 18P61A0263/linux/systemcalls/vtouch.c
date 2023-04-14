#include<stdio.h>
#include<unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int a,char *b[])
{
	struct timespec *vv;
	int fd,i;
	for(i=1;i<a;i++)
	{
	fd=open(b[i],O_RDWR);
	if(fd<0)
	{
		fd==open(b[i],O_RDWR|O_CREAT,0665);
	}
	else
	{
		futimens(fd,vv);
	}
	close(fd);
	}
	_exit(0);
}

