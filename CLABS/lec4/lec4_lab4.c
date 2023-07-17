/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : print first 10 natural number               **/
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

/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
 
 int counter;
 
 /* using for loop */
 for(counter = 1 ; counter <= 10 ; counter++ )
 {
	 printf("%d\t",counter);
 }
 
}