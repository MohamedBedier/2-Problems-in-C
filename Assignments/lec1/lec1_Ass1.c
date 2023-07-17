/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 1                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/**********************************************************************/
/**																	 **/
/**  (1) Write a program that takes two integers from the user and   **/
/** print the results of this equation:							     **/
/** Result = ((num1 + num2) * 3) – 10								 **/
/**																	 **/
/**********************************************************************/


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
	int num1 , num2 , Result = 0 ;
	
	/* Ask user to enter the value of num1 */
	printf("please enter the value of num1 : ");
	/* take the value num1 from user */
	scanf("%d",&num1);
	/* Ask user to enter the value of num2  */
	printf("please enter the value of num2 : ");
	/* take the value num2 from user */
	scanf("%d",&num2);
	/* the results of this equation: */
	Result = (((num1 + num2) * 3) - 10 );
	/* to print the value of Result on the screen */
	printf("the Result of the equation is : %d \n",Result);
	

	
}