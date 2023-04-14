//For one type of mobile service, if cost is 250/- upto 100 calls and 1.25/- for each call made over and above 100 calls. Write a program to read number of calls made and compute and print the bill.
#include<stdio.h>
int main()
{
	int x=250,y;
	float y1;
	scanf("%d",&y);
	y1=y-100;
	y1=y1*1.25;
	if(y>100)
		printf("%d no calls and %f cost",y,y1+250);
	else
		printf("%d no. of calls and %d",y,x);
	return 0;
}
