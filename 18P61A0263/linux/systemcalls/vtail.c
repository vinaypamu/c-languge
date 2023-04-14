//make you are own tail command .
#include<stdio.h>
#include<unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int a,char *b[])
{
	int sum=0,k=1;
	char buff[4024]={0};
	if(a<2)
	{
		write(1,"Command Usage:",15);
		write(1,"vtail -n <arg1> <argb-n>\n",25);
		_exit(0);
	}
	if(b[1][0]=='-')
	{ 
		int i=1,c=0;
		k++;
		while(b[1][i])
		{
			sum=sum*10;
			c=b[1][i]-48;
			sum=sum+c;
			i++;
		}
	}
	if(sum==0)
		sum=10;
	for(;k<a;k++)
	{
		int fd,count=0,q=0;
		fd=open(b[k],O_RDWR);
		if(fd<0)
		{
			printf("==> %s <==\ntail: error reading '%s'\n",b[k],b[k]);
			perror("");
			printf("\n");
			continue;
		}
		lseek(fd,0,SEEK_END);
		while(1)
		{
			q=lseek(fd,-2,SEEK_CUR);
			read(fd,buff,1);
			if(buff[0]=='\n')
				count++;
			if(count==sum||q==0)
			{
				if(count<sum)
				{
					lseek(fd,0,SEEK_SET);
				}
				while(1)
				{
				count=read(fd,buff,4023);
				write(1,buff,count);
				if(count==0)
					break;
				}
				break;
			}
		}
		close(fd);
	}
	_exit(0);
}
		/*			int c=1;
			c=read(fd,buff,1);	
			if(q==1&&c!=0)
			{
				write(1,buff,1);
			}
			else
			{
				x++;
//			printf("%d %c \n",x,buff[0]);
			if(buff[0]=='\n'&&c!=0)
			{
				if(z>sum)
				{
					z=0;
//				printf("%d -zzz sum %d \n",z,sum);
				}
				arr[z++]=x;
//				printf("%d --z\n",z);
//			printf("%c-%d -arr\n",buff[0],arr[z-1]);
			}
			}
			if(c==0)
			{
				if(q==1)
					break;
				q++;
				{
					int a=arr[0];
				for(int i=0;i<sum+1;i++)
				{
					
					if(i==0)
						continue;
					if(a>arr[i])
						a=arr[i];
					if(i==sum)
					{
						arr[0]=a;
		//				printf("%d is low value %d-arr\n",a,arr[1]);
					}
				}
				}
//				if(sum>=z)
//					arr[0]=0;
//			printf("(%d) -lseek\n %d -arr \n",lseek(fd,arr[0],SEEK_SET),arr[0]);
			lseek(fd,arr[0],SEEK_SET);
			}
		}
//		for(int i=0;i<sum+1;i++)
//				printf("%d-arr[%d]\n",arr[i],i);
		close(fd);
	}
	_exit(0);

}*/
