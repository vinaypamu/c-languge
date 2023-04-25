#include<stdio.h>
void enque(int *,int);
void deque(int *,int);
int main()
{
	int arr[5]={0},real=-1,front=-1,d=0,e=0;
	char c;
	while(1)
	{
		printf("\tenter\n d for deque\n e for enque\n n for exit\n");
		scanf(" %c",&c);
		if(c=='d')
		{
			if(front==4)
			{
				front=-1;
				d=d+1;
			}
			if((d==e&&real>front)||(d!=e&&real<=front))
			deque(arr,++front);
			else 
				printf("queue is empty deque is not possible\n");
		}
		else if(c=='e')
		{
			if(real==4)
			{
				real=-1;
				e=e+1;
			}
			 if(d!=e&&real==front)
			{
				printf("queue is full enque is not possible\n");
			}
			 else
				enque(arr,++real);
		}
		else if(c=='n')
			break;
	}


}
void deque(int *arr,int front)
{
	printf("%d \n",*(arr+front));
	return;

}
void enque(int *arr,int real)
{
	int a;
	printf("enter aa number\n");
	scanf("%d",&a);
	*(arr+real)=a;
}
