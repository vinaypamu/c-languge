#include"../head/vr.h"

int main()
{
	int a,b;
	printf("enter two values\n");
	scanf("%d%d",&a,&b);
#ifdef ADD
	printf("addition %d\n",add(a,b));
#endif
#ifdef SUB
	printf("substitution %d\n",sub(a,b));
#endif
	return 0;
}
