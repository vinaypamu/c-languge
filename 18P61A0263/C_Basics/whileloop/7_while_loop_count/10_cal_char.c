/*10) write the calculator program to read two numbers and one character (+, -, *, / , %) from the user, and based on character, do appropriate operation on numbers and print the output. Modify the program to repeat this task n number of times.*/
#include<stdio.h>
int main()
{
	int i=1,n;
	scanf("%d",&n);
	while(i<=n)
	{
		int a,b;
		char c;
		scanf("%d%d %c",&a,&b,&c);
		if(c=='+')
			printf("%d\n",a+b);
		else if(c=='-')
			printf("%d\n",a-b);
		else if(c=='%')
			printf("%d\n",a%b);
		else if(c=='/')
			printf("%d\n",a/b);
		else if(c=='*')
			printf("%d\n",a*b);
		i++;
	}
	return 0;
}
