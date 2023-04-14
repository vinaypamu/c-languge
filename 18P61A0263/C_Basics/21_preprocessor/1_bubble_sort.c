/*1)Write down a macro to find out the biggest of two numbers.i
MAX(x,y) should define code to find biggest of x and y. Implement array sorting function using this macro (Bubble sort)))*/
#include<stdio.h>
#define s(x,y) (x>y?y:x)
#define min (z>y)
int main()
{
	int m[10]={1,6,63,5,4,8,9,10,98,0};
	int i,j,a,z,y;
	printf("enter two values");
	scanf("%d%d",&z,&y);
	if(min)
		printf("%d is  big and %d is smalli\n",z,y);
	else
		printf("%d is big and %d is small\n",y,z);
	for(i=0;i<10;i++)
	{
		j=m[i];
		for(a=i+1;a<10;a++)
		{
			m[i]=s(m[i],m[a]);
			if(m[i]==m[a])
			{
				m[a]=j;
				j=m[i];
			}

		}
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf(" %d ",m[i]);
	}
	return 0;
}
