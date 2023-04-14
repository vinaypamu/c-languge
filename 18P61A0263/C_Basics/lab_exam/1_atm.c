#include<stdio.h>
int main()
{
int x,a,b,c,d;
printf("enter x the value");
scanf("%d",&x);
a=(x%2000);
b=(a%500);
c=(b%200);
d=(c%100);
printf("No of 2000/-notes:%d\n",x/2000);
printf("No of 500/-notes:%d\n",a/500);
printf("No of 200/-notes:%d\n",b/200);
printf("No of 100/-notes:%d\n",c/100);
printf("No of 50/-notes:%d\n",d/50);
return 0;
}
