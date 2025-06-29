/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec4_Ass6    
 * @version : 1.00  
 * @brief   : Write a program to display half pyramid using stars
 *             pattern.
 *             *
 *             * *
 *             * * *
 *             * * * *
 *             * * * * *
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
	/* define two integers   */
	int Local_count_I , Local_count_J ;
	
	
	/*  we use nested for */
	for(Local_count_I = 0 ; Local_count_I <5 ; Local_count_I++) /* for rows */
	{
		for(Local_count_J =0 ; Local_count_J <= Local_count_I  ; Local_count_J++)/* for column */
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
	
}