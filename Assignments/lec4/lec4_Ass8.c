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
	/* define  integers   */
	int I , J  , K;
	
	
	/*  we use nested for */
	for(I = 1 ; I <= 5; I++ )
	{
		
		for(K = 1 ; K <= 5 - I ; K++ )
		{
			
			printf(" ");
			
			
		}
		
		for(J = 1 ; J <= 2 * I -1 ; J++ )
		{
			
			printf("*");
			
			
		}
		printf("\n");
		
		
		
		
	}
	
	
	
}