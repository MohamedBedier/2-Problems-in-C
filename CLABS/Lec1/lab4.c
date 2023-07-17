/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Ask value from user                        **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* 
   import standard library built in tool chain 
   to take with operating system ====> to print 
   on screen or take any thing from user    
 */

#include<stdio.h>

/*Standard input _output library */

int main(void)
{
	int x;
	
	
	 /* Ask user to enter the value of x */
	printf("Please Enter value of x : ");
	/*take value of x from user */
	scanf("%d",&x);// & address operator 
	
	printf("the value of x is : %d",x);
	
}