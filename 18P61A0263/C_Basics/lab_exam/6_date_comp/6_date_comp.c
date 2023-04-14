#include"head.h"
int main()
{
	int i=1,n,ed,em,ey;
	printf("enter comparing numbers\n");
	scanf("%d",&n);
	while(i<=n)
	{
		int d,m,y;
		printf("enter date \n");
		scanf("%d%d%d",&d,&m,&y);
		if(IsValidDate(d,m,y))
		{
			if(i==1)
			{
				em=m; ed=d; ey=y;
				i++; continue;
			}
			else if(!(DateCompare(ed,em,ey,d,m,y)))
			{
				ed=d; em=m; ey=y;
				i++; continue;
			}
			else 
			{
				i++;
				continue;
			}
		}
		else 
		{
			printf("Date is invalid,plz enter valid date");
			continue;
		}
	}
	PrintDateinFormat(ed,em,ey);
	return 0;
}

