/*14) write a function to take an array as input, and count how many times the biggest number is repeated in that array, and return the count. 
 * eg., array : {10, 14,16,10, 10 , 16, 14, 14, 16, 16};
 *
 * output : biggest number is repeated 4 times*/
#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array");
	scanf("%d",&n);
	int big[n];
	int i;
	printf("enter input elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&big[i]);
	}
	int big1(int big[],int n);
	n=(big1(big,n));
	if(n)
	{
		printf("%d times is repeated",n);
	}
	else
		printf("number is not repeated ");
	return 0;
}
int big1(int big[],int n)
{
	int i,s,r=1;
	for(i=0;i<n;i++)
	{
		if(i==0)
			s=big[i];
		else if(s<big[i])
		{
			r=1;
			s=big[i];
		}
		else if(s==big[i])
			r++;
	}
	return r;
}



