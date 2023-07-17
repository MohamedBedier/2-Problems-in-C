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
void swap_array(int arr_one[] , int arr_two[] , int size);

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
	/* define two arries  */
	int arr_one[5] = {1,2,3,4,5};
	int arr_two[5] = {6,7,8,9,10};
	/* define two integer varibles */
	int count_I ,count_J  ;
	/* print arr_one after swap  */
		for(count_I =0 ; count_I<5 ; count_I++)
		{
			printf("arr_one before swap is : %d \n",arr_one[count_I]);
		}
		printf("********************\n");
		/* print arr_two after swap  */
		for(count_J =0 ; count_J<5 ; count_J++)
		{
			printf("arr_two before swap is : %d \n",arr_two[count_J]);
		}
				printf("********************\n");

		/* calling function */
		swap_array(arr_one ,arr_two , 5 );
		
	
}

void swap_array(int arr_one[] , int arr_two[] , int size)
{
	/* define integer varibles */
	int temp , count_K , count_I ,count_J  ;  
		for(count_K = 0 ;count_K < 5 ;count_K++)
		{
			temp = arr_one[count_K];
			 arr_one[count_K] = arr_two[count_K];
			 arr_two[count_K] = temp ;
		}
		/* print arr_one after swap  */
		for(count_I =0 ; count_I<5 ; count_I++)
		{
			printf("arr_one after swap is : %d \n",arr_one[count_I]);
		}
		printf("********************\n");
			/* print arr_two after swap  */
		for(count_J =0 ; count_J<5 ; count_J++)
		{
			printf("arr_two after swap is : %d \n",arr_two[count_J]);
		}
}