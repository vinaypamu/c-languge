/*4) Read n numbers from user, and while reading every number, print if the number is bigger or smaller than the previous number. For first number, there wont be any output as it is the first one.*/
#include<stdio.h>
int main()
{
	int x,i=0,n;
	scanf("%d",&n);
	while(i<n)
	{
		int a;
		scanf("%d",&a);
		if(i==0)
		{
			x=a;
			i++;
		}
		else 
		{
			(x<a)?printf("%d is bigger than priviou value",a):(x>a)?printf("%d is samller than privious value",a):printf("both are equal values");
			x=a;
			i++;
		}
	}
	return 0;
}


