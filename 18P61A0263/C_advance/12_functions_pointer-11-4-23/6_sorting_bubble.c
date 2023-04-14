/* 6) sorting a list of names received on command line argument, with options like -r and -i using function pointers to call appropriate functions.
-r : when given sort in descening order, when not given sort in ascending order
-i : when given sort without case sensitivity , when not given sort with case sensitivity

eg., ./sort  -r   sunday monday Tuesday Wednesday thursday Friday Saturday sunday
sort with case sensitive comparison in descending order

./sort -r -i  sunday monday Tuesday Wednesday thursday Friday Saturday sunday
sort with out case sensitive comparison, in descending order

./sort -i  sunday monday Tuesday Wednesday thursday Friday Saturday sunday
sort with out case sensitive comparison, in ascending order

./sort  sunday monday Tuesday Wednesday thursday Friday Saturday sunday
sort with case sensitive comparison, in ascending order
*/
#include<stdio.h>
#include<string.h>
#define funarg char * v[],\
	int argc,\
	int j,\
	int k,\
	int v1
#define forloop(loop)			for(;j<argc-1;j++)\
					{for(int z=k;z<argc-(j-k)-1;z++)\
					{if(loop)\
					{v1=1;char*p=v[z];\
					v[z]=v[z+1];v[z+1]=p;\
					}\
					}\
					if(v1==0)break;\
					}\
					for(;k<argc;k++)\
					printf("%s\n",v[k]);
void strircmp(funarg)
{
forloop(strcasecmp(v[z],v[z+1])<0)
}
void stricmp(funarg)
{
forloop(strcasecmp(v[z],v[z+1])>0)
}
void strrcmp(funarg)
{
forloop(strcmp(v[z],v[z+1])<0) 
}
void stracmp(fun)
{
forloop(strcmp(v[z],v[z+1])>0) 
}

typedef void (*type)(fun);
type fptr[4]={strircmp,stricmp,strrcmp,stracmp};
int main(int argc ,char * argv[])
{
	int k=0,j=0,v1=0;
	if(strcmp(argv[1],"-r")==0&&strcmp(argv[2],"-i")==0)
	{
loop:
		k=3;j=k;(fptr[0])(argv,argc,j,k,v1);
	}
	else if(strcmp(argv[1],"-i")==0&&strcmp(argv[2],"-r")==0)
		goto loop;
	else if(strcmp(argv[1],"-r")==0)
	{
		k=2;j=k;(fptr[2])(argv,argc,j,k,v1);
	}
	else if(strcmp(argv[1],"-i")==0)
	{
		k=2;j=k;(fptr[1])(argv,argc,j,k,v1);
	}
	else
		k=1;j=k;(fptr[3])(argv,argc,j,k,v1);
	return 0;
}




































