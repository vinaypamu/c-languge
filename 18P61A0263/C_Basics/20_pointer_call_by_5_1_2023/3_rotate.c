//3) Write a function that can rotate the values of three variables. print the results in main function.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	void swap(int *x,int *y,int *z);
	swap(&a,&b,&c);
	printf("%d-a,%d-b,%d-c\n",a,b,c);
	swap(&a,&b,&c);
	printf("%d-a,%d-b,%d-c\n",a,b,c);
	swap(&a,&b,&c);
	printf("%d-a,%d-b,%d-c\n",a,b,c);
	return 0;
}
void swap(int *x,int *y,int *z)
{
	int t;
	t=*x;
	*x=*y;
	*y=*z;
	*z=t;
	return ;
}

