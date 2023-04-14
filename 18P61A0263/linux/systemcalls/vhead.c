#include<stdio.h>
#include<unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int a,char *b[])
{
	int sum=0,k=1;
	char buff[2]={0};
	if(a<2)
	{
		write(1,"Command Usage:",15);
		write(1,"vhead -n <arg1> <argb-n>\n",25);
		_exit(0);
	}
	if(b[1][0]=='-')
	{
		int i=1,c=0;
		k++;
		while(b[1][i])
		{
			sum=sum*10;
			c=b[1][i]-48;
			sum=sum+c;
			i++;
		}
	}
	if(sum==0)
		sum=10;
	for(;k<a;k++)
	{
		int fd,x=0;
		fd=open(b[k],O_RDWR);
		if(fd<0)
		{
			printf("==> %s <==\nhead: error reading '%s'\n",b[k],b[k]);
			perror("");
			printf("\n");
			continue;
		}
		while(1)
		{
			int c=1;
			c=read(fd,buff,1);	
			write(1,buff,1);
			if(buff[0]=='\n')
				x++;
			if(x>sum-1||c==0)
				break;
		}
		close(fd);
	}
	_exit(0);

}
