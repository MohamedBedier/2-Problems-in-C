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
void Copy_two_Arrays(int *ptr1 , int *ptr2, int size);


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
	int array_2[10];
	int count_l;
	  for (count_l = 0; count_l < 10; count_l++)
		{
			printf("%d\t",array[count_l]);
		}
	

	/* we passed the name of array as alise for the address of the first element in array */
	Copy_two_Arrays(array , array_2 ,10);
	
}
 
void Copy_two_Arrays(int *ptr1 , int *ptr2, int size)
{
	/* define a variables */
		int count_l ,count_I, count_K; 
		
	/* loop untill passing on all element of array */
	    for (count_l = 0; count_l < size; count_l++)
			{
				  ptr2[count_l] = ptr1[count_l];
			}
		printf("\nprint the array2 after copying\n");
		 for (count_I = 0; count_I < size; count_I++)
			{
				printf("%d\t",ptr2[count_I]);
			}
		
}