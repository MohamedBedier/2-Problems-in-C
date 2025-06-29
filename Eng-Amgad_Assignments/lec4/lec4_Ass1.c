/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec4_Ass1    
 * @version : 1.00  
 * @brief   : Write a program that reads a positive integer and
 *            checks if it is a prime number
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
	/* define 3 integers   */
	int Local_Number ;
	int Local_Counter_I;
	int Local_Counter_J = 1;
	
	/* Ask user to enter the Number */
	printf("please enter the Number : ");
	/* take the Number from user */
	scanf("%d",&Local_Number);
	
	/* loop to divid number on all previous number and itself */
	for(Local_Counter_I = 2 ; Local_Counter_I <= Local_Number ; Local_Counter_I++)
	{
		/* check of only accept divided on itself or not */
		if(Local_Number % Local_Counter_I == 0)
		{
			/* update counter by 1 */
			Local_Counter_J++;
		}
	}
	
	/* check of prime or not */
	if(Local_Counter_J == 2 )
	{
		printf("%d is a Prime number",Local_Number);
	}else{
		printf("%d is not a Prime number",Local_Number);
	}
	
	
	
	
	
}