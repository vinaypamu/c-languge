/*5) Read n numbers in ascending order. If a number entered is bigger than previous number, then count it. If it is smaller, then dont count it, instead let the loop repeat itself and read another number.
 * */

#include<stdio.h>
int main()
{
	int i=0,n,x,a;
	scanf("%d%d",&n,&a);
	x=a;
	while(i<n)
	{
		scanf("%d",&a);
		if(x<a)
		{
			x=a;
			i++;
		}
		else 
			printf("enter asending order vise\n");
	}
	return 0;
}
		
