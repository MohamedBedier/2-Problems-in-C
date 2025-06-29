/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec4_Ass2    
 * @version : 1.00  
 * @brief   : Write a program that reads a positive integer and
 *            checks if it is a perfect square number
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
	int Local_Number ;
	int Local_Counter;
	
	/* Ask user to enter the Number */
	printf("please,Enter a number : ");
	
	/* take the Number from user */
	scanf("%d",&Local_Number);
	
	for(Local_Counter = 1 ; Local_Counter <= (int)(Local_Number/2) ; Local_Counter++)
	{
		/* 4 == 2 * 2
		   9 == 3 * 3	
		   25== 5 * 5	
		   */
		if(Local_Number == Local_Counter * Local_Counter )
		{
			printf("%d is perfect square ", Local_Number);
			/* to end main func write return here  */
			return 0 ;
		}
	}
	
	/* if the number not perfect the compiler will exit from the loop and print not perfect */
	printf("%d is not perfect square ", Local_Number);
}