/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 2                                **/
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
	/* define varibles */
	int Number , bit_number , TGL ;
	
	/* Ask user to enter number */
	printf("PLease Enter number : \n");
	
	/* take number from user   */
	scanf("%d",&Number);
	
	/* Ask user to enter bit_number */
	printf("PLease Enter bit_number : \n");
	
	/* take number  */
	scanf("%d",&bit_number);
	
	 /* Equation :	*/
		TGL = ((Number >> bit_number) & 1); 
	
	/*print the set value   */
	printf("the value after make Set_Bit : %d \n", TGL);
	
	
	
	
}