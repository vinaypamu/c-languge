/*Find the % of marks for 6 subjects, for a student, and print the grade of the student as per below division , using if else statement.
 * 80 - 100        : Honours
 * 60 - 79         : First Division
 * 50 - 59         : Second Division
 * 40 - 49         : Third Division
 * 0 - 39          : Fail*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	float x;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	x=((a+b+c+d+e+f)/6);
	if ((x>=80)&&(x<=100))
		printf("%f is marks and gread is hounour",x);
	else if((x>=60)&&(x<=79))
		printf("%f is marks and gread is 1st div",x);
	else if((x>=50)&&(x<=59))
		printf("%f is marks and gread is 2nd div",x);
	else if((x>=40)&&(x<=49))
		printf("%f is marks and gread is 3rd div",x);
	else 
		printf("%f is marks and gread is fail",x);
	return 0;
}




