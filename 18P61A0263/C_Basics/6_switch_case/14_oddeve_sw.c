#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	x=((x%2)!=0);
	switch(x)
	{
		case 1:
			printf("%d is odd one",x);
		break;
		case 0:
		printf("%d is even one",x);
	}
return 0;
}
