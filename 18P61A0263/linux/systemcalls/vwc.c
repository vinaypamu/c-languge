//make you are own word count command .
#include<stdio.h>
#include<unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int a,char *b[])
{
int k=1,lin=0,wor=0,ch=0;
	char buff[4024]={0};
	if(a<2)
	{
		write(1,"Command Usage:",15);
		write(1,"vwc <argb-n>\n",13);
		_exit(0);
	}
	for(;k<a;k=k+1)
	{
//		printf("%d----loo1\n",k);
		int fd,line=0,word=0,cha=0;
		fd=open(b[k],O_RDWR);
		if(fd<0)
		{
			printf("wc:'%s'\n",b[k]);
			perror("");
			printf("       0        0        0  %s\n",b[k]);
			printf("\n");
			continue;
		}
		int q=0;
		while(1)
		{
			int c=1;
			c=read(fd,buff,4023);
			cha=cha+c;
			for(int i=0;i<c;i++)
			{
				if(i==0&&buff[i]!=' '&&q==0&&buff[i]!='\n'&&buff[i+1]!='/')
				{
					word++;
				printf("%c i=0 w=%d",buff[i+1],word);
				}
				//else if((buff[i]==' '&&buff[i+1]!=' '&&buff[i+1]!='\n'&&buff[i+1]!='*'))//||( buff[i]=='/'&&((buff[i+1]=='/')||(buff[i+1]=='*')||(buff[i+1]!='\n')||(buff[i-1]=='*'&&buff[i-2]==' '))))
				else if((buff[i]==' ')&&(buff[i+1]!=' ')&&(buff[i+1]!='\n')&&(buff[i+1]!='*')&&buff[i-1]!='\n')
				{
					word++;

					printf("%c%c -buff w=%d",buff[i],buff[i+1],word);
//					printf("stt%c%c%c1st%c%c%cend\n",buff[i-2],buff[i-1],buff[i],buff[i],buff[i+1],buff[i+2]);
//					printf("stt%c%c%c1st%c%c%cend\n",buff[i-2],buff[i-1],buff[i],buff[i],buff[i+1],buff[i+2]);
				}
				else if(buff[i]=='\n'&&buff[i+1]!='\n'&&buff[i+1]!=' '&&buff[i+1]!='/'&&(buff[i+1]!='\0'))
				{
					word++;
					printf("i=%c i+1=%c -buff w=%d",buff[i],buff[i+1],word);
//					printf("stt%c%c%c2nd%c%c%cend",buff[i-2],buff[i-1],buff[i],buff[i],buff[i+1],buff[i+2]);
//					printf("start \t 2nd %c%c%c\tend",buff[i],buff[i+1],buff[i+2]);
				}
				else if((buff[i-1]!=' '&&buff[i]=='/'&&buff[i+1]=='/'))
				{
					//printf("%c%c \\double\n",buff[i],buff[i+1]);
					word++;
					printf("%c%c -buff w=%d",buff[i],buff[i+1],word);
					i++;
				}
				else if((buff[i]=='/')&&buff[i-1]!=' '&&((buff[i+1]=='*')||((buff[i-1]=='*')&&(buff[i-2]!=' '))))
				{
						word++;
						printf("%c%c -buff w=%d",buff[i],buff[i+1],word);
						i++;
				}
				else if((buff[i]=='*')&&(buff[i+1]!='/'&&buff[i-1]!='/'))
				{
					printf("%c%c -buff w=%d",buff[i],buff[i+1],word);
						word++;
				}
				if(buff[i]=='\n'&&c!=0)
					line++;
			}
			q++;
			if(c==0)
				break;
			printf(" %d-line  %d-word %d-char -%s\n",line,word,cha,b[k]);
			lin=lin+line;wor=wor+word;ch=ch+cha;
		}
		close(fd);
	}
		printf(" %d-line  %d-word %d-char \n",lin,wor,ch);
	_exit(0);

}
