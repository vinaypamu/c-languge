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
if(x<=39)
	printf("%f marks grade is failed",x);
else if(x<=49)
	printf("%f marks grade is 3rd",x);
else if(x<=59)
	printf("%f marks grade is 2nd",x);
else if(x<=79)
	printf("%f marks grade is 1st",x);
else if(x<=100)
	printf("%f marks grade is honour",x);
			
return 0;

}
