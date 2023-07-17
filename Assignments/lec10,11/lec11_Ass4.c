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
int smallest_element(int *ptr , int size);


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
	int array[10]={2,5,6,9,8,10,2,3,4,7};
	/* define a variable */
	int Result=0;
	/* calling smallest_element function */
	/* we passed the name of array as alise for the address of the first element in array */
	Result=smallest_element(array , 10);
	/* print the result of smallest_element in the array */
	printf("smallest_element in the array is %d\n",Result);
	
}
 
int smallest_element(int *ptr , int size)
{
	
	/* define a variables */
		int count_l=0 , Small_element_in_array; 
		
	/* loop untill passing on all element of array */
	    for (count_l = 0; count_l < size; count_l++)
		{
			if(Small_element_in_array >= ptr[count_l])
			{
				Small_element_in_array=ptr[count_l];
				
			}
		}
		return Small_element_in_array ;
}