/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 5                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* prototype of function  */
void cubeFunction(int number);


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
	cubeFunction(5);
	cubeFunction(2);
	
}

void cubeFunction(int number)
{
	/* define variable */
	int result;
	/* equation */
	result = number * number * number;
	printf("cube of the number is %d\n",result);
}