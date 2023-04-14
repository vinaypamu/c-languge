//6) Read  n numbers from user ,and print the smallest number of all.
#include<stdio.h>
int main()
{
	int i=0,n,x;
	scanf("%d",&n);
	while(i<n)
	{
		int a;
		scanf("%d",&a);
		if(i==0)
			x=a;
		else if(x>a)
		{
			x=a;
		}
		i++;
	}
	printf("%d is smallest number of all\n",x);
return 0;
}
