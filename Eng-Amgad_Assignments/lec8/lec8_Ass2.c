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
int Last_index(int arr[] , int size , int Number);

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
		/* define integer */
	int Number , Last_index_In_Array=0;
	/* define an integer with 6 elements */
   int arr[6] = {1, 3, 6, 4, 4, 4};	
	/* Ask user to enter the Number */
	printf("please enter the Number : ");
	/* take the Number from user */
	scanf("%d",&Number);
	Last_index_In_Array = Last_index(arr,6,Number);
	printf("The required number is %d it's index is %d \n",Number ,Last_index_In_Array );
}

int Last_index(int arr[] , int size , int Number)
{
	int counter, Result= 0;
		for(counter = 0 ; counter < size ; counter++)
		{
			if(arr[counter] == Number)
			{
				Result = counter;
			}else
			{
				Result = -1 ;
			}
	}
	return Result;
}