/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec2_Ass1    
 * @version : 1.00  
 * @brief   : print Ascii number of the character which 
				entered by the user.
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                  
 *                                                       
 ************************************************************
 ************************************************************/

/* 
   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/* Standard input _output library */
#include<stdio.h>


/* this is the entry point of the program (the program start from here) 
    Every program must have only one main function  */

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