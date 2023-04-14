/*1	Implement the calculator program using Command line arguments
 
  eg., input:  >./calc   56 + 671

  output : 727
 
  note: when giving * in commandline, always give "*"*/

#include<stdio.h>
int v_atoi(char *);
int main(int a,char *b[])
{
	int i=1,n=0,sum=0,j=0;
	if(a<4)
	{
		printf("Command Usage:pvcal <arg1> <arthematic arg> <arg2>\n");
		return 0;
	}
	while(i<a)
	{
		if(b[i][j]=='+')
		{
			i++;	
			n=v_atoi(b[i]);
			sum=sum+n;
		}
		else if(b[i][j]=='*')
		{
			i++;
			n=v_atoi(b[i]);
			sum=sum*n;
		}
		else if(b[i][j]=='-'&&b[i][j+1]=='\0')
		{
			i++;
			n=v_atoi(b[i]);
			sum=sum-n;
		}
		else if(b[i][j]=='%')
		{
			i++;
			n=v_atoi(b[i]);
			sum=sum%n;
		}
		else if(b[i][j]=='/')
		{
			i++;
			n=v_atoi(b[i]);
			sum=sum/n;
		}
		else 
		{
		n=v_atoi(b[i]);
		sum =n;
		}
		i++;
	}
	printf("out put :%d\n",sum);
	return 0;
}
int v_atoi(char *b)
{
	int var=0;
	char c=*b;
	if(c=='-')
		b=b+1;
	while(*b)
	{
		var=var*10;
		var=*b-48+var;
		b=b+1;
	}
	if(c=='-')
		var=0-var;
	return var;
}
