/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Clear Bit                                   **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* 
   import standard library built in tool chain 
   to take with operating system ====> to print 
   on screen or take any thing from user    
 */

#include<stdio.h>

/*Standard input _output library */

int main(void)
{
	/* define two variables to carry number and bit_num */
	int Number , bit_number ;
	
	/* Ask user to enter number */
	printf("PLease Enter number : ");
	
	//* take the number from the user */
	scanf("%d",&Number);
	
	/* Ask user to enter bit_number */
	printf("PLease Enter bit_number : ");
	
	/* take the Bit_Num from the user */
	scanf("%d",&bit_number);
	
	 /* Equation :	*/
		Number &= (~( 1  << bit_number ));
	
	/*print number after the clr value */
	printf("the value after make CLR_Bit : %d \n", Number);
	

	
}