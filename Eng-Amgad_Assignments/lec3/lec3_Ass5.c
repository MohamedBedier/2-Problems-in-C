
/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 5                                **/
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
	/* define two foating varibles   */
	float Num1 , Num2;
	int Result ;
	
	/* Ask user to enter the 1st number */
	printf("please enter the 1st number : ");
	
	/* take the value Character from user */
	scanf("%f",&Num1);
	
	/* Ask user to enter the 2st number */
	printf("please enter the 2st number : ");
	
	/* take the value Character from user */
	scanf("%f",&Num2);
	
	Result = (int)(Num1 + Num2);
	printf("the integer floor of the sum is %d",Result);
	
	
	
}