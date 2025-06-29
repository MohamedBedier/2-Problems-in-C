/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 8                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* protype of function */
int Total(int arr[] , int size);


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
	/* define an integer with ten elements */
	int arr[11] = {1,2,3,4,5,6,7,8,9,10,100 };
	int Result =0 ; 
	/* call function total */
	Result = Total(arr , 11);
	printf("the sum of all elements in array is %d \n",Result);
	
	
}


/* function calculates sum of elements in array */
int Total(int arr[] , int size)
{
	int counter, sum = 0;
	for(counter = 0 ; counter < size ; counter++)
	{
		/* equation */
		sum = sum + arr[counter];
	}
	return sum ;
}