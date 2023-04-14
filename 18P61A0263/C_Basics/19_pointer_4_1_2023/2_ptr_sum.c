/*2)Write a program to add two variables using thier pointers.*/
#include<stdio.h>
int main()
{
	int x=3,*m=&x;;
	char y=65,*n=&y;
	float z=2.3,*p=&z;
//	printf("%d -x",x);
//	*m=*m+*m;
//	printf("\n%d-x",x);
	printf("\n%d-xn\n,%d-m,%d-x,%d-x",x,x,(*m=y+z),x);
//	printf("%d -x,%p-x,%lu -x,%c-y,%p-y,%lu-y,%lu -char,%f-z,%p-z,%lu-z\n",x,&x,sizeof(x),y,&y,sizeof(y),sizeof(1.2),z,&z,sizeof(z));
//	printf("%d -x,%p-x,%lu -x,%c-y,%p-y,%lu-y,%lu -char,%f-z,%p-z,%lu-z\n",*m,m,sizeof(*m),*n,n,sizeof(*n),sizeof(n),*p,p,sizeof(*p));
	return 0;
}
