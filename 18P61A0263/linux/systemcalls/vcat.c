#include<stdio.h>
#include<unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int argc,char * argv[])
{
	int a,b;
	char s[4024];
	if(argc <2)
	{
		printf("Command usage: vcat <argn>\n");
		_exit(0);
	}
	for(int i=1;i<argc;i++)
	{
		a=open(argv[i],O_RDONLY);
		if(a<0)
		{
			printf("cat: %s:\n",argv[i]);
			perror("\b");
			continue;
		}
		while(1)
		{
			b=read(a,s,4023);
			if(b==0)
				break;
			if(b<0)
			{
				printf("cat: %s:\n",argv[i]);
				perror("");
				break;
			}
			printf("cat: %s:\n\n",argv[i]);
			write(1,s,b);
		}
		close(a);
		printf("\n");
	}
//_exit(0);
return 0;
}
