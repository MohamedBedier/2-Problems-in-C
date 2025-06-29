/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Print number using format specifier         **/
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

/*Standard input _output library */
#include<stdio.h>

/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
	
	int x = 1052168 ;
	float y = 1268.369 ;
	char z = 65 ;
	/* Ask user to print the value of x */
	printf("the value of x = %d\n",x);
	
	/* Ask user to print the value of y */
	printf("the value of y = %f\n",y);
	
	/* Ask user to print Ascii character  */
	printf("the value of z = %c\n",z);
}