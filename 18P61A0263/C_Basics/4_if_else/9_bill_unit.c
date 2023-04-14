/*Find the power bill for the input number of units :
 * 0 - 200 units : 100/- min
 * 201 - 400 units : 100 + 0.65 per unit excess of 200
 * 401 - 600 units : 230 + 0.80 per unit excess of 400
 * 601 and above units : 390 + 1.00 per unit excess of 600*/

#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
if(x<=200)
{
	printf("%d is no. units and cost%d",x,100*1);
}
else if(x<=400)
{
float x1=x-200;
printf("%d is no.of units and cost %f",x,x1*0.65+100);
}
else if(x<=600)
{
float	x1=x-400;
	printf("%d is no.of units and cost%f",x,x1*0.80+230);
}
else if(x>=601)
{
float	x1=x-600;
	printf("%d is no.of units and cost %f",x,x1*1+390);
}
return 0;
}


