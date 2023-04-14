/*3) Write a function to compare 2 structures and return 1 if they are equal, and 0 if they are not equal.*/

#include"vr.h"
int main()
{
	int i;
	for(i=0;i<2;i++)
	{
	printf("enter name,date,month,year,gender\n");
	scanf(" %s%d%d%d %c",s[i].name,&s[i].d,&s[i].m,&s[i].y,&s[i].gender);
	}
	int tp(struct std,struct std );
	if(tp(s[i-2],s[i-1]))
		printf("both given structures are same \n");
	else
		printf("both given structures are not same\n");
	return 0;
}
int tp(struct std si,struct std s)
{
	int i;
	for(i=0;(si.name[i]!=0||s.name[i]!=0);i++)
	{
	if(si.name[i]!=s.name[i])
		return 0;
	}
	if(si.gender!=s.gender)
		return 0;
	if(si.d!=s.d)
		return 0;
	if(si.m!=s.m)
		return 0;
	if(si.y!=s.y)
		return 0;
	return 1;
}
