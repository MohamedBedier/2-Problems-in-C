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

#include<stdio.h>

/*Standard input _output library */

int main(void)
{
	
	int x = 1052168 ;
	float y = 1268.369 ;
	char z = 65 ;
	/* Ask user to enter the value of x */
	printf("the value of x = %d\n",x);
	/* Ask user to enter the value of y */
	printf("the value of y = %f\n",y);
	
	/* to print Ascii character  */
	printf("the value of z = %c\n",z);
}