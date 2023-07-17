/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 1                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/




/* 
   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main(void)
{
	/* define varible   */
	char Character ;
	
	/* Ask user to enter character */
	printf("please enter the character : ");
	/* take the character from user */
	/* Note that we use a space before %c */
	scanf(" %c",&Character);
	

	/* to print Ascii number of the character */
	printf("the value of Result is : %d \n",Character);
	
	
	
	
}