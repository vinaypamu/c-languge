#include"head.h"
int main()
{
	int t,m,y,l,d;
	printf("enter total salary , lop, month,year");
	scanf("%d%d%d%d",&t,&l,&m,&y);
	if((m>=1)&&(m<=12)&&y>0&&t>0)
	{
		d=CalculateNetSalary(t,l,m,y);
		printf("Net payable salary is : %d",d);
	}
	else 
		printf("enter valid month or year or salary");
	return 0;
}

