/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec4_Ass4    
 * @version : 1.00  
 * @brief   : Write a program to calculate the power of a number
 *            The number and its power are input from user.
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
/* define 4 integers to carry Number , power , counter , sum  */
	int Number , power , counter , sum = 1;
	
	/* Ask user to enter the Number */
	printf("please enter the Number : ");
	/* take the Number from user */
	scanf("%d",&Number);
	/* Ask user to enter the power */
	printf("please enter the power : ");
	/* take the power from user */
	scanf("%d",&power);
	
	/* i use for loop for summing number by power */
	for(counter = 0 ; counter < power ; counter++ )
	{
		sum *= Number;
	}
	
	printf("%d",sum);
}