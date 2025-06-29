/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec1_Ass1    
 * @version : 1.00  
 * @brief   : print the result of two numbers following the equation 
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
	/* define two variables to carry two integers from user */
	int Local_Num_1 = 0 ;
	int Local_Num_2 = 0 ;
	
	/*define a variable to carry result */
	int Local_Result = 0;
	
	/* ask the user to enter number 1 */
	printf("please, Enter the value of num 1 : ");
	
	/* take number 1 from the user */
	scanf("%d",&Local_Num_1);
	
	/* ask the user to enter number 2 */
	printf("please, Enter the value of num 2 : ");
	
	/* take number 2 from the user */
	scanf("%d",&Local_Num_2);
	
	/* calculate the result from this equation */
	Local_Result = (( Local_Num_1 + Local_Num_2 ) * 3 ) - 10;
	
	/* print the results of this equation */
	printf("the results of this equation is : %d",Local_Result);
	
}