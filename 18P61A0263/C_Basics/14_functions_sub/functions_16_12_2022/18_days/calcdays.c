#include"head1.h"
int days(int y,int m,int c)
{
	switch(m)
	{
		case 1:
			{
				c=c+31; y++; break;
			}
		case 2:c=c+valid(m,y);break;
		case 3:c=c+31;break; 
		case 4:c=c+30;break;
		case 5:c=c+31;break;
		case 6:c=c+30;break;
		case 7:c=c+31;break;
		case 8:c=c+31;break;
		case 9:c=c+30;break;
		case 10:c=c+31;break;
		case 11:c=c+30;break;
		case 12:c=c+31;break;
	}
	return c;
}
int year(int y,int m,int c)
{
	switch(m)
	{
		case 1:
			{
				c=c+31; y++; break;
			}
		case 2:c=c+valid(m,y);break;
		case 3:c=c+31;break; 
		case 4:c=c+30;break;
		case 5:c=c+31;break;
		case 6:c=c+30;break;
		case 7:c=c+31;break;
		case 8:c=c+31;break;
		case 9:c=c+30;break;
		case 10:c=c+31;break;
		case 11:c=c+30;break;
		case 12:c=c+31;break;
	}
	return y;
}

