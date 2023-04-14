/*2) Complete the lab test question as an assignment by adding conditional statement, so that to print a denomination only if the denomination is not zero. Do not print 0 denominations.
 * If the amount entered is not divisible with 50 (not in multiples of 50) then print a message that the money cannot be dispensed as input is not valid.
 * At an ATM the denominations available are 2000/- , 500/- , 200/-, 100/-, 50/-
 *
 * Program will take the amount to withdraw as an input. And will calculate and display the number of notes of each denomination to be dispensed. The amount should be entered as denominations of 50/- only. (Hint: Make use of / and % operators)
 *
 *
 *
 * eg., Enter the amount to withdraw: 12950
 *
 * Output expected:
 *
 * Money dispensed as follows:
 *
 * No of 2000/- notes: 6
 *
 * No of 500/- notes: 1
 *
 * No of 200/- notes: 2
 *
 * No of 50/- notes: 1
 *
 * eg., Enter the amount to withdraw: 57260
 *
 * Output expected :
 *
 * Amount not valid. Please enter amount only multiples of 50.*/

#include<stdio.h>
int main()
{
int x,a,b,c,d;
scanf("%d",&x);
a=(x%2000);
b=(a%500);
c=(b%200);
d=(c%100);
if(x%50==0)
{
	if(x/2000!=0)
	{
		printf("No.of 2000/-:%d\n",x/2000);
	}
	if(a/500!=0)
	{
		printf("No.of 500/-:%d\n",a/500);
				}
	if(b/200!=0)
	{
	printf("No.of 200/-:%d\n",b/200);
	}
	if(c/100!=0)
	{
	printf("No.of 100/-:%d\n",c/100);
	}
	if(d/50!=0)
	{
	printf("No.of 50/-:%d\n",d/50);
	}
}
else
{
printf("amount is not valid.please enter amount only multiples of 50");
}
return 0;
}
