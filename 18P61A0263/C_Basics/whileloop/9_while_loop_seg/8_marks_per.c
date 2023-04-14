/*for n students from a class, read 6 subject marks for every student, and calculate their percentage of marks, and print how many students got first class (>60%) , how many students got second class (>50%) 
 and how many students are just passed (>40%) and how many failed.*/
#include<stdio.h>
int main()
{
	int n,q=0,w=0,t=0,r=0;
	float i;
	scanf("%d",&n);
	while(n>0)
	{
		int a,b,c,d,e,f;
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		i=a+b+c+d+e+f;
		i=(i/6.0);
		if(i>=60)
			q++;
		else if(i>=50)
			w++;
		else if(i>=40)
			r++;
		else if(i<40)
			t++;

		n--;
	}
	printf("%d no. of students got 1st cls\n %d no. students got 2nd cls \n %d no.of students got 3rd cls\n %d no.studets failed ",q,w,r,t);
	return 0;
}


