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


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main(void)
{
	
	/* define an array of integers  */
	int arr[10] = {10,200,5,6,9,18,65,99,101};
	/* create an array of pointer */
	int *copy_arr[10];
	/* define integers */
	int Max_Num = 0 , Count_I=0 , Count_J=0 , Count_K=0;
	
	/*loop to put all addresses of elements of arr in  array of pointer "copy_arr" */
	for(Count_I =0 ; Count_I < 10 ; Count_I++)
	{
		copy_arr[Count_I] = &arr[Count_I];
	}
	
	printf("print array elements \n");
	
	/* print all the array elements in array using array of pointers */
	for(Count_J =0 ; Count_J < 10 ; Count_J++)
	{
		printf("%d\t",*copy_arr[Count_J]);
	}
	
	printf("\n");
	
	/* print Max_Num in array using array of pointers */
	for(Count_K =0 ; Count_K < 10 ; Count_K++)
	{
		if(*copy_arr[Count_K] > Max_Num )
		Max_Num = *copy_arr[Count_K];
	}
	
	printf("Max_Num is %d",Max_Num);
}
 
