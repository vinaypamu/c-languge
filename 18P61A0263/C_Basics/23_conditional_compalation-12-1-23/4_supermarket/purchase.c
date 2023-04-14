#include"head.h"
#include"head.h"
void pur(int i)
{
	extern int s;
	scanf("%d",&i);
	if(((i+s)<10000))
	{
		stock(i);
	}
	else 
		printf("sorry don't have enough place");
	return;
}


