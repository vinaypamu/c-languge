#include<stdio.h>
void call()
{
	static int a=0;
	a++;
	printf("\n");
	if(a%10==1)
		printf("hello! I am called %dst time",a);
	else if(a%10==2)
		printf("hello! I am called %dnd time",a);
	else if(a%10==3)
		printf("hello! I am called %drd time",a);
	else
		printf("hello! I am called %dth time",a);
	return ;
}

