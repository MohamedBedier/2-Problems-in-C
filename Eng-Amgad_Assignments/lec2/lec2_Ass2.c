/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 2                                **/
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
	/* define a varible to carry an integer Number */
	int Local_Number;
	/* define a varible to carry an bit_number */
	int	Local_bit_number; 
	/* define a varible to carry GetBit(the value of this bit in this number ) */
	int	Local_GetBit ;
	
	/* Ask user to enter a number */
	printf("PLease Enter a number : \n");
	
	/* take number from user   */
	scanf("%d",&Local_Number);
	
	/* Ask user to enter bit_number */
	printf("PLease Enter bit_number : \n");
	
	/* take number  */
	scanf("%d",&Local_bit_number);
	
	 /* Equation to get the value of this bit in this number :	*/
	 /* GET_BIT Function */
	Local_GetBit = ((Local_Number >> Local_bit_number) & 1); 
	
	/*print the set value   */
	printf("the value of this bit in this number : %d \n", Local_GetBit);
}