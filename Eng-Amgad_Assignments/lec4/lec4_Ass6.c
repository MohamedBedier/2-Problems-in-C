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
	int I , J ;
	
	
	/*  we use nested for */
	for(I = 5 ; I > 0 ; I--)
	{
		for(J =0 ; J <= 5 - I  ; J++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
	
}