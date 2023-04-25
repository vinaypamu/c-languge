#include<stdio.h>
#include<stdlib.h>
int delete(int arr[],int top );
void list(int arr[],int top)
{
		printf("%d\n",arr[top]);
}
int push(int arr[],int top)
{
	printf("enter a number\n");
	scanf("%d",&arr[top]);
	list(arr,top);
	return ++top;
}
int main()
{
	int arr[10]={0},top=0;
	char a=0;
	while(1)
	{	printf("==>  enter  <==  \n p for push \n d for pop \n n for discontinue\n");
		scanf(" %c",&a);
		if(a=='p')
		{
			top=push(arr,top);
		}
		if(a=='d')
			top =delete(arr,top);
		if(a=='n')
			break;
	}
	return 0;
}
int delete(int arr[],int top)
{
	if(top<=0)
	{
		printf("stack is empty\n");
		return top;
	}
	list(arr,top-1);
	return --top;
}
