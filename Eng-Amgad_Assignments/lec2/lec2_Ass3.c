/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 3                                **/
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
	/* define an integer to carry Number */
	int Local_Number;
	/* define integers to carry Digit,result_one */
	int Local_Digit=0;
	int Local_result_one=0;
	
	/* Ask user to enter the value of Number */
	printf("please enter a Number : ");
	/* take the value Number from user */
	scanf("%d",&Local_Number);
	/* check on the number if it is from three digits or not */
	if((Local_Number>=0) && (Local_Number <=999))
	{
		/* separates the number into its individual digits */
		while(Local_Number != 0)
		{
			Local_Digit = Local_Number % 10 ;
			Local_result_one = Local_result_one * 10 + Local_Digit;
			Local_Number /= 10 ;
		}
		/* prints the digits separated from one another by three spaces each */
		while(Local_result_one != 0)
		{
			Local_Digit = Local_result_one % 10  ;
			printf("%d\t",Local_Digit);
			Local_result_one /= 10 ;
		}
	
	}else
	{
		/* message for user */
		printf("you entered a number contants of four digits");
	}
	
}