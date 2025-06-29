/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec4_Ass9    
 * @version : 1.00  
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
	/* define two integers   */
	int I , J  , K , L;
	
	
	/*  we use nested for */
		/*  part 1*/
	for(I = 6 ; I > 0 ; I--)
	{
		for(J =0; J <= 6 - I  ; J++)
		{
			printf(" ");
		}
			printf("*");

		for(L =0 ; L < 2*I - 2  ; L++)
		{
				printf(" ");
		}
			printf("*");
			printf("\n");
	}
	
	/*  part 2 */
	for(I = 0 ; I < 6 ; I++)
	{
		for(J =0; J < 6 - I  ; J++)
		{
			printf(" ");
		}
			printf("*");

		for(L =0 ; L < 2*I ; L++)
		{
				printf(" ");
		}
			printf("*");
			printf("\n");
	}
	
	
}