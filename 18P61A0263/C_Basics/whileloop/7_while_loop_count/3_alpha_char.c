//3) Read n characters from user and print if each character is a capital alphabet, small alphabet, numeric character  or special character.
#include<stdio.h>
int main()
{
	int i=0,n;
	scanf("%d",&n);
	while(i<n)
	{
		char c;
		scanf(" %c",&c);
		if(c>='A'&&c<='Z')
			printf("%c is a capital alphabets\n",c);
		else if(c>='a'&&c<='z')
			printf("%c is a small alphabets\n",c);
		else if(c>='0'&&c<='9')
			printf("%c is a numarical char\n",c);
		else
			printf("%c is a special char\n",c);
		i++;
	}
	return 0;
}




