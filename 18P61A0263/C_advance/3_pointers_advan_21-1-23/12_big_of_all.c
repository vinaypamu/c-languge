/*12) an array contains some numbers. You need to find out how many times the biggest number has occurred in that array by incrementing the array without using index. You can find the biggest number, and also count it in a single loop.*/
#include<stdio.h>
int main()
{
	int i=0,*j,m,s[10],k=1;
	printf("enter array elements\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&s[i]);
	}
	j=s;
	m=*j;
	for(i=0;i<10;i++)
	{
		j++;
		if(*j>m)
		{
			m=*j;
			k=0;
		}
		if(*j==m)
			k++;
	}
	printf("%d is big %d times it is repeated\n",m,k);
	return 0;
}

