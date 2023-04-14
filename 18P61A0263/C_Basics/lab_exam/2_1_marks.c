#include<stdio.h>
int main()
{
	int m,p,c,t,y;
	scanf("%d%d%d",&m,&p,&c);
	t=m+p+c;
	y=m+p;
	if((m>=60)&&(p>=50)&&(c>=40))
		if((t>=200)||(y>=150))
			printf("eligible");
		else
			printf("Not eligible");
	else
		printf("Not eligible");
	return 0;
}
