/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 11                               **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* protype of function */
void Reverse_of_Array(int *ptr , int size);


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
	
	/* define an array of integers */
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	
	/* calling Reverse_of_Array function */
	Reverse_of_Array(array , 10);

	
}
 
void Reverse_of_Array(int *ptr , int size)
{
	/* define a variables */
		int count_l=0 , sum=0; 
		
	/* loop untill passing on all element of array */
	    for (count_l =size -1; count_l >= 0; count_l--)
		{
		/* we passed the name of array as alise for the address of the first element in array */
			printf("%d\t",ptr[count_l]);
		}
		
}