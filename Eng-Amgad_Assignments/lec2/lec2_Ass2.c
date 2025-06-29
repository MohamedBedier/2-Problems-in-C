/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec2_Ass2    
 * @version : 1.00  
 * @brief   : Read_Bit
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
	/* define a varible to carry an integer Number */
	int Local_Number;
	/* define a varible to carry an bit_number */
	int	Local_bit_number; 
	/* define a varible to carry GetBit(the value of this bit in this number ) */
	int	Local_GetBit ;
	
	/* Ask user to enter a number */
	printf("PLease Enter a number : ");
	
	/* take number from user   */
	scanf("%d",&Local_Number);
	
	/* Ask user to enter bit_number */
	printf("PLease Enter bit_number : ");
	
	/* take Bit number from the user  */
	scanf("%d",&Local_bit_number);
	
	 /* Equation to get the value of this bit in this number :	*/
	 /* GET_BIT Function */
	Local_GetBit = ((Local_Number >> Local_bit_number) & 1); 
	
	/* print the value of this bit in this number */
	printf("the value of this bit in this number : %d ", Local_GetBit);
}