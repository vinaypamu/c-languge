/*4)read a 4 digit number and print it in the following formats using arithmetic operators / and %. write 5 different programs, one for each output:
 * eg., 4532
 * OP1:
 * 2                   
 * 3 
 * 5
 * 4
 * OP2:
 * 4
 * 5
 * 3
 * 2
 * OP3:
 * 4
 * 45
 * 453
 * 4532
 * OP4:
 * 4532
 * 453
 * 45
 * 4
 * OP5:
 * 2354*/
#include<stdio.h>
int main()
{int a,b,c,d,e,g,h,i,a1;
	scanf("%d",&a);
	b=(a%10);
	g=(a/10);
	c=(g%10);
	h=(g/10);
	d=(h%10);
	e=(h/10);
	printf("%d\n%d\n%d\n%d\n",b,c,d,e);
	i=(a%1000);
	a1=(i%100);
//input4532 and output4\n5\n3\n2\n
	printf("\t%d\n\t%d\n\t%d\n\t%d\n",a/1000,i/100,a1/10,a1%10);
//input4532 and output4\n45\n453\n4532
	printf("\t\t%d\n\t\t%d\n\t\t%d\n\t\t%d\n",a/1000,a/100,a/10,a);
//input4532 and output4532\n453\n45\n4
	printf("\t\t\t%d\n\t\t\t%d\n\t\t\t%d\n\t\t\t%d\n",a,a/10,a/100,a/1000);
//input4532and output2354
	printf("\t\t\t\t%d\n",b*1000+c*100+d*10+e);
	return 0;

}

