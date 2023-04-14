//1) Repeat command line argument string sorting program using swapping function using call by reference of pointers.
#include<stdio.h>
#include<string.h>
void swap(char **argv,int argc)
{
	int v=0;
	for(int i=1;i<argc-1;i++)
	{
		for(int z=1;z<argc-i;z++)
		{
			if(strcmp(*(argv+z),*(argv+z+1))<0)
			{
				v=1;
				char *p=*(argv+z);
				*(argv+z)=*(argv+z+1);
				*(argv+z+1)=p;
			}
		}
		if(v==0)
			break;
	}
	for(int i=1;i<argc;i++)
	{
		printf("%s\n",*(argv+i));
	}

}
int main(int argc ,char **argv)
{
	swap(argv,argc);
	return 0;
}

