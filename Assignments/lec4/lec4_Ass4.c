/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 4                                **/
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
	int Number , power , counter , sum = 1;
	
	/* Ask user to enter the Number */
	printf("please enter the Number : ");
	/* take the Number from user */
	scanf("%d",&Number);
	/* Ask user to enter the power */
	printf("please enter the power : ");
	/* take the power from user */
	scanf("%d",&power);
	
	

	for(counter = 0 ; counter < power ; counter++ )
	{
		sum = sum * Number;
	}
	
	printf("%d",sum);
}