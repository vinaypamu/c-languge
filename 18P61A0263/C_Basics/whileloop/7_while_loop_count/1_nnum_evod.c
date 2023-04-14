//1) Read n number of numbers from user (n value taken as input) and print if each number is even or odd.
#include<stdio.h>
int main()
{
	int i=0,n;
	scanf("%d",&n);
	while(i<n)
	{int a;
		scanf("%d",&a);
		if(a%2==0)
			printf("%d is even number",a);
		else
			printf("%d is odd number",a);
		i++;
	}
	return 0;
}


