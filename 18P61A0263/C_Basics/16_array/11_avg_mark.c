/*11 Write a function to return the average of marks of all students in a class.*/
#include<stdio.h>
int main()
{
	int m;
	printf("enter number of students");
	scanf("%d",&m);
	int mm[m];
	int fun(int mm[],int m);
	printf("%d is avg of students",fun(mm,m));
	return 0;
}
int fun(int mm[],int m)
{
	int i;
	float j=0;
	for(i=0;i<m;i++)
	{
		printf("enter student marks");
		scanf("%d",&mm[i]);
		j=j+mm[i];
	}
	j=(((float)(j))/m);
	return j;
}



