#include"head.h"
char rcase(char a)
{
	if(a>='a'&&a<='z')
		return a-32;
	else if(a>='A'&&a<='Z')
		return a+32;
	else
		return a;
}
