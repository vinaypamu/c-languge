#include"head.h"
void PrintDateinFormat(int d,int m,int y)
{
	PrintSubscript(d);
	PrintMonthName(m);
	printf("-%d \n",y);
	return ;
}
void PrintSubscript(int d)
{
	if((d==1)||(d==21)||(d==31))
		printf("%dst",d);
	else if((d==2)||(d==22))
		printf("%dnd",d);
	else if((d==3)||(d==23))
		printf("%drd",d);
	else
		printf("%dth",d);
	return ;
}
void PrintMonthName(int m)
{
	switch(m)
	{
		case 1:printf(" january");
		       break;
		case 2:printf(" february");
		       break;
		case 3:printf(" march");
		       break;
		case 4: printf(" aprial");
			break;
		case 5:printf(" may");
		       break;
		case 6:printf(" june");
		       break;
		case 7:printf(" julay");
		       break;
		case 8:printf(" augest");
		       break;
		case 9:printf(" september");
		       break;
		case 10: printf(" october");
			break;
	}
	return ;
}
