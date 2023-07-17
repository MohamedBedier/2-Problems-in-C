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
	int Number , bit_number , TGL_Number ;
	
	/* Ask user to enter number */
	printf("PLease Enter number : \n");
	
	/* take number  */
	scanf("%d",&Number);
	
	/* Ask user to enter bit_number */
	printf("PLease Enter bit_number : \n");
	
	/* take number  */
	scanf("%d",&bit_number);
	
	 /* Equation :	*/
		TGL_Number = (Number >> bit_number) & 1; 
	
	/*print the set value   */
	printf("the value after make Set_Bit : %d \n", TGL_Number);
	

	
}


/*   
	in some tool chain print true ====> 255

*/