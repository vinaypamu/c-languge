/*2) Read a 4 digit integer into a single variable, using the single variable, print the output in below format, using escape sequences and different formats:
 eg., input: 3476
 output expected:
3
34
347 
3476
3) Read a 4 digit integer into a single variable, using the single variable, print the output in below format, using escape sequences and different formats:
eg., input: 3476
output expected:
    3
   34
  347
 3476 */

#include<stdio.h>
int main()
{
int x;
printf("enter 4 digit integer");
scanf("%d",&x);
printf("%d\b\b\b   \n%d\b\b  \n%d\b \n%d\n",x,x,x,x);
printf("%7d\b\b\b   \n%6d\b\b  \n%5d\b \n%d",x,x,x,x);
return 0;
}
