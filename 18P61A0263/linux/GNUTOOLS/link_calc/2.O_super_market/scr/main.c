/*2	WAP - for the 4 departments of a super market : Sales, Purchase, Stock and SuperMarket in four different source code files.
 * Stock : Maintains a variable for available stock. and 2 functions, addstock and deletestock to update the stock variable on sales or purchase respectively.
 * Sales : Has one function: Sell – It will reduce the stock by the number of items sold. Before selling check if enough stock is available.
 * Purchase : Has one function : Purchase – will increase the stock by the number of items purchased.Set a max value for stock, before purchasing check if the stock room has enough space for new items or not.
 * SuperMarket : Display menu with choices : 1 ) check AvailableStock 2 ) Purchase new items 3) Sell items … this should be continuous as long as the user wants to continue. Program should stop when the user wants to quit.*/

#include"../inc/vr.h"
int main()
{
	int a,y=0,z=0;
       	int i=0,sd=0,pd=0,cv=0;
	while(1)
	{
		printf("\n enter 1 for check Availablestock\n 3 for purchase new iteams\n 2 for sell iteams \n 4 for quit ");
		scanf("%d",&a);
		switch(a)
		{
			case 1:avail();
			       break;
			case 3:{
				       int ip=0;
				       if((ip=pur(i)))
				       {
					       z=ip;
					       pd++;
				       }
			       }
			       break;
			case 2:{
				       int is=0;
				       printf("\nenter iteams number");
				       scanf("%d",&i);
				       if((is=sale(i)))
				       {
					       y=is;
					       sd++;
				       }
				       cv++;
			       }
			       break;
			default:{
					avail();
					printf("\n%d no. of sales done",sd);
					printf("\n%d no. of items sold",y);
					printf("\n%d no. of items purchases",z);
					printf("\n%d no. of purchase done",pd);
					printf("\n%d no.of custemers visited",cv);
					goto rsp;
				}
			       break;
		}
	}
rsp:
	return 0;
}

