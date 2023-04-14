//3. WAP to count the bits set (bit value 1 ) in an integer? Find out and compare different possibilities?)
#include<stdio.h>
int main()
{
	int a,i=0,j,k=0,k1=0;
	printf("enter a number\n");
	scanf("%d",&a);
	for(;a>>i;i++);
	j=i-1;
	for(;j>=0;j--)
	{
		if(a& 0x1<<j)
			k++;
		if(!(a&(0x1<<j))==0)
			k1++;
	}
	printf("%d-k %d-k1 is count of 1's",k,k1);
	k=0;
	k1=a;
	while(a!=0)
	{
		if(a & (0x1))
			k++;
		a=a>>1;
	}
	printf("%d -ki",k);
}
