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

/*Standard input _output library */
#include<stdio.h>

/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
	/* decleration variable x */
	int x;
	
	
	 /* Ask user to enter the value of x */
	printf("Please Enter value of x : ");
	
	/*take value of x from user */
	scanf("%d",&x);// & address operator 
	
	/* printing the value of x */
	printf("the value of x is : %d",x);
	
}