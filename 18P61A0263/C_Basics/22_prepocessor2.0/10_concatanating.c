/*10) Write a macro to concatenate 2 strings.*/
#include<stdio.h>
#define s(s,i) for(j=0;s[j]!=0;vr[i++]=vr1[j++]);
int main()
{
	int i=0,j=0;
	char vr[50],vr1[50];
	printf("enter 1st string elements\n");
	scanf(" %49[^\n]s",vr);
	printf("enter 2nd string elements\n");
	scanf(" %49[^\n]s",vr1);
	for(i=0;vr[i]!=0;i++);
	s(vr,i)
		vr[i]='\0';
		printf("%s\n",vr);
	return 0;
}
