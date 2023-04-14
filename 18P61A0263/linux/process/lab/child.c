#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include<stdio.h>
int main()
{
	void myexit();
	myexit();
}
void myexit()
{
	int fd;
	char c[3];
	fd=open("abc",O_RDWR);
	printf("%d-fd\n",fd);

	
	while(1)
	{
		int a;

	lseek(fd,0,SEEK_SET);
//	printf("%d -lseek\n",a);
	read(0,c,1);
	getchar();
	//printf("%d -read\n",a);
	write(fd,c,1);
	//printf("%d -write\n",a);
	if(c[0]=='1')
		break;
	}
	sleep(2);
	c[0]='0';
	lseek(fd,0,SEEK_SET);
	write(fd,c,1);
	close(fd);	
}

