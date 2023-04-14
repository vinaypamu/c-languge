#include<stdio.h>
int main()
{
	int a,b;
	char c;
	while(1)
	{
		printf("enter int ,char ,int");
		scanf("%d %c%d",&a,&c,&b);
		switch(c)
		{
			case'+':printf("%d",a+b);
				break;
			case'-':printf("%d",a-b);
				break;
			case'*':printf("%d",a*b);
				break;
			case'/':printf("%d",a/b);
				break;
			case'%':printf("%d",a%b);
				break;
			default:goto exit;
		}
	}
exit:
	return 0;
}

