/*3) Create a two dementional integer array to store the marks of n students in a class (Each student takes different number of subjects) so the number rows and columns are dynamic here. Read the marks of every student and calculate average marks, and print who is the topper (with highest average marks).
release the dynamic memory properly after printing the results.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap(int **argv,int argc)
{
	int v=0;
	*(*(argv+0)+1)=1;
	for(int i=0;i<argc-1;i++)
	{
		if(**(argv)<**(argv+i+1))
		{
			**(argv)=**(argv+i+1);
			*(*(argv)+1)=i+2;
		}
	}
	printf("the highest marks %d and student roll no %d/n",**(argv+0), *(*(argv+0)+1));
	for(int i=0;i<argc;i++)
	{
		free(*(argv+i));
	}

}
int main()
{
	int r=0,c=0,i=0,j=0;
	float z=0;
	int **p=NULL;
	printf("enter num of rows\n");
	scanf("%d",&r);
	p=(int **)calloc(r,sizeof(int *));
	if(p==NULL||r==0)
	{
		printf("calloc return null adress for rows");
		return 0;
	}
	for(i=0;i<r;i++)
	{
		printf("enter num of colomn\n");
		scanf("%d",&c);
		*(p+i)=(int *)calloc(c,sizeof(int ));
		if(*(p+i)==NULL||c==0)
		{
			printf("calloc return null adress for column");
			return 0;
		}
		z=0;
		for( j=0;j<c;j++)
		{
			printf("enter  %d %d marks\n",j,c);
			scanf("%d",*(p+i)+j);
			z=z+*(*(p+i)+j);
		}
		**(p+i)=z/c;
		printf("sum %d\n",**(p+i));
	}
	swap(p,r);
	free(p);
}
