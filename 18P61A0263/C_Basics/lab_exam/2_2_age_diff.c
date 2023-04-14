#include<stdio.h>
int main()
{
	int m,d,y,a,b,c;
	scanf("%d%d%d%d%d%d",&d,&m,&y,&a,&b,&c);
	if((y==c)&&(m==b)&&(d==a))
		printf("Both are same age");
	else if((y>c)||(y==c))
		if((m>b)||(m==b))
			if((d>a)||(d==a))
			{
				printf("Person born on %d-%d-%d is older",a,b,c);
			}
			else
			{
				printf("Person born on %d-%d-%d is older",d,m,y);
			}
		else
		{
			printf("Person born on %d-%d-%d is older",d,m,y);
		}
	else
	{
		printf("Person born on %d-%d-%d is older",d,m,y);
	}
	return 0;



}

