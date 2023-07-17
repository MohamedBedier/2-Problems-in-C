/************************************************************************/
/************************************************************************/
/**                                                                    **/
/** File Name : ask user to get multiplication table of a given number **/             
/** Auther    : MOHAMED BEDIER MOHAMED                                 **/
/** Verision :  1.00                                                   **/
/**                                                                    **/
/************************************************************************/
/************************************************************************/




/* 
   import standard library built in tool chain 
   to take with operating system ====> to print 
   on screen or take any thing from user    
 */

#include<stdio.h>

/*Standard input _output library */

/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
 
 int Number , counter_I , counter_J;
 
 /* Ask user to enter number :  */
	printf("please enter Number : ");
	
	/* take The Number from user */
	scanf("%d",&Number);
	printf("multiplication table of Number : %d \n",Number);

	/* check condition */
	for(counter_I = 0 ; counter_I <= 12 ; counter_I++)
	{
		printf(" %d * %d = %d \n",Number ,counter_I,Number*counter_I);
		
	}
	
}