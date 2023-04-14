/*2	Write the following program :
 * Declare a two dimensional array of elements and find and print its transpose.
 * eg., if the matrix is :       1 3
 *                               4 5
 *                               7 8
 *
 *its transpose should be :     1 4 7
 *                              3 5 8*/
#include<stdio.h>
int main()
{
#if !(defined r&&defined c)
#error please defined r and c macro values
#endif
	int a[r][c],b[c][r],i=0,j=0;
       for(i=0;i<r;i++)
       {
	       for(j=0;j<c;j++)
	       {
		       scanf("%d",&a[i][j]);
		       b[j][i]=a[i][j];
	       }

       }	       
       for(i=0;i<c;i++)
       {
	       for(j=0;j<r;j++) 
	       printf("%d ",b[i][j]);
	       printf("\n");
       }
       return 0;
       
}
