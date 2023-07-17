/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 9                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* protype of function */
void ReverseString(char arr[] , int size);


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
	
	/* define an array of character  */
	char arr[] = "Mohamed";	
	/* calculate size of array */
	int size = sizeof(arr)/sizeof(arr[0]);
	
	/* calling function ReverseString */
	ReverseString(arr , size);
	
	
}


void ReverseString(char arr[] , int size)
{
	/* define integer */ 
	int count_I;
	
	/* we start with "count_I = size -2" because array elements = size - 1 and null character = one element == size - 1 totally size - 2 */
	for(count_I = size -2 ; count_I >=0 ; count_I-- )
	{
		/* print the array reverslly */
		printf("%c",arr[count_I]);
	}
	
}