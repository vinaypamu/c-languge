/*1) Practice scanf and printf on each member of the structure using a structure variable  using the below structure template:
 *
 * struct student
 * {
 * 
 * int ID;
 * char name[50];
 * int marks[6];
 * int d,m,y;
 * float per;
 * char gender
 * };
 *
 * create a structure variable of the above type and read ID , name and marks of 6 subjects, date of birth and date of joining using scanf and printf.
 * Then calculate percentage of marks, and store the percentage using per pointer member, and print it.Write a function to calculate the percentage ,and update the percentage member of the structure using function (send only per member using call by reference).*/
#include"vr.h"
int main()
{
	int i,j;

	for(i=0;i<2;i++)
	{
	printf("enter id ,name,date,month,year,joing date ,month,year,gender\n");
	scanf("%d %s%d%d%d%d%d%d %c",&s[i].ID,s[i].name,&s[i].d,&s[i].m,&s[i].y,&s[i].d1,&s[i].m1,&s[i].y1,&s[i].gender);
	for(j=0;j<6;j++)
	{
		printf("enter %d marks\n",j);
		scanf("%d",&s[i].marks[j]);
	}
	void tp(float *,struct std );
	tp(&s[i].per,s[i]);
	}
	for(i=0;i<2;i++)
	{
	printf("id-%d\n name-%s\n %d-%d-%d\n %d-%d-%d\n gender-%c\n percentage-%f\n",s[i].ID,s[i].name,s[i].d,s[i].m,s[i].y,s[i].d1,s[i].m1,s[i].y1,s[i].gender,s[i].per);
	}
	return 0;
}
void tp(float *si,struct std s)
{
	int i,sum=0;
	for(i=0;i<6;i++)
	{
		sum=sum+s.marks[i];
	}
	*si=(sum/6.0);
	return ;
}
