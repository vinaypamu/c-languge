/*2	sorting a list of names received on command line argument, with options like -r and -i

 if -r option is given strings are to be sorted in descending order.

 if -r option is not there, strings are to be sorted in ascending order.

 if -i option is given, strings are to be compared using stricmp function (case insensitive)

 if -i option is not given, strings are to be compared using strcmp function (case sensitive)

 eg.,

 >./sort -r -i abc Abe def dEf gHi aBc iKf deF

 these strings are to be sorted in descending order considering capital and small letters as same.

 >./sort -r abc Abe def dEf gHi aBc iKf deF

  these strings are to be sorted in descending order considering capital and small letters as different.
 
 >./sort -i abc Abe def dEf gHi aBc iKf deF

  these strings are to be sorted in ascending order considering capital and small letters as same.  

 >./sort abc Abe def dEf gHi aBc iKf deF

 these strings are to be sorted in ascending order considering capital and small letters as different.    ))*/
#include<stdio.h>
#include<string.h>
int stricmp(char *m,char *n)
{
	while((*m)||(*n))
	{
		if(((*m)-32!=(*n))&&((*m)+32!=(*n))&&((*m)!=(*n)))
			return (*m)-(*n);
		m++;n++;
	}
	return 0;
}
int main(int a, char *b[])
{
	int i=1,j=0,v=0;
	
	if((b[i][0]=='-'&&b[i][1]=='i')&&(b[i+1][0]=='-'&&b[i+1][1]=='r'))
	{
		j=1;
		i=i+2;
	}
	else if(b[i][0]=='-'&&b[i][1]=='i')
	{
		j=2;
		i++;
	}
	else if(b[i][0]=='-'&&b[i][1]=='r')
	{
		i=i+1;
		if(b[i][0]=='-'&&b[i][1]=='i')
		{
			i++;j++;
		}
	}
	else
	{
		j=3;
	}
	int k=i;
		for(;i<a-1;i++)
		{
			for(int z=k;z<a-(-k)-1;z++)
			{
				if(j==1&&stricmp(b[z],b[z+1])<0)
				{
					v=1;
					char*p=b[z];
					b[z]=b[z+1];
					b[z+1]=p;
				}
				else if(j==0&&strcmp(b[z],b[z+1])<0)
				{
					v=1;
					char*p=b[z];
					b[z]=b[z+1];
					b[z+1]=p;
				}
				else if(j==2&&stricmp(b[z],b[z+1])>0)
				{
					v=1;
					char*p=b[z];
					b[z]=b[z+1];
					b[z+1]=p;
				}
				else if(j==3&&strcmp(b[z],b[z+1])>0)
				{
					v=1;
					char*p=b[z];
					b[z]=b[z+1];
					b[z+1]=p;
				}
			}
			if(v==0)
				break;
		}
		for(;k<a;k++)
			printf("%s\n",b[k]);
	return 0;
}
