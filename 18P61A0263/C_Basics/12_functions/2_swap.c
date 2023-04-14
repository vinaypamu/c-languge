/*2) 
Write a function ,that can take two integers, swap their values and print their new values.return type should be void.*/
#include<stdio.h>
void swap(int x,int y)
{
	int s;
	s=x;
	x=y;
	y=s;
	printf("%d  %d ",x,y);
	return;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	swap(a,b);
	return 0;
}

