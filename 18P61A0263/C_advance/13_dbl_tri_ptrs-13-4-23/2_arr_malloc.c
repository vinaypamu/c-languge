/*2) Create a two dimentional array (array of strings) using a double pointer and sort the strings alphabetically. Here number of strings, and each string size, both are decided during runtime. 
-read number of strings (number of rows)
- allocate memory for a character pointer array, for the given number of rows
- visit each row using a row loop.allocate memory for each string dynamically, assign base address to the character pointer array element. Read the string.
- sort the character pointer array (sort the strings). use string comparison function, and swap functions.
- release the dynamic memory properly, after printing the results. 
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap(char **argv,int argc)
{
	int v=0;
	for(int i=0;i<argc-1;i++)
	{
		for(int z=0;z<argc-i-1;z++)
		{
			if(strcmp(*(argv+z),*(argv+z+1))>0)
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
	for(int i=0;i<argc;i++)
	{
		printf("%s\n",*(argv+i));
		free(*(argv+i));
	}

}
int main()
{
int r=0,c=0,i=0;
char **p=NULL;
printf("enter num of rows\n");
scanf("%d",&r);
p=(char **)calloc(r,sizeof(char *));
if(p==NULL)
{
printf("calloc return null adress for rows");
	return 0;
}
for(i=0;i<r;i++)
{
printf("enter num of colomn\n");
scanf("%d",&c);
*(p+i)=(char *)calloc(c,sizeof(char ));
if(*(p+i)==NULL)
{
printf("calloc return null adress for rows");
	return 0;
}
printf("enter a string\n");
scanf(" %10[^\n]s",*(p+i));
}
swap(p,r);
free(p);
}
