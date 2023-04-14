#include<stdio.h>
#include<unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int a,char *b[])
{
	struct stat std;
	int ab;
	if(a<0)
	{
		printf("du:can not access '%s':\n");
	}
	for(int i=1;i<a;i++)
	{
	ab=stat(b[i],&std);
	if(ab<0)
	{
		printf("du:can not access '%s':\n",b[i]);
		perror("");
		continue;
	}
	printf("%ld \t\t %s \n",std.st_size,b[i]);
	}
	_exit(0);
}

