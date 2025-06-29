/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec8_Ass4    
 * @version : 1.00  
 * @brief   : Write a C function that takes an array as input and reverse
 *            it without creating another array.
 *            Example:
 *            Input : 1,2,3,4,5
 *            Output: 5,4,3,2,1
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                                                                       
 ************************************************************
 ************************************************************/
void reverse_array(int arr_one[] , int size);



/* 

   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>
#include<math.h>

/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main(void)
{
	/* define two arries  */
	int arr_one[10] = {1,2,3,4,5,6,7,8,9,10};
	/* define an integer varible  */
	int count_I  ;
	/* print arr_one before reverse  */
	printf("arr_one before reverse is : \n");

		for(count_I =0 ; count_I<10 ; count_I++)
		{
			printf("%d\t",arr_one[count_I]);
		}
		printf("\n********************\n");
		
		/* calling function */
		reverse_array(arr_one , 10 );
		
	
}

void reverse_array(int arr_one[] , int size)
{
	/* define integer varibles */
	int temp , count_K,count_I ; 
		printf("arr_one after reverse is : \n");
		for(count_K = 0 ;count_K < (int)ceil(size/2) ;count_K++)
		{
			temp = arr_one[count_K];
			arr_one[count_K] = arr_one[size-1-count_K];
			arr_one[size-1-count_K] = temp;

		}
		
		for(count_I =0 ; count_I<size ; count_I++)
		{
			printf("%d\t",arr_one[count_I]);
		}
}