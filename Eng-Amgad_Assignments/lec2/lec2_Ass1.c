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
  	/* define a variables to carry character from user */
	char Local_Character;
	
	/* Ask user to enter a character */
	printf("please enter a character : ");
	
	/* take the character from user */
	scanf("%c",&Local_Character);
	

	/* to print Ascii number of the character */
	printf("the value of this character in Ascii table is : %d",Local_Character);
	
	
	
	
}