/*4) Write a program to print the number of days in a month using enumeration for the month.*/
#include<stdio.h>
enum{
jan=1,feb,march,aprial,may,june,juliy,aug,sep,oct,nov,dec
};
void fun(int y,int x)
{
	printf("%d days in given %d month",x,y);
}
#define s(m,d,k) if(m==d){fun(d,k);}
int main()
{
printf("enter month number 0<&&<13\n");
short int x;
scanf("%hd",&x);
s(x,jan,31)
s(x,feb,28)
s(x,march,30)
s(x,may,31)
s(x,june,30)
s(x,juliy,31)
s(x,aug,31)
s(x,sep,30)
s(x,oct,31)
s(x,nov,30)
s(x,dec,31)
return 0;
}
