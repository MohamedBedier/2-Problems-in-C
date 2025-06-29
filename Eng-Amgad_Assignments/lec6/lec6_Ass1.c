/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec6_Ass1    
 * @version : 1.00  
 * @brief   : Write a C Function to count the number of ones in the binary
 *            representation of a 32-bit integer
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                                                                       
 ************************************************************
 ************************************************************/


/* protype of function */
void Count_ones(int CopyNumber);

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
	/* define an integer number  */
	int Local_Number ;
	
	/* Ask user to enter the Number */
	printf("please enter the Number : ");
	/* take the Number from user */
	scanf("%d",&Local_Number);
	/* call by value */
	Count_ones(Local_Number);
}
	
void Count_ones(int CopyNumber)
{
	/* define variables */
	int Local_Count_I , Local_Count_Ones= 0,Local_Get_Bit=0;
	
	
	for(Local_Count_I=0 ; Local_Count_I <32 ; Local_Count_I++)
	{
		Local_Get_Bit = ((CopyNumber >> Local_Count_I) & 1);
		/* check if bit has one or zero */
		if(Local_Get_Bit == 1) 					
		{
			/* counter increase one if has one */
			Local_Count_Ones++;
			
		}else
		{
				;
		}
		
		
	}
	/* print counter */
	printf(" the number of ones in the binary representation is %d",Local_Count_Ones);
	
}