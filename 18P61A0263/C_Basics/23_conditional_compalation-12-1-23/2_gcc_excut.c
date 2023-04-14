/*2)"1. Need to display different welcome messages depending on the operating system. Define the macro from gcc command. Implement a warning incase the macro is not defined.
 * for WINDOWS : Microsoft Windows Welcomes you
 * for Linux : Linux Welcomes you
 * for Mac : Mac Welcomes you*/
#include<stdio.h>
int main()
{

#if s==1
	printf("Microsoft Windows Welcomes you\n");
#elif s==2
	printf("Linux Welcomes you\n");
#elif s==3
	printf("Mac Welcomes you\n");
#endif

return 0;
}
