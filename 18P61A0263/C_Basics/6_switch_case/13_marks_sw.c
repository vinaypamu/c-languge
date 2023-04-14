#include<stdio.h>
int main()
{int x,a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	x=((a+b+c+d+e+f)/6);
	x=x/10;
	switch((int)x)
	{
		case 1:
			printf("grade is fail");
		break;
		case 2:
			printf("grade is fail");
		break;
		case 3:
			printf("grade is fail");
		break;
		case 4:
			printf("grade is 3rd divi");
		break;
		case 5:
			printf("grade is 2nd divi");
		break;
		case 6:
			printf("grade is 1st divi");
		break;
		case 7:
			printf("grade is 1st divi");
		break;
		case 8:
			printf("grade is honours");
		break;
		case 9:
			printf("grade is honours");
		break;
		case 10:
			printf("grade is honour");
		break;
		default:
		printf("grade is fail");
	}
return 0;
}

