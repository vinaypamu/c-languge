/*8)n number of students from a class, read 6 subject marks for every student, and calculate their percentage of marks, and print how many students got first class (>60%) , how many students got second class (>50%) and how many students are just passed (>40%) and how many failed.

9) try doing the 8th program using loop inside the loop for the calculation of subject marks also.*/
#include<stdio.h>
int main()
{
	int n,q=0,w=0,e=0,r=0,s=0;
	float a;
	scanf("%d",&n);
	while(n>0)
	{
		int c=0;
		while(c<6)
		{
		int b;
		scanf("%d",&b);
		s=s+b;
		c++;
		}
		a=(s/6.0);
		if(a>=60)
			q++;
		else if(a>=50)
			w++;
		else if(a>=40)
			e++;
		else if(a<40)
			r++;
		n--;
	}
		printf("%d no. of students got 1st cls\n %d no. students got 2nd cls \n %d no.of students got 3rd cls\n %d no.studets failed ",q,w,e,r);
		return 0;
}

