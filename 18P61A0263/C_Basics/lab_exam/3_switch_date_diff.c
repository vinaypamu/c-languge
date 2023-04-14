#include<stdio.h>
int main()
{
	int m,d,y,d1;
	scanf("%d%d%d",&d,&m,&y);
	switch(((y>=1900)&&(y<=2200))&&((m>=1)&&(m<=12))&&((d>=1)&&(d<=31)))
	{
		case 1:
			switch(m)
			{
				case 2:
						switch(((y%100!=0)&&(y%4==0))||(y%400==0))
						{
							case 1:
								d1=29;
								break;
							case 0:
								d1=28;
								break;
						}
				case 1:		break;
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					d1=31;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					d1=30;
					break;
			}
		default:	switch(d1>=d)
				{
					case 1:
						printf("is valid date");
						break;
					case 0:
						printf("is invalid date");
						break;
				}
			break;
		case 0:
			printf("is invalid date");
			break;
	}
	return 0;
}
