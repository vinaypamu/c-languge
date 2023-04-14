#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int argc,char * argv[])
{
	int a,b;
	if(argc>3)
	{
		printf("cp: target '%s' is not a directory\n",argv[argc-1]);
		printf("command usage:vcp <arg1> <arg2>\n");
		return 0;
	}

	char s[4024];
	a=open(argv[1],O_RDONLY);
	if(a<0)
	{
	printf("cat: %s:\n",argv[1]);
	perror("\b");
	return 0;
	}
	b=strcmp(argv[1],argv[2]);
	if(b==0)
	{
		printf("cp: '%s' and '%s' are the same file\n",argv[1],argv[2]);
		return 0;
	}
	b=open(argv[2],O_WRONLY| O_CREAT,0776);
	while(1)
	{
		int c;
		c=read(a,s,4023);
		printf("%d-- \n",c);
			if(c==0)
			break;
		if(write(b,s,c)<0)
		{
			int k,i=0;
			k=strlen(argv[2]);
			if(argv[2][k-1]!='/')
				break;
			k=strlen(argv[2])+strlen(argv[1]);
			char s1[k];
			for(i=0;i<k;s1[i++]=0);
			strcat(s1,argv[2]);
			strcat(s1,argv[1]);
			close(b);
			printf("%s-loop\n",s1);
			argv[2]=s1;
			b=open(argv[2],O_WRONLY| O_CREAT,0666);
			write(b,s,c);
		}

	}
	close(a);
	close(b);
return 0;
}
