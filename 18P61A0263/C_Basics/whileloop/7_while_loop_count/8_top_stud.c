//8) for n students from a class, read 6 subject marks for every student, and calculate their percentage of marks, and print who is the topper of all (print the student number).
#include<stdio.h>
int main()
{
	int i=1,n,g;
	float x,s=0;
	printf("enter the count");
	scanf("%d",&n);
	while(i<=n)
	{

		int a,b,c,d,e,f;
		printf("please enter marks");
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		x=((float)(a+b+c+d+e+f)/6);
	       	if(s<x)
		{
			s=x;
			g=i;
		}
		i++;
	}
	printf("%d serial num max marks %f\n",g,s);
	return 0;
}

