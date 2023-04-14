#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int a, char *b[])
{
	int i=1;
	while(i<a)
	{
	write(1,b[i],strlen(b[i]));
	write(1," ",1);
		i++;
	}
	write(1,"\n",1);
	_exit(0);
}

