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
	/* define two integers   */
	int Number , Digit ,i , result_one , result_two ;
	
	/* Ask user to enter the value of num1 */
	printf("please enter the value of Number : ");
	/* take the value num1 from user */
	scanf("%d",&Number);
	while(Number != 0)
	{
	    Digit = Number % 10  ;
		result_one = result_one * 10 + Digit;
		Number /= 10 ;
	}
	
		while(result_one != 0)
	{
	    Digit = result_one % 10  ;
		printf("%d\t",Digit);
		result_one /= 10 ;
	}
	
	
	
}