/*************************************************************/
/*************************************************************/
/**              Toggel Bit                                 **/
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
	
	/* define a varible to carry the result of toggling */
	int TGL_Number ;
	
	/* Ask user to enter number */
	printf("PLease Enter number : ");
	
	//* take the number from the user */
	scanf("%d",&Number);
	
	/* Ask user to enter bit_number */
	printf("PLease Enter bit_number : ");
	
	/* take the Bit_Num from the user */
	scanf("%d",&bit_number);
	
	 /* Equation :	*/
		TGL_Number = Number ^( 1 << bit_number); 
	
	/*print the toggle value   */
	printf("the value after make TGL_Bit : %d \n", TGL_Number);
	

	
}


/*   
	in some tool chain print true ====> 255

*/