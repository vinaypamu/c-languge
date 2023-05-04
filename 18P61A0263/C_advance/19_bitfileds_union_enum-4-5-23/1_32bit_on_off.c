/*1) Write a program to store 32 (on/off) statuses in 32 bit space and access every bit separately and print without applying any bitwise operators. Based on given input of which light status to print, print on or off status.*/
#include<stdio.h>
#define fun(a)  s2(a)
void s2(unsigned int a)
{
	if(a)
		printf("on\n");
	else
		printf("off\n");
}
struct std
{
	unsigned int l0:1,l1:1,l2:1,l3:1,l4:1,l5:1,l6:1,l7:1,l8:1,l9:1,j0:1,j1:1,j2:1,j3:1,j4:1,j5:1,j6:1,j7:1,j8:1,j9:1,k0:1,k1:1,k2:1,k3:1,k4:1,k5:1,k6:1,k7:1,k8:1,k9:1,k10:1,k11:1;
};
int main()
{
	struct std s={1,0,1,1,0,1,0,1,0,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,1,1,1,0};
fun(s.l0);
fun(s.l1);
fun(s.l2);
fun(s.l3);
fun(s.l4);
fun(s.l5);
fun(s.l6);
fun(s.l7);
fun(s.l8);
fun(s.l9);
fun(s.j0);
fun(s.j1);
fun(s.j2);
fun(s.j3);
fun(s.j4);
fun(s.j5);
fun(s.j6);
fun(s.j7);
fun(s.j8);
fun(s.j9);
fun(s.k0);
fun(s.k1);
fun(s.k2);
fun(s.k3);
fun(s.k4);
fun(s.k5);
fun(s.k6);
fun(s.k7);
fun(s.k8);
fun(s.k9);
fun(s.k10);
fun(s.k11);
return 0;
}
