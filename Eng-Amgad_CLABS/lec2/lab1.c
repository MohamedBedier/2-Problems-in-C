/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : check true & fslse value                    **/
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
	int x = 7 , y = 3;
	
	
	 /*print the value of true  */

	printf("the value of true is : %d \n", x > y);
	
	 /*print the value of false  */

	printf("the value of false is : %d\n", x < y);
	
}