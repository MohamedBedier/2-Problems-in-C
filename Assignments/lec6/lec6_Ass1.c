/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 6                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* protype of function */
void Count_ones(int Number);

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
	int Number ;
	
	/* Ask user to enter the Number */
	printf("please enter the Number : ");
	/* take the Number from user */
	scanf("%d",&Number);
	/* call by value */
	Count_ones(Number);
}
	
void Count_ones(int Number)
{
	/* define variables */
	int i , counter= 0;
	for(i=0 ; i <32 ; i++)
	{
		/* check if bit has one or zero */
		if((Number & 1) == 1) 					
		{
			/* counter increase one if has one */
			counter++;
			/* shift left by 1 bit to check the next bit */
			Number = Number >> 1;
		}else
		{
			/* shift left by 1 bit to check the next bit */
			Number = Number >> 1;
		}
		
		
	}
	/* print counter */
	printf(" the number of ones in the binary representation is %d",counter);
	
}