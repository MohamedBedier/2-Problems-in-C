/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec4_Ass3   
 * @version : 1.00  
 * @brief   :  Write a program to display English alphabets from A to Z
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                                                                       
 ************************************************************
 ************************************************************/





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
	/* define counter   */
	 char Local_counter ;
	
	/* Message for the user */
	printf("English alphabets :\n");
	
	 /* from ascii table */
	for(Local_counter = 65 ; Local_counter <= 90; Local_counter++)
		{
			printf("%c\t",Local_counter);
		}
	
	
	
}