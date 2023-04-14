/*Find the power bill for the input number of units :
 * 0 - 200 units : 100/- min
 * 201 - 400 units : 100 + 0.65 per unit excess of 200
 * 401 - 600 units : 230 + 0.80 per unit excess of 400
 * 601 and above units : 390 + 1.00 per unit excess of 600*/
#include<stdio.h>
int main()

{
	float x;
	scanf("%f",&x);
	if((x>=0)&&(x<=200))
		printf("%f is units and bill is %f",x,100.0*1.0);
	else if((x>=201)&&(x<=400))
		printf("%f is units and bill is %f",x,100+(x-200)*0.60);
	else if((x>=401)&&(x<=600))
		printf("%f is units and bill is %f",x,230+(x-200)*0.80);
	else if(x>=601)
		printf("%f is units and bill is %f",x,390+(x-200)*1);
	return 0;

}
