/*2	WAP - for the 4 departments of a super market : Sales, Purchase, Stock and SuperMarket in four different source code files.
 * Stock : Maintains a variable for available stock. and 2 functions, addstock and deletestock to update the stock variable on sales or purchase respectively.
 * Sales : Has one function: Sell – It will reduce the stock by the number of items sold. Before selling check if enough stock is available.
 * Purchase : Has one function : Purchase – will increase the stock by the number of items purchased.Set a max value for stock, before purchasing check if the stock room has enough space for new items or not.
 * SuperMarket : Display menu with choices : 1 ) check AvailableStock 2 ) Purchase new items 3) Sell items … this should be continuous as long as the user wants to continue. Program should stop when the user wants to quit.*/

#include"head.h"
int main()
{
	int a;
       	int i=0;
	extern int s;
	while(1)
	{
		printf("\n enter 1 for check Availablestock\n 2 for purchase new iteams\n 3 for sell iteams \n 4 for quit ");
		scanf("%d",&a);
		switch(a)
		{
			case 1:avail();
			       break;
			case 2:pur(i);
			       break;
			case 3:{
				       printf("\nenter iteams number");
				       scanf("%d",&i);
				       sale(i);
			       }
			       break;
			default:goto rsp;
			       break;
		}
	}
rsp:
	return 0;
}

