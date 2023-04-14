//Input an alphabet. Output its case reverse.
#include<stdio.h>
int main()
{char c;

	scanf("%c",&c);
	(c>='A')?(c<='Z')?printf("%c",(c+32)):(c>='a')?(c<='z')?printf("%c",(c-32)):printf("invalied"):printf("invalied"):printf("invalied");
	return 0;

}
