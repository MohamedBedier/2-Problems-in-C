/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 12                               **/
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

/* prototype of function */
void *swapping(int i , int k);



/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main(void)
{
	/* define integers */
	 int x = 65;
    int y = 120;
    printf(" value of i=%d k=%d before swapping\n", x, y);
	
	swapping(x,y);

    return 0;
	
}
 
void *swapping(int i , int k)
{
	/*  swap two numbers using bitwise operation */
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("value of i=%d k=%d after swapping", i, k);
	
}