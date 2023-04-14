#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
void mywait();
int main()
{
	mywait();
}
void mywait()
{
	int fd;
	char c[3]={0};
	fd=open("abc",O_RDONLY);
sleep(5);
while(1)
{
	//lseek(fd, SEEK_SET, 0);
	lseek(fd,0,SEEK_SET);
	read(fd,c,1);
	if(c[0]=='1')
	{
		close(fd);
		break;
	}
	write(1,c,1);
	sleep(2);
}
}
